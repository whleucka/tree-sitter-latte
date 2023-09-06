#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACElayout = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACEblock = 3,
  anon_sym_LBRACE_SLASHblock_RBRACE = 4,
  sym_layout_path = 5,
  sym__name = 6,
  sym_content = 7,
  sym_template = 8,
  sym_layout_tag = 9,
  sym_block_tag = 10,
  aux_sym_template_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACElayout] = "{layout",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACEblock] = "{block",
  [anon_sym_LBRACE_SLASHblock_RBRACE] = "{/block}",
  [sym_layout_path] = "layout_path",
  [sym__name] = "_name",
  [sym_content] = "content",
  [sym_template] = "template",
  [sym_layout_tag] = "layout_tag",
  [sym_block_tag] = "block_tag",
  [aux_sym_template_repeat1] = "template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACElayout] = anon_sym_LBRACElayout,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACEblock] = anon_sym_LBRACEblock,
  [anon_sym_LBRACE_SLASHblock_RBRACE] = anon_sym_LBRACE_SLASHblock_RBRACE,
  [sym_layout_path] = sym_layout_path,
  [sym__name] = sym__name,
  [sym_content] = sym_content,
  [sym_template] = sym_template,
  [sym_layout_tag] = sym_layout_tag,
  [sym_block_tag] = sym_block_tag,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
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
  [anon_sym_LBRACEblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASHblock_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_layout_path] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACElayout);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACEblock);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASHblock_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_layout_path);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_layout_path);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACElayout] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEblock] = ACTIONS(1),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(9),
    [sym_layout_tag] = STATE(2),
    [sym_block_tag] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACElayout,
    ACTIONS(7), 1,
      anon_sym_LBRACEblock,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym_layout_tag,
      sym_block_tag,
      aux_sym_template_repeat1,
  [15] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LBRACElayout,
    ACTIONS(16), 1,
      anon_sym_LBRACEblock,
    STATE(3), 3,
      sym_layout_tag,
      sym_block_tag,
      aux_sym_template_repeat1,
  [30] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
  [36] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
  [42] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
  [48] = 2,
    ACTIONS(25), 1,
      anon_sym_LBRACE_SLASHblock_RBRACE,
    ACTIONS(27), 1,
      sym_content,
  [55] = 1,
    ACTIONS(29), 1,
      sym_layout_path,
  [59] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [63] = 1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
  [67] = 1,
    ACTIONS(35), 1,
      anon_sym_LBRACE_SLASHblock_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 59,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 67,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(8),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_tag, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
