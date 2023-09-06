#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACElayout = 1,
  anon_sym_RBRACE = 2,
  aux_sym_file_path_token1 = 3,
  anon_sym_LBRACEblock = 4,
  anon_sym_LBRACE_SLASHblock_RBRACE = 5,
  anon_sym_LBRACEinclude = 6,
  anon_sym_COMMA = 7,
  sym_include_file_path = 8,
  sym_include_options = 9,
  anon_sym_LBRACE = 10,
  anon_sym_LBRACE_STAR = 11,
  aux_sym_comment_token1 = 12,
  anon_sym_STAR_RBRACE = 13,
  anon_sym_LT = 14,
  aux_sym_html_tag_token1 = 15,
  anon_sym_GT = 16,
  anon_sym_LT_SLASH = 17,
  sym_text = 18,
  sym_template = 19,
  sym_layout_tag = 20,
  sym_file_path = 21,
  sym_block_tag = 22,
  sym_block_name = 23,
  sym_block_content = 24,
  sym_include_tag = 25,
  sym_expression_tag = 26,
  sym_expression_name = 27,
  sym_comment = 28,
  sym_html_tag = 29,
  aux_sym_template_repeat1 = 30,
  aux_sym_block_tag_repeat1 = 31,
  aux_sym_html_tag_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACElayout] = "{layout",
  [anon_sym_RBRACE] = "}",
  [aux_sym_file_path_token1] = "file_path_token1",
  [anon_sym_LBRACEblock] = "{block",
  [anon_sym_LBRACE_SLASHblock_RBRACE] = "{/block}",
  [anon_sym_LBRACEinclude] = "{include",
  [anon_sym_COMMA] = ",",
  [sym_include_file_path] = "include_file_path",
  [sym_include_options] = "include_options",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACE_STAR] = "{*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR_RBRACE] = "*}",
  [anon_sym_LT] = "<",
  [aux_sym_html_tag_token1] = "html_tag_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [sym_text] = "text",
  [sym_template] = "template",
  [sym_layout_tag] = "layout_tag",
  [sym_file_path] = "file_path",
  [sym_block_tag] = "block_tag",
  [sym_block_name] = "block_name",
  [sym_block_content] = "block_content",
  [sym_include_tag] = "include_tag",
  [sym_expression_tag] = "expression_tag",
  [sym_expression_name] = "expression_name",
  [sym_comment] = "comment",
  [sym_html_tag] = "html_tag",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_block_tag_repeat1] = "block_tag_repeat1",
  [aux_sym_html_tag_repeat1] = "html_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACElayout] = anon_sym_LBRACElayout,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_file_path_token1] = aux_sym_file_path_token1,
  [anon_sym_LBRACEblock] = anon_sym_LBRACEblock,
  [anon_sym_LBRACE_SLASHblock_RBRACE] = anon_sym_LBRACE_SLASHblock_RBRACE,
  [anon_sym_LBRACEinclude] = anon_sym_LBRACEinclude,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_include_file_path] = sym_include_file_path,
  [sym_include_options] = sym_include_options,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LBRACE_STAR] = anon_sym_LBRACE_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR_RBRACE] = anon_sym_STAR_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_html_tag_token1] = aux_sym_html_tag_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [sym_text] = sym_text,
  [sym_template] = sym_template,
  [sym_layout_tag] = sym_layout_tag,
  [sym_file_path] = sym_file_path,
  [sym_block_tag] = sym_block_tag,
  [sym_block_name] = sym_block_name,
  [sym_block_content] = sym_block_content,
  [sym_include_tag] = sym_include_tag,
  [sym_expression_tag] = sym_expression_tag,
  [sym_expression_name] = sym_expression_name,
  [sym_comment] = sym_comment,
  [sym_html_tag] = sym_html_tag,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_block_tag_repeat1] = aux_sym_block_tag_repeat1,
  [aux_sym_html_tag_repeat1] = aux_sym_html_tag_repeat1,
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
  [aux_sym_file_path_token1] = {
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
  [anon_sym_LBRACEinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_include_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_include_options] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
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
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_block_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_block_content] = {
    .visible = true,
    .named = true,
  },
  [sym_include_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_html_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_tag_repeat1] = {
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
  [15] = 11,
  [16] = 10,
  [17] = 13,
  [18] = 12,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 11,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 29,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 43,
  [49] = 42,
  [50] = 35,
  [51] = 39,
  [52] = 43,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 37,
  [57] = 36,
  [58] = 58,
  [59] = 59,
  [60] = 55,
  [61] = 41,
  [62] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(45);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACElayout);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_file_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_file_path_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACEblock);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASHblock_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACEinclude);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_include_file_path);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_include_file_path);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_include_options);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_include_options);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_html_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_html_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 30},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACElayout] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEblock] = ACTIONS(1),
    [anon_sym_LBRACE_SLASHblock_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEinclude] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_STAR] = ACTIONS(1),
    [anon_sym_STAR_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(58),
    [sym_layout_tag] = STATE(2),
    [sym_block_tag] = STATE(2),
    [sym_include_tag] = STATE(2),
    [sym_expression_tag] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_html_tag] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACElayout] = ACTIONS(5),
    [anon_sym_LBRACEblock] = ACTIONS(7),
    [anon_sym_LBRACEinclude] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_STAR] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACElayout,
    ACTIONS(7), 1,
      anon_sym_LBRACEblock,
    ACTIONS(9), 1,
      anon_sym_LBRACEinclude,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_text,
    STATE(3), 7,
      sym_layout_tag,
      sym_block_tag,
      sym_include_tag,
      sym_expression_tag,
      sym_comment,
      sym_html_tag,
      aux_sym_template_repeat1,
  [34] = 9,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LBRACElayout,
    ACTIONS(28), 1,
      anon_sym_LBRACEblock,
    ACTIONS(31), 1,
      anon_sym_LBRACEinclude,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      sym_text,
    STATE(3), 7,
      sym_layout_tag,
      sym_block_tag,
      sym_include_tag,
      sym_expression_tag,
      sym_comment,
      sym_html_tag,
      aux_sym_template_repeat1,
  [68] = 8,
    ACTIONS(46), 1,
      anon_sym_LBRACElayout,
    ACTIONS(48), 1,
      anon_sym_LBRACE_SLASHblock_RBRACE,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      sym_text,
    STATE(6), 2,
      sym_block_content,
      aux_sym_block_tag_repeat1,
    STATE(20), 4,
      sym_layout_tag,
      sym_expression_tag,
      sym_comment,
      sym_html_tag,
  [97] = 8,
    ACTIONS(46), 1,
      anon_sym_LBRACElayout,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      sym_text,
    ACTIONS(58), 1,
      anon_sym_LBRACE_SLASHblock_RBRACE,
    STATE(4), 2,
      sym_block_content,
      aux_sym_block_tag_repeat1,
    STATE(20), 4,
      sym_layout_tag,
      sym_expression_tag,
      sym_comment,
      sym_html_tag,
  [126] = 8,
    ACTIONS(60), 1,
      anon_sym_LBRACElayout,
    ACTIONS(63), 1,
      anon_sym_LBRACE_SLASHblock_RBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACE_STAR,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      sym_text,
    STATE(6), 2,
      sym_block_content,
      aux_sym_block_tag_repeat1,
    STATE(20), 4,
      sym_layout_tag,
      sym_expression_tag,
      sym_comment,
      sym_html_tag,
  [155] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(79), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [168] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(83), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [181] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(87), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [194] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(91), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [207] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(95), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [220] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(99), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [233] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(103), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [246] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(107), 6,
      anon_sym_LBRACElayout,
      anon_sym_LBRACEblock,
      anon_sym_LBRACEinclude,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [259] = 2,
    ACTIONS(93), 1,
      sym_text,
    ACTIONS(95), 5,
      anon_sym_LBRACElayout,
      anon_sym_LBRACE_SLASHblock_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [270] = 2,
    ACTIONS(89), 1,
      sym_text,
    ACTIONS(91), 5,
      anon_sym_LBRACElayout,
      anon_sym_LBRACE_SLASHblock_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [281] = 2,
    ACTIONS(101), 1,
      sym_text,
    ACTIONS(103), 5,
      anon_sym_LBRACElayout,
      anon_sym_LBRACE_SLASHblock_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [292] = 2,
    ACTIONS(97), 1,
      sym_text,
    ACTIONS(99), 5,
      anon_sym_LBRACElayout,
      anon_sym_LBRACE_SLASHblock_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [303] = 2,
    ACTIONS(105), 1,
      sym_text,
    ACTIONS(107), 5,
      anon_sym_LBRACElayout,
      anon_sym_LBRACE_SLASHblock_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [314] = 2,
    ACTIONS(111), 1,
      sym_text,
    ACTIONS(109), 5,
      anon_sym_LBRACElayout,
      anon_sym_LBRACE_SLASHblock_RBRACE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_STAR,
      anon_sym_LT,
  [325] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_LT_SLASH,
    ACTIONS(117), 1,
      sym_text,
    STATE(25), 2,
      sym_expression_tag,
      aux_sym_html_tag_repeat1,
  [339] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_LT_SLASH,
    ACTIONS(121), 1,
      sym_text,
    STATE(24), 2,
      sym_expression_tag,
      aux_sym_html_tag_repeat1,
  [353] = 4,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_LT_SLASH,
    ACTIONS(128), 1,
      sym_text,
    STATE(23), 2,
      sym_expression_tag,
      aux_sym_html_tag_repeat1,
  [367] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LT_SLASH,
    ACTIONS(133), 1,
      sym_text,
    STATE(23), 2,
      sym_expression_tag,
      aux_sym_html_tag_repeat1,
  [381] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      sym_text,
    ACTIONS(135), 1,
      anon_sym_LT_SLASH,
    STATE(23), 2,
      sym_expression_tag,
      aux_sym_html_tag_repeat1,
  [395] = 2,
    ACTIONS(93), 1,
      sym_text,
    ACTIONS(95), 2,
      anon_sym_LBRACE,
      anon_sym_LT_SLASH,
  [403] = 2,
    ACTIONS(137), 1,
      aux_sym_file_path_token1,
    STATE(53), 1,
      sym_file_path,
  [410] = 2,
    ACTIONS(137), 1,
      aux_sym_file_path_token1,
    STATE(47), 1,
      sym_file_path,
  [417] = 2,
    ACTIONS(139), 1,
      aux_sym_file_path_token1,
    STATE(48), 1,
      sym_expression_name,
  [424] = 2,
    ACTIONS(139), 1,
      aux_sym_file_path_token1,
    STATE(52), 1,
      sym_expression_name,
  [431] = 2,
    ACTIONS(139), 1,
      aux_sym_file_path_token1,
    STATE(43), 1,
      sym_expression_name,
  [438] = 2,
    ACTIONS(141), 1,
      aux_sym_file_path_token1,
    STATE(45), 1,
      sym_block_name,
  [445] = 1,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
  [449] = 1,
    ACTIONS(145), 1,
      sym_include_file_path,
  [453] = 1,
    ACTIONS(147), 1,
      anon_sym_GT,
  [457] = 1,
    ACTIONS(149), 1,
      aux_sym_html_tag_token1,
  [461] = 1,
    ACTIONS(151), 1,
      aux_sym_html_tag_token1,
  [465] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [469] = 1,
    ACTIONS(155), 1,
      anon_sym_GT,
  [473] = 1,
    ACTIONS(157), 1,
      sym_include_options,
  [477] = 1,
    ACTIONS(159), 1,
      anon_sym_GT,
  [481] = 1,
    ACTIONS(161), 1,
      anon_sym_STAR_RBRACE,
  [485] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [489] = 1,
    ACTIONS(165), 1,
      anon_sym_COMMA,
  [493] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [497] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [501] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
  [505] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [509] = 1,
    ACTIONS(175), 1,
      anon_sym_STAR_RBRACE,
  [513] = 1,
    ACTIONS(177), 1,
      anon_sym_GT,
  [517] = 1,
    ACTIONS(179), 1,
      anon_sym_GT,
  [521] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
  [525] = 1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
  [529] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
  [533] = 1,
    ACTIONS(187), 1,
      aux_sym_comment_token1,
  [537] = 1,
    ACTIONS(189), 1,
      aux_sym_html_tag_token1,
  [541] = 1,
    ACTIONS(191), 1,
      aux_sym_html_tag_token1,
  [545] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [549] = 1,
    ACTIONS(195), 1,
      aux_sym_html_tag_token1,
  [553] = 1,
    ACTIONS(197), 1,
      aux_sym_comment_token1,
  [557] = 1,
    ACTIONS(199), 1,
      anon_sym_GT,
  [561] = 1,
    ACTIONS(201), 1,
      aux_sym_html_tag_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 181,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 314,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 410,
  [SMALL_STATE(29)] = 417,
  [SMALL_STATE(30)] = 424,
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 445,
  [SMALL_STATE(34)] = 449,
  [SMALL_STATE(35)] = 453,
  [SMALL_STATE(36)] = 457,
  [SMALL_STATE(37)] = 461,
  [SMALL_STATE(38)] = 465,
  [SMALL_STATE(39)] = 469,
  [SMALL_STATE(40)] = 473,
  [SMALL_STATE(41)] = 477,
  [SMALL_STATE(42)] = 481,
  [SMALL_STATE(43)] = 485,
  [SMALL_STATE(44)] = 489,
  [SMALL_STATE(45)] = 493,
  [SMALL_STATE(46)] = 497,
  [SMALL_STATE(47)] = 501,
  [SMALL_STATE(48)] = 505,
  [SMALL_STATE(49)] = 509,
  [SMALL_STATE(50)] = 513,
  [SMALL_STATE(51)] = 517,
  [SMALL_STATE(52)] = 521,
  [SMALL_STATE(53)] = 525,
  [SMALL_STATE(54)] = 529,
  [SMALL_STATE(55)] = 533,
  [SMALL_STATE(56)] = 537,
  [SMALL_STATE(57)] = 541,
  [SMALL_STATE(58)] = 545,
  [SMALL_STATE(59)] = 549,
  [SMALL_STATE(60)] = 553,
  [SMALL_STATE(61)] = 557,
  [SMALL_STATE(62)] = 561,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(27),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(32),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(31),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(59),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_tag_repeat1, 2), SHIFT_REPEAT(28),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_tag_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_tag_repeat1, 2), SHIFT_REPEAT(29),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_tag_repeat1, 2), SHIFT_REPEAT(55),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_tag_repeat1, 2), SHIFT_REPEAT(62),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_tag_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_tag, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_tag, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_tag, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_tag, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_tag, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_tag, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_tag, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_tag, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_tag, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_tag, 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_content, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_content, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_tag_repeat1, 2), SHIFT_REPEAT(30),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_tag_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_html_tag_repeat1, 2), SHIFT_REPEAT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_name, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
