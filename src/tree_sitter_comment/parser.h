#ifndef TREE_SITTER_COMMENT_PARSER_H
#define TREE_SITTER_COMMENT_PARSER_H

#include <tree_sitter/parser.h>

bool parse_tagname(TSLexer* lexer, const bool* valid_symbols);
bool parse(TSLexer* lexer, const bool* valid_symbols);

#endif /* ifndef TREE_SITTER_COMMENT_PARSER_H */
