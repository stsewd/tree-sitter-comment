#include <tree_sitter/parser.h>

#include "tree_sitter_comment/scanner.c"
#include "tree_sitter_comment/tokens.h"

void* tree_sitter_comment_external_scanner_create()
{
  return new_comment_scanner();
}

void tree_sitter_comment_external_scanner_destroy(void* payload)
{
  destroy_comment_scanner(payload);
}

unsigned tree_sitter_comment_external_scanner_serialize(
    void* payload,
    char* buffer)
{
  return 0;
}

void tree_sitter_comment_external_scanner_deserialize(
    void* payload,
    const char* buffer,
    unsigned length)
{
}

bool tree_sitter_comment_external_scanner_scan(
    void* payload,
    TSLexer* lexer,
    const bool* valid_symbols)
{
  CommentScanner* scanner = (CommentScanner*)payload;
  scanner->lexer = lexer;
  scanner->valid_symbols = valid_symbols;
  scanner->lookahead = lexer->lookahead;
  scanner->previous = lexer->lookahead;
  return scanner->scan(scanner);
}
