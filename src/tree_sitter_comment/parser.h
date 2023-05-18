#ifndef TREE_SITTER_COMMENT_PARSER_H
#define TREE_SITTER_COMMENT_PARSER_H

#include <tree_sitter/parser.h>

#include "tree_sitter_comment/scanner.h"
#include "tree_sitter_comment/tokens.h"

bool parse_tagname(CommentScanner* scanner);
bool parse_url(CommentScanner* scanner);
bool parse_inner_url(CommentScanner* scanner);
bool parse_text(CommentScanner* scanner, bool end);

#endif /* ifndef TREE_SITTER_COMMENT_PARSER_H */
