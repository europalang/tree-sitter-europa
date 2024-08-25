package tree_sitter_europa_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-europa"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_europa.Language())
	if language == nil {
		t.Errorf("Error loading YourLanguageName grammar")
	}
}
