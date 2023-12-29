#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_LPAREN = 2,
  aux_sym__tag_with_annotation_token1 = 3,
  anon_sym_RPAREN = 4,
  sym__tag_name = 5,
  sym_uri = 6,
  aux_sym__text_token1 = 7,
  anon_sym_SLASH = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_DQUOTE = 10,
  anon_sym_LT = 11,
  anon_sym_LBRACK = 12,
  anon_sym_LBRACE = 13,
  anon_sym_DOT = 14,
  anon_sym_COMMA = 15,
  anon_sym_COLON2 = 16,
  anon_sym_SEMI = 17,
  anon_sym_BANG = 18,
  anon_sym_QMARK = 19,
  anon_sym_BSLASH = 20,
  anon_sym_RBRACE = 21,
  anon_sym_RBRACK = 22,
  anon_sym_GT = 23,
  anon_sym_DASH = 24,
  sym_source = 25,
  sym_tag = 26,
  sym__simple_tag = 27,
  sym__normal_tag = 28,
  sym__tag_with_annotation = 29,
  sym__text = 30,
  sym__stop_char = 31,
  aux_sym_source_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [aux_sym__tag_with_annotation_token1] = "annotation",
  [anon_sym_RPAREN] = ")",
  [sym__tag_name] = "name",
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
  [anon_sym_COLON2] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RBRACE] = "}",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [sym_source] = "source",
  [sym_tag] = "tag",
  [sym__simple_tag] = "_simple_tag",
  [sym__normal_tag] = "_normal_tag",
  [sym__tag_with_annotation] = "_tag_with_annotation",
  [sym__text] = "_text",
  [sym__stop_char] = "_stop_char",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__tag_with_annotation_token1] = aux_sym__tag_with_annotation_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__tag_name] = sym__tag_name,
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
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_source] = sym_source,
  [sym_tag] = sym_tag,
  [sym__simple_tag] = sym__simple_tag,
  [sym__normal_tag] = sym__normal_tag,
  [sym__tag_with_annotation] = sym__tag_with_annotation,
  [sym__text] = sym__text,
  [sym__stop_char] = sym__stop_char,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym__tag_with_annotation_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__tag_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COLON2] = {
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__normal_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_with_annotation] = {
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
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 5:
      if (sym_uri_character_set_1(lookahead)) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__tag_with_annotation_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__tag_with_annotation_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__tag_name);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__tag_name);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_uri);
      if (sym_uri_character_set_1(lookahead)) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(19);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(3);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(18);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(20);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(21);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (!aux_sym__text_token1_character_set_3(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON2);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__tag_name] = ACTIONS(1),
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
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(10),
    [sym_tag] = STATE(2),
    [sym__simple_tag] = STATE(5),
    [sym__normal_tag] = STATE(5),
    [sym__tag_with_annotation] = STATE(5),
    [sym__text] = STATE(2),
    [sym__stop_char] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [sym__tag_name] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [aux_sym__text_token1] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(5),
    [anon_sym_COLON2] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [sym__simple_tag] = STATE(5),
    [sym__normal_tag] = STATE(5),
    [sym__tag_with_annotation] = STATE(5),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [sym__tag_name] = ACTIONS(7),
    [sym_uri] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_COLON2] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
  },
  [3] = {
    [sym_tag] = STATE(3),
    [sym__simple_tag] = STATE(5),
    [sym__normal_tag] = STATE(5),
    [sym__tag_with_annotation] = STATE(5),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [sym__tag_name] = ACTIONS(22),
    [sym_uri] = ACTIONS(19),
    [aux_sym__text_token1] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_COLON2] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(28),
    [sym__tag_name] = ACTIONS(35),
    [sym_uri] = ACTIONS(28),
    [aux_sym__text_token1] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [anon_sym_LT] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_DOT] = ACTIONS(28),
    [anon_sym_COMMA] = ACTIONS(28),
    [anon_sym_COLON2] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_QMARK] = ACTIONS(28),
    [anon_sym_BSLASH] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(28),
    [anon_sym_GT] = ACTIONS(28),
    [anon_sym_DASH] = ACTIONS(28),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym__tag_name] = ACTIONS(39),
    [sym_uri] = ACTIONS(37),
    [aux_sym__text_token1] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON2] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_QMARK] = ACTIONS(37),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym__tag_name] = ACTIONS(43),
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
    [anon_sym_COLON2] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_QMARK] = ACTIONS(41),
    [anon_sym_BSLASH] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym__tag_name] = ACTIONS(47),
    [sym_uri] = ACTIONS(45),
    [aux_sym__text_token1] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_COLON2] = ACTIONS(45),
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
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym__tag_name] = ACTIONS(51),
    [sym_uri] = ACTIONS(49),
    [aux_sym__text_token1] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_COLON2] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_QMARK] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(53), 1,
      aux_sym__tag_with_annotation_token1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [7] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [15] = 1,
    ACTIONS(61), 1,
      anon_sym_COLON,
  [19] = 1,
    ACTIONS(63), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 7,
  [SMALL_STATE(11)] = 11,
  [SMALL_STATE(12)] = 15,
  [SMALL_STATE(13)] = 19,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_tag, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_tag, 1), SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_tag, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_tag, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_tag, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_annotation, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_annotation, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tag_with_annotation, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_with_annotation, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
