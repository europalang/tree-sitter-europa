/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: 'europa',

    rules: {
        source_file: $ => repeat($._stmt),

        num_literal: _ => /\d+\.\d+|\d+\.?|\.\d+/,
        id_literal: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
        str_literal: _ => /".*"/,
        bool_literal: _ => choice("true", "false"),
        array_literal: $ => seq("[", optional(commaSep1($._expr)), "]"),

        //TODO: null literal
        //TODO: unary expressions
        //TODO: comments
        //TODO: array literals and map literals
        //TODO: array dereference expr and lvalue stmt

        _stmt: $ => choice(
            // Semicolon terminated
            seq(choice(
                $.use_stmt,
                $.decl_stmt,
                $.assign_stmt,
                $.return_stmt,
                $.break_stmt,
                $.continue_stmt,

                $.fn_call
            ), ";"),

            // Non-semicolon terminated
            choice(
                $.if_stmt,
                $.while_stmt,
                $.do_while_stmt,
                $.for_loop,

                $.fn_decl,
                $.block
            )
        ),

        _expr: $ => choice(
            $.num_literal,
            $.bool_literal,
            $.str_literal,
            $.id_literal,
            $.array_literal,

            $.binary_expr,
            $.group_expr,
            $.ternary_expr,
            $.fn_call
        ),

        use_stmt: $ => seq("use", sep1($.id_literal, ".")),

        decl_stmt: $ => seq("var", commaSep1(seq($.id_literal, "=", $._expr))),
        assign_stmt: $ => seq($.id_literal, choice(
            "=",
            "+=",
            "-=",
            "*=",
            "/=",
            "^=",
            "%="
        ), $._expr),

        return_stmt: $ => seq("return", $._expr),
        break_stmt: _ => "break",
        continue_stmt: _ => "continue",

        if_stmt: $ => seq("if", $._expr, $.block, repeat($.if_stmt_elif), optional($.if_stmt_else)),
        if_stmt_elif: $ => seq("elif", $._expr, $.block),
        if_stmt_else: $ => seq("else", $.block),

        while_stmt: $ => seq("while", $._expr, $.block),
        do_while_stmt: $ => seq("do", $.block, "while", $._expr),

        for_loop: $ => seq("for", $.id_literal, "in", $._expr, $.block),

        block: $ => seq("{", repeat($._stmt), "}"),

        binary_expr: $ => prec.left(seq($._expr, choice(
            "+", "-", "*", "/", "^", "%",
            ">", ">=", "<", "<=", "==", "!="
        ), $._expr)),

        group_expr: $ => seq("(", $._expr, ")"),

        //TODO: This is not ideal
        ternary_expr: $ => prec.right(seq($._expr, "?", $._expr, ":", $._expr)),

        fn_decl: $ => seq("fn", $.id_literal, "(", 
            commaSep1($.id_literal), //TODO: support default arguments
        ")", $.block),

        //TODO: support object methods, e.g. Io.stdin.readline()
        fn_call: $ => seq($.id_literal, "(", optional(commaSep1($._expr)), ")")
    }
});

/**
 * Define a comma seperated list of rules.
 * 
 * @param {RuleOrLiteral} rule
 */
function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)));
}

/**
 * Define a list of rules seperated by a custom seperator.
 * 
 * @param {RuleOrLiteral} rule
 * @param {string} separator
 */
function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}