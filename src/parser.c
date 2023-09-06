#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACElayout = 1,
  anon_sym_RBRACE = 2,
  aux_sym_layout_path_token1 = 3,
  anon_sym_LBRACEblock = 4,
  anon_sym_LBRACE_SLASHblock_RBRACE = 5,
  anon_sym_PIPE = 6,
  sym_text = 7,
  sym_source_file = 8,
  sym__element = 9,
  sym_layout_tag = 10,
  sym_layout_path = 11,
  sym_block_tag = 12,
  sym_filter = 13,
  aux_sym_source_file_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACElayout] = "{layout",
  [anon_sym_RBRACE] = "}",
  [aux_sym_layout_path_token1] = "layout_path_token1",
  [anon_sym_LBRACEblock] = "{block",
  [anon_sym_LBRACE_SLASHblock_RBRACE] = "{/block}",
  [anon_sym_PIPE] = "|",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_layout_tag] = "layout_tag",
  [sym_layout_path] = "layout_path",
  [sym_block_tag] = "block_tag",
  [sym_filter] = "filter",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACElayout] = anon_sym_LBRACElayout,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_layout_path_token1] = aux_sym_layout_path_token1,
  [anon_sym_LBRACEblock] = anon_sym_LBRACEblock,
  [anon_sym_LBRACE_SLASHblock_RBRACE] = anon_sym_LBRACE_SLASHblock_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_layout_tag] = sym_layout_tag,
  [sym_layout_path] = sym_layout_path,
  [sym_block_tag] = sym_block_tag,
  [sym_filter] = sym_filter,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACElayout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_layout_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACEblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASHblock_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_layout_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_path] = {
    .visible = true,
    .named = true,
  },
  [sym_block_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACElayout);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_layout_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_layout_path_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACEblock);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASHblock_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACElayout] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEblock] = ACTIONS(1),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__element] = STATE(3),
    [sym_layout_tag] = STATE(3),
    [sym_block_tag] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym_layout_tag] = STATE(2),
    [sym_block_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LBRACElayout] = ACTIONS(13),
    [anon_sym_LBRACEblock] = ACTIONS(16),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [3] = {
    [sym__element] = STATE(2),
    [sym_layout_tag] = STATE(2),
    [sym_block_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [sym_text] = ACTIONS(26),
  },
  [4] = {
    [sym__element] = STATE(5),
    [sym_layout_tag] = STATE(5),
    [sym_block_tag] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(28),
    [sym_text] = ACTIONS(30),
  },
  [5] = {
    [sym__element] = STATE(2),
    [sym_layout_tag] = STATE(2),
    [sym_block_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(32),
    [sym_text] = ACTIONS(26),
  },
  [6] = {
    [sym__element] = STATE(7),
    [sym_layout_tag] = STATE(7),
    [sym_block_tag] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(32),
    [sym_text] = ACTIONS(34),
  },
  [7] = {
    [sym__element] = STATE(2),
    [sym_layout_tag] = STATE(2),
    [sym_block_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(36),
    [sym_text] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(40), 3,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACE_SLASHblock_RBRACE,
  [10] = 2,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(44), 3,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACE_SLASHblock_RBRACE,
  [20] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(48), 3,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACE_SLASHblock_RBRACE,
  [30] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(52), 3,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACE_SLASHblock_RBRACE,
  [40] = 3,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_PIPE,
    STATE(18), 1,
      sym_filter,
  [50] = 2,
    ACTIONS(58), 1,
      aux_sym_layout_path_token1,
    STATE(16), 1,
      sym_layout_path,
  [57] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [61] = 1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
  [65] = 1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
  [69] = 1,
    ACTIONS(66), 1,
      aux_sym_layout_path_token1,
  [73] = 1,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
  [77] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 10,
  [SMALL_STATE(10)] = 20,
  [SMALL_STATE(11)] = 30,
  [SMALL_STATE(12)] = 40,
  [SMALL_STATE(13)] = 50,
  [SMALL_STATE(14)] = 57,
  [SMALL_STATE(15)] = 61,
  [SMALL_STATE(16)] = 65,
  [SMALL_STATE(17)] = 69,
  [SMALL_STATE(18)] = 73,
  [SMALL_STATE(19)] = 77,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_tag, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_tag, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_tag, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_tag, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 5),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_tag, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_path, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_latte(void) {
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
