#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACElayout = 1,
  anon_sym_LBRACEextends = 2,
  anon_sym_QMARK = 3,
  anon_sym_COLON = 4,
  anon_sym_RBRACE = 5,
  sym_var_name = 6,
  aux_sym_condition_token1 = 7,
  anon_sym_LBRACEimport = 8,
  anon_sym_LBRACEdefine = 9,
  anon_sym_LBRACEinclude = 10,
  anon_sym_LBRACE_STAR = 11,
  aux_sym_comment_token1 = 12,
  anon_sym_STAR_RBRACE = 13,
  sym_template = 14,
  sym_content = 15,
  sym_layout_tag = 16,
  sym_condition = 17,
  sym_import_tag = 18,
  sym_define_tag = 19,
  sym_include_tag = 20,
  sym_block_name = 21,
  sym_file_path = 22,
  sym_comment = 23,
  aux_sym_template_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACElayout] = "{layout",
  [anon_sym_LBRACEextends] = "{extends",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym_var_name] = "var_name",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_LBRACEimport] = "{import",
  [anon_sym_LBRACEdefine] = "{define",
  [anon_sym_LBRACEinclude] = "{include",
  [anon_sym_LBRACE_STAR] = "{*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR_RBRACE] = "*}",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_layout_tag] = "layout_tag",
  [sym_condition] = "condition",
  [sym_import_tag] = "import_tag",
  [sym_define_tag] = "define_tag",
  [sym_include_tag] = "include_tag",
  [sym_block_name] = "block_name",
  [sym_file_path] = "file_path",
  [sym_comment] = "comment",
  [aux_sym_template_repeat1] = "template_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACElayout] = anon_sym_LBRACElayout,
  [anon_sym_LBRACEextends] = anon_sym_LBRACEextends,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_var_name] = sym_var_name,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_LBRACEimport] = anon_sym_LBRACEimport,
  [anon_sym_LBRACEdefine] = anon_sym_LBRACEdefine,
  [anon_sym_LBRACEinclude] = anon_sym_LBRACEinclude,
  [anon_sym_LBRACE_STAR] = anon_sym_LBRACE_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR_RBRACE] = anon_sym_STAR_RBRACE,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_layout_tag] = sym_layout_tag,
  [sym_condition] = sym_condition,
  [sym_import_tag] = sym_import_tag,
  [sym_define_tag] = sym_define_tag,
  [sym_include_tag] = sym_include_tag,
  [sym_block_name] = sym_block_name,
  [sym_file_path] = sym_file_path,
  [sym_comment] = sym_comment,
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
  [anon_sym_LBRACEextends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_var_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACEimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_import_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_define_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_include_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '?') ADVANCE(36);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 32:
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACElayout);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACEextends);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_var_name);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACEimport);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACEdefine);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACEinclude);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACElayout] = ACTIONS(1),
    [anon_sym_LBRACEextends] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_var_name] = ACTIONS(1),
    [anon_sym_LBRACEimport] = ACTIONS(1),
    [anon_sym_LBRACEdefine] = ACTIONS(1),
    [anon_sym_LBRACEinclude] = ACTIONS(1),
    [anon_sym_LBRACE_STAR] = ACTIONS(1),
    [anon_sym_STAR_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(20),
    [sym_content] = STATE(2),
    [sym_layout_tag] = STATE(6),
    [sym_import_tag] = STATE(6),
    [sym_define_tag] = STATE(6),
    [sym_include_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEextends] = ACTIONS(5),
    [anon_sym_LBRACEimport] = ACTIONS(7),
    [anon_sym_LBRACEdefine] = ACTIONS(9),
    [anon_sym_LBRACEinclude] = ACTIONS(11),
    [anon_sym_LBRACE_STAR] = ACTIONS(13),
  },
  [2] = {
    [sym_content] = STATE(3),
    [sym_layout_tag] = STATE(6),
    [sym_import_tag] = STATE(6),
    [sym_define_tag] = STATE(6),
    [sym_include_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEextends] = ACTIONS(5),
    [anon_sym_LBRACEimport] = ACTIONS(7),
    [anon_sym_LBRACEdefine] = ACTIONS(9),
    [anon_sym_LBRACEinclude] = ACTIONS(11),
    [anon_sym_LBRACE_STAR] = ACTIONS(13),
  },
  [3] = {
    [sym_content] = STATE(3),
    [sym_layout_tag] = STATE(6),
    [sym_import_tag] = STATE(6),
    [sym_define_tag] = STATE(6),
    [sym_include_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACElayout] = ACTIONS(19),
    [anon_sym_LBRACEextends] = ACTIONS(19),
    [anon_sym_LBRACEimport] = ACTIONS(22),
    [anon_sym_LBRACEdefine] = ACTIONS(25),
    [anon_sym_LBRACEinclude] = ACTIONS(28),
    [anon_sym_LBRACE_STAR] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(34), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [10] = 1,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [20] = 1,
    ACTIONS(38), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [30] = 1,
    ACTIONS(40), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [40] = 1,
    ACTIONS(42), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [50] = 1,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [60] = 1,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEextends,
      anon_sym_LBRACEimport,
      anon_sym_LBRACEdefine,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE_STAR,
  [70] = 2,
    ACTIONS(48), 1,
      aux_sym_condition_token1,
    STATE(16), 1,
      sym_file_path,
  [77] = 2,
    ACTIONS(48), 1,
      aux_sym_condition_token1,
    STATE(29), 1,
      sym_file_path,
  [84] = 2,
    ACTIONS(50), 1,
      aux_sym_condition_token1,
    STATE(25), 1,
      sym_block_name,
  [91] = 2,
    ACTIONS(50), 1,
      aux_sym_condition_token1,
    STATE(24), 1,
      sym_block_name,
  [98] = 1,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      sym_var_name,
  [103] = 2,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      sym_var_name,
  [110] = 2,
    ACTIONS(58), 1,
      aux_sym_condition_token1,
    STATE(28), 1,
      sym_condition,
  [117] = 1,
    ACTIONS(60), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [122] = 2,
    ACTIONS(58), 1,
      aux_sym_condition_token1,
    STATE(26), 1,
      sym_condition,
  [129] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [133] = 1,
    ACTIONS(64), 1,
      anon_sym_QMARK,
  [137] = 1,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
  [141] = 1,
    ACTIONS(68), 1,
      anon_sym_STAR_RBRACE,
  [145] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
  [149] = 1,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
  [153] = 1,
    ACTIONS(74), 1,
      anon_sym_COLON,
  [157] = 1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
  [161] = 1,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
  [165] = 1,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 77,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 91,
  [SMALL_STATE(15)] = 98,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 110,
  [SMALL_STATE(18)] = 117,
  [SMALL_STATE(19)] = 122,
  [SMALL_STATE(20)] = 129,
  [SMALL_STATE(21)] = 133,
  [SMALL_STATE(22)] = 137,
  [SMALL_STATE(23)] = 141,
  [SMALL_STATE(24)] = 145,
  [SMALL_STATE(25)] = 149,
  [SMALL_STATE(26)] = 153,
  [SMALL_STATE(27)] = 157,
  [SMALL_STATE(28)] = 161,
  [SMALL_STATE(29)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_tag, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_tag, 8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_tag, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_tag, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
