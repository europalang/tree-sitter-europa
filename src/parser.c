#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_num_literal = 1,
  sym_id_literal = 2,
  sym_str_literal = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_LBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACK = 8,
  anon_sym_SEMI = 9,
  anon_sym_use = 10,
  anon_sym_DOT = 11,
  anon_sym_var = 12,
  anon_sym_EQ = 13,
  anon_sym_PLUS_EQ = 14,
  anon_sym_DASH_EQ = 15,
  anon_sym_STAR_EQ = 16,
  anon_sym_SLASH_EQ = 17,
  anon_sym_CARET_EQ = 18,
  anon_sym_PERCENT_EQ = 19,
  anon_sym_return = 20,
  sym_break_stmt = 21,
  sym_continue_stmt = 22,
  anon_sym_if = 23,
  anon_sym_elif = 24,
  anon_sym_else = 25,
  anon_sym_while = 26,
  anon_sym_do = 27,
  anon_sym_for = 28,
  anon_sym_in = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_CARET = 36,
  anon_sym_PERCENT = 37,
  anon_sym_GT = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_EQ_EQ = 42,
  anon_sym_BANG_EQ = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_QMARK = 46,
  anon_sym_COLON = 47,
  anon_sym_fn = 48,
  sym_source_file = 49,
  sym_bool_literal = 50,
  sym_array_literal = 51,
  sym__stmt = 52,
  sym__expr = 53,
  sym_use_stmt = 54,
  sym_decl_stmt = 55,
  sym_assign_stmt = 56,
  sym_return_stmt = 57,
  sym_if_stmt = 58,
  sym_if_stmt_elif = 59,
  sym_if_stmt_else = 60,
  sym_while_stmt = 61,
  sym_do_while_stmt = 62,
  sym_for_loop = 63,
  sym_block = 64,
  sym_binary_expr = 65,
  sym_group_expr = 66,
  sym_ternary_expr = 67,
  sym_fn_decl = 68,
  sym_fn_call = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_array_literal_repeat1 = 71,
  aux_sym_use_stmt_repeat1 = 72,
  aux_sym_decl_stmt_repeat1 = 73,
  aux_sym_if_stmt_repeat1 = 74,
  aux_sym_fn_decl_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_num_literal] = "num_literal",
  [sym_id_literal] = "id_literal",
  [sym_str_literal] = "str_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_use] = "use",
  [anon_sym_DOT] = ".",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_return] = "return",
  [sym_break_stmt] = "break_stmt",
  [sym_continue_stmt] = "continue_stmt",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_fn] = "fn",
  [sym_source_file] = "source_file",
  [sym_bool_literal] = "bool_literal",
  [sym_array_literal] = "array_literal",
  [sym__stmt] = "_stmt",
  [sym__expr] = "_expr",
  [sym_use_stmt] = "use_stmt",
  [sym_decl_stmt] = "decl_stmt",
  [sym_assign_stmt] = "assign_stmt",
  [sym_return_stmt] = "return_stmt",
  [sym_if_stmt] = "if_stmt",
  [sym_if_stmt_elif] = "if_stmt_elif",
  [sym_if_stmt_else] = "if_stmt_else",
  [sym_while_stmt] = "while_stmt",
  [sym_do_while_stmt] = "do_while_stmt",
  [sym_for_loop] = "for_loop",
  [sym_block] = "block",
  [sym_binary_expr] = "binary_expr",
  [sym_group_expr] = "group_expr",
  [sym_ternary_expr] = "ternary_expr",
  [sym_fn_decl] = "fn_decl",
  [sym_fn_call] = "fn_call",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_use_stmt_repeat1] = "use_stmt_repeat1",
  [aux_sym_decl_stmt_repeat1] = "decl_stmt_repeat1",
  [aux_sym_if_stmt_repeat1] = "if_stmt_repeat1",
  [aux_sym_fn_decl_repeat1] = "fn_decl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_num_literal] = sym_num_literal,
  [sym_id_literal] = sym_id_literal,
  [sym_str_literal] = sym_str_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_return] = anon_sym_return,
  [sym_break_stmt] = sym_break_stmt,
  [sym_continue_stmt] = sym_continue_stmt,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fn] = anon_sym_fn,
  [sym_source_file] = sym_source_file,
  [sym_bool_literal] = sym_bool_literal,
  [sym_array_literal] = sym_array_literal,
  [sym__stmt] = sym__stmt,
  [sym__expr] = sym__expr,
  [sym_use_stmt] = sym_use_stmt,
  [sym_decl_stmt] = sym_decl_stmt,
  [sym_assign_stmt] = sym_assign_stmt,
  [sym_return_stmt] = sym_return_stmt,
  [sym_if_stmt] = sym_if_stmt,
  [sym_if_stmt_elif] = sym_if_stmt_elif,
  [sym_if_stmt_else] = sym_if_stmt_else,
  [sym_while_stmt] = sym_while_stmt,
  [sym_do_while_stmt] = sym_do_while_stmt,
  [sym_for_loop] = sym_for_loop,
  [sym_block] = sym_block,
  [sym_binary_expr] = sym_binary_expr,
  [sym_group_expr] = sym_group_expr,
  [sym_ternary_expr] = sym_ternary_expr,
  [sym_fn_decl] = sym_fn_decl,
  [sym_fn_call] = sym_fn_call,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_use_stmt_repeat1] = aux_sym_use_stmt_repeat1,
  [aux_sym_decl_stmt_repeat1] = aux_sym_decl_stmt_repeat1,
  [aux_sym_if_stmt_repeat1] = aux_sym_if_stmt_repeat1,
  [aux_sym_fn_decl_repeat1] = aux_sym_fn_decl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_num_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_id_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_str_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_stmt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_use_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt_elif] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt_else] = {
    .visible = true,
    .named = true,
  },
  [sym_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_group_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 18,
  [20] = 15,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 26,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 31,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 31,
  [95] = 26,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '!', 3,
        '"', 2,
        '%', 151,
        '(', 158,
        ')', 159,
        '*', 145,
        '+', 141,
        ',', 102,
        '-', 143,
        '.', 108,
        '/', 147,
        ':', 161,
        ';', 104,
        '<', 154,
        '=', 112,
        '>', 152,
        '?', 160,
        '[', 101,
        ']', 103,
        '^', 149,
        'b', 40,
        'c', 35,
        'd', 36,
        'e', 29,
        'f', 12,
        'i', 22,
        'r', 14,
        't', 37,
        'u', 42,
        'v', 13,
        'w', 24,
        '{', 138,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '(', 158,
        ')', 159,
        '.', 50,
        '[', 101,
        ']', 103,
        'f', 58,
        't', 87,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '!', 3,
        '%', 150,
        '(', 158,
        ')', 159,
        '*', 144,
        '+', 140,
        ',', 102,
        '-', 142,
        '.', 107,
        '/', 146,
        ':', 161,
        ';', 104,
        '<', 154,
        '=', 9,
        '>', 152,
        '?', 160,
        ']', 103,
        '^', 148,
        'b', 85,
        'c', 81,
        'd', 82,
        'f', 77,
        'i', 67,
        'r', 59,
        'u', 88,
        'v', 57,
        'w', 69,
        '{', 138,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 4,
        '(', 158,
        '*', 5,
        '+', 6,
        '-', 7,
        '/', 8,
        '=', 111,
        '^', 10,
        'b', 85,
        'c', 81,
        'd', 82,
        'e', 74,
        'f', 77,
        'i', 67,
        'r', 59,
        'u', 88,
        'v', 57,
        'w', 69,
        '{', 138,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_num_literal);
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'f') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'f') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'h') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'i') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'k') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'u') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_str_literal);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_break_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_continue_stmt);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_continue_stmt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 51},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 51},
  [34] = {.lex_state = 51},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 51},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 51},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 51},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 51},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 51},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 51},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 51},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 51},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 51},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 52},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 49},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 49},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 49},
  [100] = {.lex_state = 49},
  [101] = {.lex_state = 49},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_num_literal] = ACTIONS(1),
    [sym_str_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_break_stmt] = ACTIONS(1),
    [sym_continue_stmt] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__stmt] = STATE(16),
    [sym_use_stmt] = STATE(98),
    [sym_decl_stmt] = STATE(98),
    [sym_assign_stmt] = STATE(98),
    [sym_return_stmt] = STATE(98),
    [sym_if_stmt] = STATE(16),
    [sym_while_stmt] = STATE(16),
    [sym_do_while_stmt] = STATE(16),
    [sym_for_loop] = STATE(16),
    [sym_block] = STATE(16),
    [sym_fn_decl] = STATE(16),
    [sym_fn_call] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id_literal] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [sym_break_stmt] = ACTIONS(13),
    [sym_continue_stmt] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(27), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [40] = 2,
    ACTIONS(35), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(33), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [77] = 2,
    ACTIONS(39), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(37), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [114] = 2,
    ACTIONS(43), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(41), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [151] = 2,
    ACTIONS(47), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(45), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [188] = 2,
    ACTIONS(51), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(49), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [225] = 5,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(55), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [268] = 2,
    ACTIONS(65), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(63), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [305] = 2,
    ACTIONS(69), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(67), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [342] = 2,
    ACTIONS(73), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(71), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [379] = 2,
    ACTIONS(77), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_fn,
    ACTIONS(75), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
  [416] = 14,
    ACTIONS(81), 1,
      sym_id_literal,
    ACTIONS(84), 1,
      anon_sym_use,
    ACTIONS(87), 1,
      anon_sym_var,
    ACTIONS(90), 1,
      anon_sym_return,
    ACTIONS(96), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_while,
    ACTIONS(102), 1,
      anon_sym_do,
    ACTIONS(105), 1,
      anon_sym_for,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_fn,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(93), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(13), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [472] = 5,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(116), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [510] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(13), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [565] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(13), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [620] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(13), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [675] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(15), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [730] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(20), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [785] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(13), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [840] = 14,
    ACTIONS(5), 1,
      sym_id_literal,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_var,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_for,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(98), 5,
      sym_use_stmt,
      sym_decl_stmt,
      sym_assign_stmt,
      sym_return_stmt,
      sym_fn_call,
    STATE(17), 8,
      sym__stmt,
      sym_if_stmt,
      sym_while_stmt,
      sym_do_while_stmt,
      sym_for_loop,
      sym_block,
      sym_fn_decl,
      aux_sym_source_file_repeat1,
  [895] = 6,
    ACTIONS(136), 1,
      anon_sym_elif,
    ACTIONS(138), 1,
      anon_sym_else,
    STATE(63), 1,
      sym_if_stmt_else,
    STATE(23), 2,
      sym_if_stmt_elif,
      aux_sym_if_stmt_repeat1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(134), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [927] = 6,
    ACTIONS(136), 1,
      anon_sym_elif,
    ACTIONS(138), 1,
      anon_sym_else,
    STATE(53), 1,
      sym_if_stmt_else,
    STATE(24), 2,
      sym_if_stmt_elif,
      aux_sym_if_stmt_repeat1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(142), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [959] = 4,
    ACTIONS(148), 1,
      anon_sym_elif,
    STATE(24), 2,
      sym_if_stmt_elif,
      aux_sym_if_stmt_repeat1,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(146), 12,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [986] = 2,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(153), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1007] = 2,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(157), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1028] = 6,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_decl_stmt_repeat1,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1057] = 4,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1082] = 6,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1111] = 6,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1140] = 2,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(173), 13,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1161] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    STATE(47), 1,
      sym_block,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1187] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    STATE(52), 1,
      sym_block,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1213] = 5,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1239] = 7,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 2,
      sym_num_literal,
      sym_str_literal,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1269] = 7,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(189), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(30), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1299] = 5,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1325] = 4,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1349] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(28), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1376] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(8), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1403] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(66), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1430] = 2,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(203), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1449] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(205), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(27), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1476] = 4,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1499] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(209), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(3), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1526] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(211), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(60), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1553] = 2,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(215), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1572] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(14), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1599] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(219), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(33), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1626] = 2,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(157), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1645] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(221), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(34), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1672] = 2,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(225), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1691] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(229), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1710] = 2,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(233), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1729] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(235), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(59), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1756] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(237), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(32), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1783] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(239), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(38), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1810] = 2,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(173), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1829] = 4,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1852] = 4,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1875] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(245), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(37), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1902] = 6,
    ACTIONS(179), 1,
      sym_id_literal,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(247), 2,
      sym_num_literal,
      sym_str_literal,
    STATE(44), 7,
      sym_bool_literal,
      sym_array_literal,
      sym__expr,
      sym_binary_expr,
      sym_group_expr,
      sym_ternary_expr,
      sym_fn_call,
  [1929] = 2,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(142), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1948] = 2,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(251), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1967] = 2,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(255), 11,
      sym_id_literal,
      anon_sym_use,
      anon_sym_var,
      anon_sym_return,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_if,
      anon_sym_while,
      anon_sym_do,
      anon_sym_for,
      anon_sym_fn,
  [1986] = 4,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2009] = 2,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 7,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PERCENT_EQ,
  [2022] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(163), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2033] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_fn_decl_repeat1,
  [2043] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_decl_stmt_repeat1,
  [2053] = 3,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_use_stmt_repeat1,
  [2063] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_array_literal_repeat1,
  [2073] = 3,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_use_stmt_repeat1,
  [2083] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_array_literal_repeat1,
  [2093] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_fn_decl_repeat1,
  [2103] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_decl_stmt_repeat1,
  [2113] = 3,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      aux_sym_use_stmt_repeat1,
  [2123] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_fn_decl_repeat1,
  [2133] = 2,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [2140] = 2,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_block,
  [2147] = 1,
    ACTIONS(276), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [2152] = 2,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [2159] = 1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2164] = 2,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [2171] = 1,
    ACTIONS(299), 1,
      anon_sym_EQ,
  [2175] = 1,
    ACTIONS(301), 1,
      sym_id_literal,
  [2179] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [2183] = 1,
    ACTIONS(305), 1,
      sym_id_literal,
  [2187] = 1,
    ACTIONS(307), 1,
      anon_sym_EQ,
  [2191] = 1,
    ACTIONS(309), 1,
      sym_id_literal,
  [2195] = 1,
    ACTIONS(311), 1,
      sym_id_literal,
  [2199] = 1,
    ACTIONS(313), 1,
      sym_id_literal,
  [2203] = 1,
    ACTIONS(315), 1,
      anon_sym_while,
  [2207] = 1,
    ACTIONS(171), 1,
      anon_sym_while,
  [2211] = 1,
    ACTIONS(155), 1,
      anon_sym_while,
  [2215] = 1,
    ACTIONS(317), 1,
      anon_sym_in,
  [2219] = 1,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
  [2223] = 1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [2227] = 1,
    ACTIONS(323), 1,
      sym_id_literal,
  [2231] = 1,
    ACTIONS(325), 1,
      sym_id_literal,
  [2235] = 1,
    ACTIONS(327), 1,
      sym_id_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 268,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 416,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 565,
  [SMALL_STATE(17)] = 620,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 730,
  [SMALL_STATE(20)] = 785,
  [SMALL_STATE(21)] = 840,
  [SMALL_STATE(22)] = 895,
  [SMALL_STATE(23)] = 927,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 986,
  [SMALL_STATE(26)] = 1007,
  [SMALL_STATE(27)] = 1028,
  [SMALL_STATE(28)] = 1057,
  [SMALL_STATE(29)] = 1082,
  [SMALL_STATE(30)] = 1111,
  [SMALL_STATE(31)] = 1140,
  [SMALL_STATE(32)] = 1161,
  [SMALL_STATE(33)] = 1187,
  [SMALL_STATE(34)] = 1213,
  [SMALL_STATE(35)] = 1239,
  [SMALL_STATE(36)] = 1269,
  [SMALL_STATE(37)] = 1299,
  [SMALL_STATE(38)] = 1325,
  [SMALL_STATE(39)] = 1349,
  [SMALL_STATE(40)] = 1376,
  [SMALL_STATE(41)] = 1403,
  [SMALL_STATE(42)] = 1430,
  [SMALL_STATE(43)] = 1449,
  [SMALL_STATE(44)] = 1476,
  [SMALL_STATE(45)] = 1499,
  [SMALL_STATE(46)] = 1526,
  [SMALL_STATE(47)] = 1553,
  [SMALL_STATE(48)] = 1572,
  [SMALL_STATE(49)] = 1599,
  [SMALL_STATE(50)] = 1626,
  [SMALL_STATE(51)] = 1645,
  [SMALL_STATE(52)] = 1672,
  [SMALL_STATE(53)] = 1691,
  [SMALL_STATE(54)] = 1710,
  [SMALL_STATE(55)] = 1729,
  [SMALL_STATE(56)] = 1756,
  [SMALL_STATE(57)] = 1783,
  [SMALL_STATE(58)] = 1810,
  [SMALL_STATE(59)] = 1829,
  [SMALL_STATE(60)] = 1852,
  [SMALL_STATE(61)] = 1875,
  [SMALL_STATE(62)] = 1902,
  [SMALL_STATE(63)] = 1929,
  [SMALL_STATE(64)] = 1948,
  [SMALL_STATE(65)] = 1967,
  [SMALL_STATE(66)] = 1986,
  [SMALL_STATE(67)] = 2009,
  [SMALL_STATE(68)] = 2022,
  [SMALL_STATE(69)] = 2033,
  [SMALL_STATE(70)] = 2043,
  [SMALL_STATE(71)] = 2053,
  [SMALL_STATE(72)] = 2063,
  [SMALL_STATE(73)] = 2073,
  [SMALL_STATE(74)] = 2083,
  [SMALL_STATE(75)] = 2093,
  [SMALL_STATE(76)] = 2103,
  [SMALL_STATE(77)] = 2113,
  [SMALL_STATE(78)] = 2123,
  [SMALL_STATE(79)] = 2133,
  [SMALL_STATE(80)] = 2140,
  [SMALL_STATE(81)] = 2147,
  [SMALL_STATE(82)] = 2152,
  [SMALL_STATE(83)] = 2159,
  [SMALL_STATE(84)] = 2164,
  [SMALL_STATE(85)] = 2171,
  [SMALL_STATE(86)] = 2175,
  [SMALL_STATE(87)] = 2179,
  [SMALL_STATE(88)] = 2183,
  [SMALL_STATE(89)] = 2187,
  [SMALL_STATE(90)] = 2191,
  [SMALL_STATE(91)] = 2195,
  [SMALL_STATE(92)] = 2199,
  [SMALL_STATE(93)] = 2203,
  [SMALL_STATE(94)] = 2207,
  [SMALL_STATE(95)] = 2211,
  [SMALL_STATE(96)] = 2215,
  [SMALL_STATE(97)] = 2219,
  [SMALL_STATE(98)] = 2223,
  [SMALL_STATE(99)] = 2227,
  [SMALL_STATE(100)] = 2231,
  [SMALL_STATE(101)] = 2235,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expr, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expr, 5, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expr, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_expr, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 5, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_stmt, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_stmt, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt_elif, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt_elif, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_stmt_repeat1, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_decl, 6, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_decl, 6, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_stmt, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_stmt, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 5, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 5, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt_else, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt_else, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_decl, 7, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_decl, 7, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stmt, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 5, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_stmt, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_stmt_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_stmt_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_stmt_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_stmt_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_stmt, 3, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_decl_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_europa(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
