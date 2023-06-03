#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_LPAREN = 2,
  aux_sym__user_token1 = 3,
  anon_sym_RPAREN = 4,
  aux_sym__text_token1 = 5,
  anon_sym_SLASH = 6,
  anon_sym_SQUOTE = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_LT = 9,
  anon_sym_LBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_DOT = 12,
  anon_sym_COMMA = 13,
  anon_sym_SEMI = 14,
  anon_sym_BANG = 15,
  anon_sym_QMARK = 16,
  anon_sym_BSLASH = 17,
  anon_sym_RBRACE = 18,
  anon_sym_RBRACK = 19,
  anon_sym_GT = 20,
  anon_sym_DASH = 21,
  sym___newline = 22,
  sym_name = 23,
  sym_invalid_token = 24,
  sym_source = 25,
  sym_tag = 26,
  sym__user = 27,
  sym__text = 28,
  sym__stop_char = 29,
  aux_sym_source_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [aux_sym__user_token1] = "user",
  [anon_sym_RPAREN] = ")",
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
  [sym___newline] = "__newline",
  [sym_name] = "name",
  [sym_invalid_token] = "invalid_token",
  [sym_source] = "source",
  [sym_tag] = "tag",
  [sym__user] = "_user",
  [sym__text] = "text",
  [sym__stop_char] = "_stop_char",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__user_token1] = aux_sym__user_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym___newline] = sym___newline,
  [sym_name] = sym_name,
  [sym_invalid_token] = sym_invalid_token,
  [sym_source] = sym_source,
  [sym_tag] = sym_tag,
  [sym__user] = sym__user,
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
  [aux_sym__user_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym___newline] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_token] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__user] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = true,
    .named = false,
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
};

static inline bool aux_sym__text_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(7);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__user_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__user_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym___newline);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

enum {
  ts_external_token_name = 0,
  ts_external_token_invalid_token = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_name] = sym_name,
  [ts_external_token_invalid_token] = sym_invalid_token,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_name] = true,
    [ts_external_token_invalid_token] = true,
  },
  [2] = {
    [ts_external_token_name] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(1),
    [sym_invalid_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(8),
    [sym_tag] = STATE(2),
    [sym__text] = STATE(2),
    [sym__stop_char] = STATE(4),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(9),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(4),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(9),
  },
  [3] = {
    [sym_tag] = STATE(3),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(4),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [aux_sym__text_token1] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [aux_sym__text_token1] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [aux_sym__text_token1] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [sym___newline] = ACTIONS(3),
    [sym_name] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym___newline,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__user,
  [13] = 2,
    ACTIONS(3), 1,
      sym___newline,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [20] = 2,
    ACTIONS(39), 1,
      aux_sym__user_token1,
    ACTIONS(41), 1,
      sym___newline,
  [27] = 2,
    ACTIONS(3), 1,
      sym___newline,
    ACTIONS(43), 1,
      anon_sym_COLON,
  [34] = 2,
    ACTIONS(3), 1,
      sym___newline,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
  [41] = 2,
    ACTIONS(3), 1,
      sym___newline,
    ACTIONS(47), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 13,
  [SMALL_STATE(9)] = 20,
  [SMALL_STATE(10)] = 27,
  [SMALL_STATE(11)] = 34,
  [SMALL_STATE(12)] = 41,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user, 3),
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
