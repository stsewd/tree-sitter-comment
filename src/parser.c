#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_LPAREN = 2,
  aux_sym__user_token1 = 3,
  anon_sym_RPAREN = 4,
  sym___newline = 5,
  sym___whitespace = 6,
  sym_name = 7,
  sym__text = 8,
  sym_source = 9,
  sym_tag = 10,
  sym__user = 11,
  aux_sym_source_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [aux_sym__user_token1] = "user",
  [anon_sym_RPAREN] = ")",
  [sym___newline] = "__newline",
  [sym___whitespace] = "__whitespace",
  [sym_name] = "name",
  [sym__text] = "text",
  [sym_source] = "source",
  [sym_tag] = "tag",
  [sym__user] = "_user",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__user_token1] = aux_sym__user_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym___newline] = sym___newline,
  [sym___whitespace] = sym___whitespace,
  [sym_name] = sym_name,
  [sym__text] = sym__text,
  [sym_source] = sym_source,
  [sym_tag] = sym_tag,
  [sym__user] = sym__user,
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
  [sym___newline] = {
    .visible = false,
    .named = true,
  },
  [sym___whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
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
  [sym__user] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(6);
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
      if (lookahead == '\n') ADVANCE(7);
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
      ACCEPT_TOKEN(sym___newline);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym___whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

enum {
  ts_external_token_name = 0,
  ts_external_token__text = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_name] = sym_name,
  [ts_external_token__text] = sym__text,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_name] = true,
    [ts_external_token__text] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym___newline] = ACTIONS(3),
    [sym___whitespace] = ACTIONS(3),
    [sym_name] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(7),
    [sym_tag] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym___newline] = ACTIONS(3),
    [sym___whitespace] = ACTIONS(3),
    [sym_name] = ACTIONS(7),
    [sym__text] = ACTIONS(9),
  },
  [2] = {
    [sym_tag] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym___newline] = ACTIONS(3),
    [sym___whitespace] = ACTIONS(3),
    [sym_name] = ACTIONS(7),
    [sym__text] = ACTIONS(13),
  },
  [3] = {
    [sym_tag] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym___newline] = ACTIONS(3),
    [sym___whitespace] = ACTIONS(3),
    [sym_name] = ACTIONS(17),
    [sym__text] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__user,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
  [14] = 2,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
    ACTIONS(27), 3,
      sym_name,
      sym__text,
      ts_builtin_sym_end,
  [24] = 2,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
    ACTIONS(29), 3,
      sym_name,
      sym__text,
      ts_builtin_sym_end,
  [34] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
  [42] = 2,
    ACTIONS(33), 1,
      aux_sym__user_token1,
    ACTIONS(35), 2,
      sym___newline,
      sym___whitespace,
  [50] = 2,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
  [58] = 2,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
  [66] = 2,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym___newline,
      sym___whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 66,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
