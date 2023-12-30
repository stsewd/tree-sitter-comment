#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  sym__simple_tag_name = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  aux_sym__tag_annotation_token1 = 5,
  anon_sym_RPAREN = 6,
  sym_uri = 7,
  aux_sym__text_token1 = 8,
  anon_sym_SLASH = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_DQUOTE = 11,
  anon_sym_LT = 12,
  anon_sym_LBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_DOT = 15,
  anon_sym_COMMA = 16,
  anon_sym_SEMI = 17,
  anon_sym_BANG = 18,
  anon_sym_QMARK = 19,
  anon_sym_BSLASH = 20,
  anon_sym_RBRACE = 21,
  anon_sym_RBRACK = 22,
  anon_sym_GT = 23,
  anon_sym_DASH = 24,
  sym__tag_name = 25,
  sym__invalid_token = 26,
  sym_source = 27,
  sym_simple_tag = 28,
  sym_tag = 29,
  sym__tag_annotation = 30,
  sym__text = 31,
  sym__stop_char = 32,
  aux_sym_source_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [sym__simple_tag_name] = "name",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [aux_sym__tag_annotation_token1] = "annotation",
  [anon_sym_RPAREN] = ")",
  [sym_uri] = "uri",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT] = "<",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RBRACE] = "}",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [sym__tag_name] = "name",
  [sym__invalid_token] = "_invalid_token",
  [sym_source] = "source",
  [sym_simple_tag] = "tag",
  [sym_tag] = "tag",
  [sym__tag_annotation] = "_tag_annotation",
  [sym__text] = "_text",
  [sym__stop_char] = "_stop_char",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [sym__simple_tag_name] = sym__tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__tag_annotation_token1] = aux_sym__tag_annotation_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_uri] = sym_uri,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__tag_name] = sym__tag_name,
  [sym__invalid_token] = sym__invalid_token,
  [sym_source] = sym_source,
  [sym_simple_tag] = sym_tag,
  [sym_tag] = sym_tag,
  [sym__tag_annotation] = sym__tag_annotation,
  [sym__text] = sym__text,
  [sym__stop_char] = sym__stop_char,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__simple_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tag_annotation_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_token] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__stop_char] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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
};

static inline bool sym_uri_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ')'
      ? (c < '\''
        ? (c >= '!' && c <= '"')
        : c <= '\'')
      : (c <= ')' || c == ','))
    : (c <= '.' || (c < '\\'
      ? (c < '>'
        ? (c >= ':' && c <= ';')
        : c <= '?')
      : (c <= ']' || c == '}'))));
}

static inline bool aux_sym__text_token1_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= ')')))
    : (c <= '<' || (c < '{'
      ? (c < '['
        ? (c >= '>' && c <= '?')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym__text_token1_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= ')')))
    : (c <= '/' || (c < '['
      ? (c < '>'
        ? (c >= ';' && c <= '<')
        : c <= '?')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym__text_token1_character_set_3(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= ')')))
    : (c <= '/' || (c < '['
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= '?')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(15);
      END_STATE();
    case 6:
      if (sym_uri_character_set_1(lookahead)) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(17);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__simple_tag_name);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__simple_tag_name);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__tag_annotation_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_uri);
      if (sym_uri_character_set_1(lookahead)) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(20);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(3);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(19);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(21);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(22);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

enum {
  ts_external_token__tag_name = 0,
  ts_external_token__invalid_token = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__tag_name] = sym__tag_name,
  [ts_external_token__invalid_token] = sym__invalid_token,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__tag_name] = true,
    [ts_external_token__invalid_token] = true,
  },
  [2] = {
    [ts_external_token__tag_name] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_uri] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__tag_name] = ACTIONS(1),
    [sym__invalid_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(10),
    [sym_simple_tag] = STATE(7),
    [sym_tag] = STATE(2),
    [sym__text] = STATE(2),
    [sym__stop_char] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [sym_uri] = ACTIONS(9),
    [aux_sym__text_token1] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [sym__tag_name] = ACTIONS(13),
  },
  [2] = {
    [sym_simple_tag] = STATE(7),
    [sym_tag] = STATE(3),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_uri] = ACTIONS(17),
    [aux_sym__text_token1] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [sym__tag_name] = ACTIONS(13),
  },
  [3] = {
    [sym_simple_tag] = STATE(7),
    [sym_tag] = STATE(3),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(26),
    [sym_uri] = ACTIONS(26),
    [aux_sym__text_token1] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(26),
    [anon_sym_COMMA] = ACTIONS(26),
    [anon_sym_SEMI] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(26),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(26),
    [anon_sym_RBRACK] = ACTIONS(26),
    [anon_sym_GT] = ACTIONS(26),
    [anon_sym_DASH] = ACTIONS(26),
    [sym__tag_name] = ACTIONS(32),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [sym_uri] = ACTIONS(35),
    [aux_sym__text_token1] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_BSLASH] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [sym__tag_name] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_uri] = ACTIONS(21),
    [aux_sym__text_token1] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [sym__tag_name] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_source_token1] = ACTIONS(3),
    [sym__simple_tag_name] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym_uri] = ACTIONS(41),
    [aux_sym__text_token1] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [sym__tag_name] = ACTIONS(41),
  },
  [7] = {
    [sym__text] = STATE(5),
    [sym__stop_char] = STATE(5),
    [aux_sym_source_token1] = ACTIONS(45),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [aux_sym__text_token1] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_QMARK] = ACTIONS(45),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
  },
  [8] = {
    [aux_sym_source_token1] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [aux_sym__text_token1] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_source_token1,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__tag_annotation,
  [13] = 2,
    ACTIONS(3), 1,
      aux_sym_source_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [20] = 2,
    ACTIONS(55), 1,
      aux_sym_source_token1,
    ACTIONS(57), 1,
      aux_sym__tag_annotation_token1,
  [27] = 2,
    ACTIONS(3), 1,
      aux_sym_source_token1,
    ACTIONS(59), 1,
      anon_sym_COLON,
  [34] = 2,
    ACTIONS(3), 1,
      aux_sym_source_token1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
  [41] = 2,
    ACTIONS(3), 1,
      aux_sym_source_token1,
    ACTIONS(63), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 13,
  [SMALL_STATE(11)] = 20,
  [SMALL_STATE(12)] = 27,
  [SMALL_STATE(13)] = 34,
  [SMALL_STATE(14)] = 41,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_tag, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_annotation, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_comment_external_scanner_create(void);
void tree_sitter_comment_external_scanner_destroy(void *);
bool tree_sitter_comment_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_comment_external_scanner_serialize(void *, char *);
void tree_sitter_comment_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_comment(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_comment_external_scanner_create,
      tree_sitter_comment_external_scanner_destroy,
      tree_sitter_comment_external_scanner_scan,
      tree_sitter_comment_external_scanner_serialize,
      tree_sitter_comment_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
