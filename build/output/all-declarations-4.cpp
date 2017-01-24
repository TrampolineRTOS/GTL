#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_gtl_module_grammar [] = {
// At index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
  NONTERMINAL (13) // <gtl_relation_term>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 3 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_let) // $let$
, NONTERMINAL (10) // <gtl_variable>
, NONTERMINAL (36) // <select_gtl_5F_instruction_5F_parser_0>
, END_PRODUCTION
// At index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_unlet) // $unlet$
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_error) // $error$
, NONTERMINAL (11) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 15 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_warning) // $warning$
, NONTERMINAL (11) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 20 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_print) // $print$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 23 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_println) // $println$
, NONTERMINAL (37) // <select_gtl_5F_instruction_5F_parser_1>
, END_PRODUCTION
// At index 26 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_display) // $display$
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 29 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 256
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_sort) // $sort$
, NONTERMINAL (10) // <gtl_variable>
, NONTERMINAL (38) // <select_gtl_5F_instruction_5F_parser_2>
, END_PRODUCTION
// At index 33 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 289
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_tab) // $tab$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 36 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 303
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 38 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 315
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_libraries) // $libraries$
, END_PRODUCTION
// At index 40 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 326
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B__21_) // $[!$
, NONTERMINAL (10) // <gtl_variable>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (40) // <select_gtl_5F_instruction_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 46 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 368
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_import) // $import$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 49 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 736
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (68) // <select_gtl_5F_expression_5F_parser_25>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 53 : <gtl_instruction_list>, in file 'gtl_module_parser.ggs', line 45
, NONTERMINAL (18) // <select_gtl_5F_module_5F_parser_0>
, END_PRODUCTION
// At index 55 : <gtl_module_start_symbol>, in file 'gtl_module_parser.ggs', line 65
, NONTERMINAL (19) // <select_gtl_5F_module_5F_parser_1>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 58 : <gtl_function>, in file 'gtl_module_parser.ggs', line 90
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_func) // $func$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (3) // <gtl_argument_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_func) // $func$
, END_PRODUCTION
// At index 66 : <gtl_getter>, in file 'gtl_module_parser.ggs', line 109
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_getter) // $getter$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (3) // <gtl_argument_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_getter) // $getter$
, END_PRODUCTION
// At index 76 : <gtl_setter>, in file 'gtl_module_parser.ggs', line 134
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_setter) // $setter$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (3) // <gtl_argument_list>
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_setter) // $setter$
, END_PRODUCTION
// At index 85 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 157
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (21) // <select_gtl_5F_module_5F_parser_3>
, NONTERMINAL (22) // <select_gtl_5F_module_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, END_PRODUCTION
// At index 94 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 190
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_foreach) // $foreach$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (23) // <select_gtl_5F_module_5F_parser_5>
, NONTERMINAL (24) // <select_gtl_5F_module_5F_parser_6>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (25) // <select_gtl_5F_module_5F_parser_7>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (26) // <select_gtl_5F_module_5F_parser_8>
, NONTERMINAL (27) // <select_gtl_5F_module_5F_parser_9>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_foreach) // $foreach$
, END_PRODUCTION
// At index 108 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 254
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_for) // $for$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (28) // <select_gtl_5F_module_5F_parser_10>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (29) // <select_gtl_5F_module_5F_parser_11>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_for) // $for$
, END_PRODUCTION
// At index 119 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 294
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_loop) // $loop$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_from) // $from$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_module_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_to) // $to$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (31) // <select_gtl_5F_module_5F_parser_13>
, NONTERMINAL (32) // <select_gtl_5F_module_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (33) // <select_gtl_5F_module_5F_parser_15>
, NONTERMINAL (34) // <select_gtl_5F_module_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_loop) // $loop$
, END_PRODUCTION
// At index 135 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 354
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_repeat) // $repeat$
, NONTERMINAL (35) // <select_gtl_5F_module_5F_parser_17>
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_while) // $while$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_repeat) // $repeat$
, END_PRODUCTION
// At index 145 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 687
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (64) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 149 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 722
, NONTERMINAL (67) // <select_gtl_5F_expression_5F_parser_24>
, END_PRODUCTION
// At index 151 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 355
, NONTERMINAL (42) // <select_gtl_5F_instruction_5F_parser_6>
, END_PRODUCTION
// At index 153 : <gtl_relation_term>, in file 'gtl_expression_parser.ggs', line 53
, NONTERMINAL (14) // <gtl_relation_factor>
, NONTERMINAL (44) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 156 : <gtl_relation_factor>, in file 'gtl_expression_parser.ggs', line 69
, NONTERMINAL (15) // <gtl_simple_expression>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_2>
, END_PRODUCTION
// At index 159 : <gtl_simple_expression>, in file 'gtl_expression_parser.ggs', line 117
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 162 : <gtl_term>, in file 'gtl_expression_parser.ggs', line 162
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 165 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 192
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 169 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 208
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_not) // $not$
, NONTERMINAL (17) // <gtl_factor>
, END_PRODUCTION
// At index 172 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 220
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (17) // <gtl_factor>
, END_PRODUCTION
// At index 175 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 232
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (17) // <gtl_factor>
, END_PRODUCTION
// At index 178 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 244
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (17) // <gtl_factor>
, END_PRODUCTION
// At index 181 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 256
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_yes) // $yes$
, END_PRODUCTION
// At index 183 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 269
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_no) // $no$
, END_PRODUCTION
// At index 185 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 282
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 187 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 295
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_double) // $literal_double$
, END_PRODUCTION
// At index 189 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 308
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 191 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 321
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_char) // $literal_char$
, END_PRODUCTION
// At index 193 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 335
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (48) // <select_gtl_5F_expression_5F_parser_5>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 199 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 369
, NONTERMINAL (10) // <gtl_variable>
, NONTERMINAL (50) // <select_gtl_5F_expression_5F_parser_7>
, END_PRODUCTION
// At index 202 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 401
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (10) // <gtl_variable>
, NONTERMINAL (53) // <select_gtl_5F_expression_5F_parser_10>
, END_PRODUCTION
// At index 206 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 420
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_typeof) // $typeof$
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 209 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 429
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 211 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 445
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 213 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 461
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum) // $literal_enum$
, END_PRODUCTION
// At index 215 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 477
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 218 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 514
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_emptylist) // $emptylist$
, END_PRODUCTION
// At index 220 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 533
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_emptymap) // $emptymap$
, END_PRODUCTION
// At index 222 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 552
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mapof) // $mapof$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (54) // <select_gtl_5F_expression_5F_parser_11>
, END_PRODUCTION
// At index 226 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 576
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_listof) // $listof$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 230 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 587
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__28_) // $@($
, NONTERMINAL (55) // <select_gtl_5F_expression_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 234 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 606
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__5B_) // $@[$
, NONTERMINAL (57) // <select_gtl_5F_expression_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 238 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 627
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__7B_) // $@{$
, NONTERMINAL (59) // <select_gtl_5F_expression_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 242 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 648
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__21_) // $@!$
, NONTERMINAL (61) // <select_gtl_5F_expression_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21_) // $!$
, END_PRODUCTION
// At index 246 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 667
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__3F_) // $@?$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3F_) // $?$
, END_PRODUCTION
// At index 250 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 678
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_) // $__VARS__$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 252 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
, END_PRODUCTION
// At index 253 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
, NONTERMINAL (9) // <gtl_instruction>
, NONTERMINAL (18) // <select_gtl_5F_module_5F_parser_0>
, END_PRODUCTION
// At index 256 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
, NONTERMINAL (1) // <gtl_simple_instruction>
, NONTERMINAL (18) // <select_gtl_5F_module_5F_parser_0>
, END_PRODUCTION
// At index 259 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 69
, END_PRODUCTION
// At index 260 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 69
, NONTERMINAL (2) // <gtl_import>
, NONTERMINAL (19) // <select_gtl_5F_module_5F_parser_1>
, END_PRODUCTION
// At index 263 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
, END_PRODUCTION
// At index 264 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
, NONTERMINAL (6) // <gtl_function>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 267 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
, NONTERMINAL (7) // <gtl_getter>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 270 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
, NONTERMINAL (8) // <gtl_setter>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 273 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 164
, END_PRODUCTION
// At index 274 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 164
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_elsif) // $elsif$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (21) // <select_gtl_5F_module_5F_parser_3>
, END_PRODUCTION
// At index 280 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 174
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_else) // $else$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 283 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 174
, END_PRODUCTION
// At index 284 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 202
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 287 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 202
, END_PRODUCTION
// At index 288 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 208
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 292 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 208
, END_PRODUCTION
// At index 293 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 216
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 296 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 216
, END_PRODUCTION
// At index 297 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 224
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 300 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 224
, END_PRODUCTION
// At index 301 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 229
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 304 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 229
, END_PRODUCTION
// At index 305 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 268
, END_PRODUCTION
// At index 306 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 268
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (28) // <select_gtl_5F_module_5F_parser_10>
, END_PRODUCTION
// At index 310 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 278
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 313 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 278
, END_PRODUCTION
// At index 314 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 311
, END_PRODUCTION
// At index 315 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 311
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_up) // $up$
, END_PRODUCTION
// At index 317 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 311
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_down) // $down$
, END_PRODUCTION
// At index 319 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 319
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_step) // $step$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 322 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 319
, END_PRODUCTION
// At index 323 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 324
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 326 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 324
, END_PRODUCTION
// At index 327 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 332
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 330 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 332
, END_PRODUCTION
// At index 331 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 337
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 334 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 337
, END_PRODUCTION
// At index 335 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 360
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 339 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 360
, END_PRODUCTION
// At index 340 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 343 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B__3D_) // $+=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 346 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D__3D_) // $-=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 349 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A__3D_) // $*=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 352 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F__3D_) // $/=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 355 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod_3D_) // $mod=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 358 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_) // $<<=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 361 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_) // $>>=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 364 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26__3D_) // $&=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 367 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C__3D_) // $|=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 370 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E__3D_) // $^=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 373 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, END_PRODUCTION
// At index 374 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 376 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, END_PRODUCTION
// At index 377 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 261
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <gtl_sorting_order>
, NONTERMINAL (39) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 382 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 261
, NONTERMINAL (12) // <gtl_sorting_order>
, END_PRODUCTION
// At index 384 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 264
, END_PRODUCTION
// At index 385 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 264
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <gtl_sorting_order>
, NONTERMINAL (39) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 390 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 334
, END_PRODUCTION
// At index 391 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 334
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 395 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 337
, END_PRODUCTION
// At index 396 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 337
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 400 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 358
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, END_PRODUCTION
// At index 402 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 358
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, END_PRODUCTION
// At index 404 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, END_PRODUCTION
// At index 405 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (13) // <gtl_relation_term>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 409 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (13) // <gtl_relation_term>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 413 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, END_PRODUCTION
// At index 414 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (14) // <gtl_relation_factor>
, NONTERMINAL (44) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 418 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, END_PRODUCTION
// At index 419 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3D__3D_) // $==$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 422 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21__3D_) // $!=$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 425 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3D_) // $<=$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 428 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3D_) // $>=$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 431 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 434 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 437 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, END_PRODUCTION
// At index 438 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C_) // $<<$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 442 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E_) // $>>$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 446 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 450 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2E_) // $.$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 454 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 458 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, END_PRODUCTION
// At index 459 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 463 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F_) // $/$
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 467 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod) // $mod$
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 471 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, END_PRODUCTION
// At index 472 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (49) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 476 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, END_PRODUCTION
// At index 477 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (49) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 481 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, END_PRODUCTION
// At index 482 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (51) // <select_gtl_5F_expression_5F_parser_8>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 486 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (52) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 489 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, END_PRODUCTION
// At index 490 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, END_PRODUCTION
// At index 491 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (52) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 495 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_default) // $default$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 500 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, END_PRODUCTION
// At index 501 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 504 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 506 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (56) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 509 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, END_PRODUCTION
// At index 510 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, END_PRODUCTION
// At index 511 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (56) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 515 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (58) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 520 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, END_PRODUCTION
// At index 521 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, END_PRODUCTION
// At index 522 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (58) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 528 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (60) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 533 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, END_PRODUCTION
// At index 534 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, END_PRODUCTION
// At index 535 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (60) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 541 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 544 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, END_PRODUCTION
// At index 545 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, END_PRODUCTION
// At index 546 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 550 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
, END_PRODUCTION
// At index 551 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3A_) // $::$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (64) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 556 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (65) // <select_gtl_5F_expression_5F_parser_22>
, END_PRODUCTION
// At index 561 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
, END_PRODUCTION
// At index 562 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (66) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 567 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
, END_PRODUCTION
// At index 568 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
, END_PRODUCTION
// At index 569 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (66) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 574 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_here) // $here$
, END_PRODUCTION
// At index 576 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 578 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (70) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 582 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
, END_PRODUCTION
// At index 583 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
, END_PRODUCTION
// At index 584 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (70) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 589 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 593 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
, END_PRODUCTION
// At index 594 : <>, in file '.ggs', line 0
, NONTERMINAL (5) // <gtl_module_start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_gtl_module_grammar [194] = {
 {"<gtl_expression>", "gtl_expression_parser", 0}, // at index 0
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 3}, // at index 1
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 7}, // at index 2
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 10}, // at index 3
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 15}, // at index 4
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 20}, // at index 5
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 23}, // at index 6
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 26}, // at index 7
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 29}, // at index 8
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 33}, // at index 9
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 36}, // at index 10
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 38}, // at index 11
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 40}, // at index 12
 {"<gtl_import>", "gtl_instruction_parser", 46}, // at index 13
 {"<gtl_argument_list>", "gtl_expression_parser", 49}, // at index 14
 {"<gtl_instruction_list>", "gtl_module_parser", 53}, // at index 15
 {"<gtl_module_start_symbol>", "gtl_module_parser", 55}, // at index 16
 {"<gtl_function>", "gtl_module_parser", 58}, // at index 17
 {"<gtl_getter>", "gtl_module_parser", 66}, // at index 18
 {"<gtl_setter>", "gtl_module_parser", 76}, // at index 19
 {"<gtl_instruction>", "gtl_module_parser", 85}, // at index 20
 {"<gtl_instruction>", "gtl_module_parser", 94}, // at index 21
 {"<gtl_instruction>", "gtl_module_parser", 108}, // at index 22
 {"<gtl_instruction>", "gtl_module_parser", 119}, // at index 23
 {"<gtl_instruction>", "gtl_module_parser", 135}, // at index 24
 {"<gtl_variable>", "gtl_expression_parser", 145}, // at index 25
 {"<gtl_variable_or_here>", "gtl_expression_parser", 149}, // at index 26
 {"<gtl_sorting_order>", "gtl_instruction_parser", 151}, // at index 27
 {"<gtl_relation_term>", "gtl_expression_parser", 153}, // at index 28
 {"<gtl_relation_factor>", "gtl_expression_parser", 156}, // at index 29
 {"<gtl_simple_expression>", "gtl_expression_parser", 159}, // at index 30
 {"<gtl_term>", "gtl_expression_parser", 162}, // at index 31
 {"<gtl_factor>", "gtl_expression_parser", 165}, // at index 32
 {"<gtl_factor>", "gtl_expression_parser", 169}, // at index 33
 {"<gtl_factor>", "gtl_expression_parser", 172}, // at index 34
 {"<gtl_factor>", "gtl_expression_parser", 175}, // at index 35
 {"<gtl_factor>", "gtl_expression_parser", 178}, // at index 36
 {"<gtl_factor>", "gtl_expression_parser", 181}, // at index 37
 {"<gtl_factor>", "gtl_expression_parser", 183}, // at index 38
 {"<gtl_factor>", "gtl_expression_parser", 185}, // at index 39
 {"<gtl_factor>", "gtl_expression_parser", 187}, // at index 40
 {"<gtl_factor>", "gtl_expression_parser", 189}, // at index 41
 {"<gtl_factor>", "gtl_expression_parser", 191}, // at index 42
 {"<gtl_factor>", "gtl_expression_parser", 193}, // at index 43
 {"<gtl_factor>", "gtl_expression_parser", 199}, // at index 44
 {"<gtl_factor>", "gtl_expression_parser", 202}, // at index 45
 {"<gtl_factor>", "gtl_expression_parser", 206}, // at index 46
 {"<gtl_factor>", "gtl_expression_parser", 209}, // at index 47
 {"<gtl_factor>", "gtl_expression_parser", 211}, // at index 48
 {"<gtl_factor>", "gtl_expression_parser", 213}, // at index 49
 {"<gtl_factor>", "gtl_expression_parser", 215}, // at index 50
 {"<gtl_factor>", "gtl_expression_parser", 218}, // at index 51
 {"<gtl_factor>", "gtl_expression_parser", 220}, // at index 52
 {"<gtl_factor>", "gtl_expression_parser", 222}, // at index 53
 {"<gtl_factor>", "gtl_expression_parser", 226}, // at index 54
 {"<gtl_factor>", "gtl_expression_parser", 230}, // at index 55
 {"<gtl_factor>", "gtl_expression_parser", 234}, // at index 56
 {"<gtl_factor>", "gtl_expression_parser", 238}, // at index 57
 {"<gtl_factor>", "gtl_expression_parser", 242}, // at index 58
 {"<gtl_factor>", "gtl_expression_parser", 246}, // at index 59
 {"<gtl_factor>", "gtl_expression_parser", 250}, // at index 60
 {"<select_gtl_5F_module_5F_parser_0>", "gtl_module_parser", 252}, // at index 61
 {"<select_gtl_5F_module_5F_parser_0>", "gtl_module_parser", 253}, // at index 62
 {"<select_gtl_5F_module_5F_parser_0>", "gtl_module_parser", 256}, // at index 63
 {"<select_gtl_5F_module_5F_parser_1>", "gtl_module_parser", 259}, // at index 64
 {"<select_gtl_5F_module_5F_parser_1>", "gtl_module_parser", 260}, // at index 65
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 263}, // at index 66
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 264}, // at index 67
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 267}, // at index 68
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 270}, // at index 69
 {"<select_gtl_5F_module_5F_parser_3>", "gtl_module_parser", 273}, // at index 70
 {"<select_gtl_5F_module_5F_parser_3>", "gtl_module_parser", 274}, // at index 71
 {"<select_gtl_5F_module_5F_parser_4>", "gtl_module_parser", 280}, // at index 72
 {"<select_gtl_5F_module_5F_parser_4>", "gtl_module_parser", 283}, // at index 73
 {"<select_gtl_5F_module_5F_parser_5>", "gtl_module_parser", 284}, // at index 74
 {"<select_gtl_5F_module_5F_parser_5>", "gtl_module_parser", 287}, // at index 75
 {"<select_gtl_5F_module_5F_parser_6>", "gtl_module_parser", 288}, // at index 76
 {"<select_gtl_5F_module_5F_parser_6>", "gtl_module_parser", 292}, // at index 77
 {"<select_gtl_5F_module_5F_parser_7>", "gtl_module_parser", 293}, // at index 78
 {"<select_gtl_5F_module_5F_parser_7>", "gtl_module_parser", 296}, // at index 79
 {"<select_gtl_5F_module_5F_parser_8>", "gtl_module_parser", 297}, // at index 80
 {"<select_gtl_5F_module_5F_parser_8>", "gtl_module_parser", 300}, // at index 81
 {"<select_gtl_5F_module_5F_parser_9>", "gtl_module_parser", 301}, // at index 82
 {"<select_gtl_5F_module_5F_parser_9>", "gtl_module_parser", 304}, // at index 83
 {"<select_gtl_5F_module_5F_parser_10>", "gtl_module_parser", 305}, // at index 84
 {"<select_gtl_5F_module_5F_parser_10>", "gtl_module_parser", 306}, // at index 85
 {"<select_gtl_5F_module_5F_parser_11>", "gtl_module_parser", 310}, // at index 86
 {"<select_gtl_5F_module_5F_parser_11>", "gtl_module_parser", 313}, // at index 87
 {"<select_gtl_5F_module_5F_parser_12>", "gtl_module_parser", 314}, // at index 88
 {"<select_gtl_5F_module_5F_parser_12>", "gtl_module_parser", 315}, // at index 89
 {"<select_gtl_5F_module_5F_parser_12>", "gtl_module_parser", 317}, // at index 90
 {"<select_gtl_5F_module_5F_parser_13>", "gtl_module_parser", 319}, // at index 91
 {"<select_gtl_5F_module_5F_parser_13>", "gtl_module_parser", 322}, // at index 92
 {"<select_gtl_5F_module_5F_parser_14>", "gtl_module_parser", 323}, // at index 93
 {"<select_gtl_5F_module_5F_parser_14>", "gtl_module_parser", 326}, // at index 94
 {"<select_gtl_5F_module_5F_parser_15>", "gtl_module_parser", 327}, // at index 95
 {"<select_gtl_5F_module_5F_parser_15>", "gtl_module_parser", 330}, // at index 96
 {"<select_gtl_5F_module_5F_parser_16>", "gtl_module_parser", 331}, // at index 97
 {"<select_gtl_5F_module_5F_parser_16>", "gtl_module_parser", 334}, // at index 98
 {"<select_gtl_5F_module_5F_parser_17>", "gtl_module_parser", 335}, // at index 99
 {"<select_gtl_5F_module_5F_parser_17>", "gtl_module_parser", 339}, // at index 100
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 340}, // at index 101
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 343}, // at index 102
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 346}, // at index 103
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 349}, // at index 104
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 352}, // at index 105
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 355}, // at index 106
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 358}, // at index 107
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 361}, // at index 108
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 364}, // at index 109
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 367}, // at index 110
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 370}, // at index 111
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 373}, // at index 112
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 374}, // at index 113
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 376}, // at index 114
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 377}, // at index 115
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 382}, // at index 116
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 384}, // at index 117
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 385}, // at index 118
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 390}, // at index 119
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 391}, // at index 120
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 395}, // at index 121
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 396}, // at index 122
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 400}, // at index 123
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 402}, // at index 124
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 404}, // at index 125
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 405}, // at index 126
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 409}, // at index 127
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 413}, // at index 128
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 414}, // at index 129
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 418}, // at index 130
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 419}, // at index 131
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 422}, // at index 132
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 425}, // at index 133
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 428}, // at index 134
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 431}, // at index 135
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 434}, // at index 136
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 437}, // at index 137
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 438}, // at index 138
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 442}, // at index 139
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 446}, // at index 140
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 450}, // at index 141
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 454}, // at index 142
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 458}, // at index 143
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 459}, // at index 144
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 463}, // at index 145
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 467}, // at index 146
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 471}, // at index 147
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 472}, // at index 148
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 476}, // at index 149
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 477}, // at index 150
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 481}, // at index 151
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 482}, // at index 152
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 486}, // at index 153
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 489}, // at index 154
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 490}, // at index 155
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 491}, // at index 156
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 495}, // at index 157
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 500}, // at index 158
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 501}, // at index 159
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 504}, // at index 160
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 506}, // at index 161
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 509}, // at index 162
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 510}, // at index 163
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 511}, // at index 164
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 515}, // at index 165
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 520}, // at index 166
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 521}, // at index 167
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 522}, // at index 168
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 528}, // at index 169
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 533}, // at index 170
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 534}, // at index 171
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 535}, // at index 172
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 541}, // at index 173
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 544}, // at index 174
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 545}, // at index 175
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 546}, // at index 176
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 550}, // at index 177
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 551}, // at index 178
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 556}, // at index 179
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 561}, // at index 180
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 562}, // at index 181
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 567}, // at index 182
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 568}, // at index 183
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 569}, // at index 184
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 574}, // at index 185
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 576}, // at index 186
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 578}, // at index 187
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 582}, // at index 188
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 583}, // at index 189
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 584}, // at index 190
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 589}, // at index 191
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 593}, // at index 192
 {"<>", "", 594} // at index 193
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_gtl_module_grammar [194] = {
0, // index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
3, // index 1 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
7, // index 2 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
10, // index 3 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
15, // index 4 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
20, // index 5 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
23, // index 6 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
26, // index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
29, // index 8 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 256
33, // index 9 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 289
36, // index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 303
38, // index 11 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 315
40, // index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 326
46, // index 13 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 368
49, // index 14 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 736
53, // index 15 : <gtl_instruction_list>, in file 'gtl_module_parser.ggs', line 45
55, // index 16 : <gtl_module_start_symbol>, in file 'gtl_module_parser.ggs', line 65
58, // index 17 : <gtl_function>, in file 'gtl_module_parser.ggs', line 90
66, // index 18 : <gtl_getter>, in file 'gtl_module_parser.ggs', line 109
76, // index 19 : <gtl_setter>, in file 'gtl_module_parser.ggs', line 134
85, // index 20 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 157
94, // index 21 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 190
108, // index 22 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 254
119, // index 23 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 294
135, // index 24 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 354
145, // index 25 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 687
149, // index 26 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 722
151, // index 27 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 355
153, // index 28 : <gtl_relation_term>, in file 'gtl_expression_parser.ggs', line 53
156, // index 29 : <gtl_relation_factor>, in file 'gtl_expression_parser.ggs', line 69
159, // index 30 : <gtl_simple_expression>, in file 'gtl_expression_parser.ggs', line 117
162, // index 31 : <gtl_term>, in file 'gtl_expression_parser.ggs', line 162
165, // index 32 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 192
169, // index 33 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 208
172, // index 34 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 220
175, // index 35 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 232
178, // index 36 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 244
181, // index 37 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 256
183, // index 38 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 269
185, // index 39 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 282
187, // index 40 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 295
189, // index 41 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 308
191, // index 42 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 321
193, // index 43 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 335
199, // index 44 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 369
202, // index 45 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 401
206, // index 46 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 420
209, // index 47 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 429
211, // index 48 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 445
213, // index 49 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 461
215, // index 50 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 477
218, // index 51 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 514
220, // index 52 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 533
222, // index 53 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 552
226, // index 54 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 576
230, // index 55 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 587
234, // index 56 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 606
238, // index 57 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 627
242, // index 58 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 648
246, // index 59 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 667
250, // index 60 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 678
252, // index 61 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
253, // index 62 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
256, // index 63 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
259, // index 64 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 69
260, // index 65 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 69
263, // index 66 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
264, // index 67 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
267, // index 68 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
270, // index 69 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 74
273, // index 70 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 164
274, // index 71 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 164
280, // index 72 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 174
283, // index 73 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 174
284, // index 74 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 202
287, // index 75 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 202
288, // index 76 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 208
292, // index 77 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 208
293, // index 78 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 216
296, // index 79 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 216
297, // index 80 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 224
300, // index 81 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 224
301, // index 82 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 229
304, // index 83 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 229
305, // index 84 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 268
306, // index 85 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 268
310, // index 86 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 278
313, // index 87 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 278
314, // index 88 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 311
315, // index 89 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 311
317, // index 90 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 311
319, // index 91 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 319
322, // index 92 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 319
323, // index 93 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 324
326, // index 94 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 324
327, // index 95 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 332
330, // index 96 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 332
331, // index 97 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 337
334, // index 98 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 337
335, // index 99 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 360
339, // index 100 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 360
340, // index 101 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
343, // index 102 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
346, // index 103 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
349, // index 104 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
352, // index 105 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
355, // index 106 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
358, // index 107 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
361, // index 108 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
364, // index 109 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
367, // index 110 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
370, // index 111 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
373, // index 112 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
374, // index 113 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
376, // index 114 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
377, // index 115 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 261
382, // index 116 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 261
384, // index 117 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 264
385, // index 118 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 264
390, // index 119 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 334
391, // index 120 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 334
395, // index 121 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 337
396, // index 122 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 337
400, // index 123 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 358
402, // index 124 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 358
404, // index 125 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
405, // index 126 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
409, // index 127 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
413, // index 128 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
414, // index 129 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
418, // index 130 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
419, // index 131 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
422, // index 132 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
425, // index 133 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
428, // index 134 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
431, // index 135 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
434, // index 136 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
437, // index 137 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
438, // index 138 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
442, // index 139 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
446, // index 140 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
450, // index 141 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
454, // index 142 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
458, // index 143 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
459, // index 144 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
463, // index 145 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
467, // index 146 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
471, // index 147 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
472, // index 148 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
476, // index 149 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
477, // index 150 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
481, // index 151 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
482, // index 152 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
486, // index 153 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
489, // index 154 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
490, // index 155 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
491, // index 156 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
495, // index 157 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
500, // index 158 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
501, // index 159 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
504, // index 160 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
506, // index 161 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
509, // index 162 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
510, // index 163 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
511, // index 164 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
515, // index 165 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
520, // index 166 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
521, // index 167 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
522, // index 168 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
528, // index 169 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
533, // index 170 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
534, // index 171 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
535, // index 172 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
541, // index 173 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
544, // index 174 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
545, // index 175 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
546, // index 176 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
550, // index 177 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
551, // index 178 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
556, // index 179 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
561, // index 180 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
562, // index 181 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
567, // index 182 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
568, // index 183 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
569, // index 184 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
574, // index 185 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
576, // index 186 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
578, // index 187 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
582, // index 188 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
583, // index 189 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
584, // index 190 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
589, // index 191 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
593, // index 192 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
594 // index 193 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_gtl_module_grammar [73] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_simple_instruction>
13, // at 2 : <gtl_import>
14, // at 3 : <gtl_argument_list>
15, // at 4 : <gtl_instruction_list>
16, // at 5 : <gtl_module_start_symbol>
17, // at 6 : <gtl_function>
18, // at 7 : <gtl_getter>
19, // at 8 : <gtl_setter>
20, // at 9 : <gtl_instruction>
25, // at 10 : <gtl_variable>
26, // at 11 : <gtl_variable_or_here>
27, // at 12 : <gtl_sorting_order>
28, // at 13 : <gtl_relation_term>
29, // at 14 : <gtl_relation_factor>
30, // at 15 : <gtl_simple_expression>
31, // at 16 : <gtl_term>
32, // at 17 : <gtl_factor>
61, // at 18 : <select_gtl_5F_module_5F_parser_0>
64, // at 19 : <select_gtl_5F_module_5F_parser_1>
66, // at 20 : <select_gtl_5F_module_5F_parser_2>
70, // at 21 : <select_gtl_5F_module_5F_parser_3>
72, // at 22 : <select_gtl_5F_module_5F_parser_4>
74, // at 23 : <select_gtl_5F_module_5F_parser_5>
76, // at 24 : <select_gtl_5F_module_5F_parser_6>
78, // at 25 : <select_gtl_5F_module_5F_parser_7>
80, // at 26 : <select_gtl_5F_module_5F_parser_8>
82, // at 27 : <select_gtl_5F_module_5F_parser_9>
84, // at 28 : <select_gtl_5F_module_5F_parser_10>
86, // at 29 : <select_gtl_5F_module_5F_parser_11>
88, // at 30 : <select_gtl_5F_module_5F_parser_12>
91, // at 31 : <select_gtl_5F_module_5F_parser_13>
93, // at 32 : <select_gtl_5F_module_5F_parser_14>
95, // at 33 : <select_gtl_5F_module_5F_parser_15>
97, // at 34 : <select_gtl_5F_module_5F_parser_16>
99, // at 35 : <select_gtl_5F_module_5F_parser_17>
101, // at 36 : <select_gtl_5F_instruction_5F_parser_0>
113, // at 37 : <select_gtl_5F_instruction_5F_parser_1>
115, // at 38 : <select_gtl_5F_instruction_5F_parser_2>
117, // at 39 : <select_gtl_5F_instruction_5F_parser_3>
119, // at 40 : <select_gtl_5F_instruction_5F_parser_4>
121, // at 41 : <select_gtl_5F_instruction_5F_parser_5>
123, // at 42 : <select_gtl_5F_instruction_5F_parser_6>
125, // at 43 : <select_gtl_5F_expression_5F_parser_0>
128, // at 44 : <select_gtl_5F_expression_5F_parser_1>
130, // at 45 : <select_gtl_5F_expression_5F_parser_2>
137, // at 46 : <select_gtl_5F_expression_5F_parser_3>
143, // at 47 : <select_gtl_5F_expression_5F_parser_4>
147, // at 48 : <select_gtl_5F_expression_5F_parser_5>
149, // at 49 : <select_gtl_5F_expression_5F_parser_6>
151, // at 50 : <select_gtl_5F_expression_5F_parser_7>
153, // at 51 : <select_gtl_5F_expression_5F_parser_8>
155, // at 52 : <select_gtl_5F_expression_5F_parser_9>
157, // at 53 : <select_gtl_5F_expression_5F_parser_10>
159, // at 54 : <select_gtl_5F_expression_5F_parser_11>
161, // at 55 : <select_gtl_5F_expression_5F_parser_12>
163, // at 56 : <select_gtl_5F_expression_5F_parser_13>
165, // at 57 : <select_gtl_5F_expression_5F_parser_14>
167, // at 58 : <select_gtl_5F_expression_5F_parser_15>
169, // at 59 : <select_gtl_5F_expression_5F_parser_16>
171, // at 60 : <select_gtl_5F_expression_5F_parser_17>
173, // at 61 : <select_gtl_5F_expression_5F_parser_18>
175, // at 62 : <select_gtl_5F_expression_5F_parser_19>
177, // at 63 : <select_gtl_5F_expression_5F_parser_20>
179, // at 64 : <select_gtl_5F_expression_5F_parser_21>
181, // at 65 : <select_gtl_5F_expression_5F_parser_22>
183, // at 66 : <select_gtl_5F_expression_5F_parser_23>
185, // at 67 : <select_gtl_5F_expression_5F_parser_24>
187, // at 68 : <select_gtl_5F_expression_5F_parser_25>
189, // at 69 : <select_gtl_5F_expression_5F_parser_26>
191, // at 70 : <select_gtl_5F_expression_5F_parser_27>
193, // at 71 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_gtl_module_grammar [] = {
// At index 0 : <gtl_expression> only one production, no choice
  -1,
// At index 1 : <gtl_simple_instruction>
C_Lexique_gtl_5F_scanner::kToken_let, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_unlet, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_error, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_warning, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken_print, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_println, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken_display, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken_sort, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken_tab, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken_variables, -1, // Choice 10
C_Lexique_gtl_5F_scanner::kToken_libraries, -1, // Choice 11
C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 12
  -1,
// At index 26 : <gtl_import> only one production, no choice
  -1,
// At index 27 : <gtl_argument_list> only one production, no choice
  -1,
// At index 28 : <gtl_instruction_list> only one production, no choice
  -1,
// At index 29 : <gtl_module_start_symbol> only one production, no choice
  -1,
// At index 30 : <gtl_function> only one production, no choice
  -1,
// At index 31 : <gtl_getter> only one production, no choice
  -1,
// At index 32 : <gtl_setter> only one production, no choice
  -1,
// At index 33 : <gtl_instruction>
C_Lexique_gtl_5F_scanner::kToken_if, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_foreach, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_for, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_loop, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken_repeat, -1, // Choice 5
  -1,
// At index 44 : <gtl_variable> only one production, no choice
  -1,
// At index 45 : <gtl_variable_or_here> only one production, no choice
  -1,
// At index 46 : <gtl_sorting_order> only one production, no choice
  -1,
// At index 47 : <gtl_relation_term> only one production, no choice
  -1,
// At index 48 : <gtl_relation_factor> only one production, no choice
  -1,
// At index 49 : <gtl_simple_expression> only one production, no choice
  -1,
// At index 50 : <gtl_term> only one production, no choice
  -1,
// At index 51 : <gtl_factor>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_not, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2B_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_yes, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken_no, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken_string, -1, // Choice 10
C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, -1, // Choice 11
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 12
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 13
C_Lexique_gtl_5F_scanner::kToken_exists, -1, // Choice 14
C_Lexique_gtl_5F_scanner::kToken_typeof, -1, // Choice 15
C_Lexique_gtl_5F_scanner::kToken_true, -1, // Choice 16
C_Lexique_gtl_5F_scanner::kToken_false, -1, // Choice 17
C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, -1, // Choice 18
C_Lexique_gtl_5F_scanner::kToken__40_, -1, // Choice 19
C_Lexique_gtl_5F_scanner::kToken_emptylist, -1, // Choice 20
C_Lexique_gtl_5F_scanner::kToken_emptymap, -1, // Choice 21
C_Lexique_gtl_5F_scanner::kToken_mapof, -1, // Choice 22
C_Lexique_gtl_5F_scanner::kToken_listof, -1, // Choice 23
C_Lexique_gtl_5F_scanner::kToken__40__28_, -1, // Choice 24
C_Lexique_gtl_5F_scanner::kToken__40__5B_, -1, // Choice 25
C_Lexique_gtl_5F_scanner::kToken__40__7B_, -1, // Choice 26
C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 27
C_Lexique_gtl_5F_scanner::kToken__40__3F_, -1, // Choice 28
C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 29
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 110 : <select_gtl_5F_module_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_while, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 3
  -1,
// At index 138 : <select_gtl_5F_module_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_func, C_Lexique_gtl_5F_scanner::kToken_getter, C_Lexique_gtl_5F_scanner::kToken_setter, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_import, -1, // Choice 2
  -1,
// At index 146 : <select_gtl_5F_module_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_func, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_getter, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_setter, -1, // Choice 4
  -1,
// At index 155 : <select_gtl_5F_module_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_elsif, -1, // Choice 2
  -1,
// At index 161 : <select_gtl_5F_module_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 166 : <select_gtl_5F_module_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 172 : <select_gtl_5F_module_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 177 : <select_gtl_5F_module_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 182 : <select_gtl_5F_module_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 188 : <select_gtl_5F_module_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 193 : <select_gtl_5F_module_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 198 : <select_gtl_5F_module_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 203 : <select_gtl_5F_module_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken_to, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_up, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_down, -1, // Choice 3
  -1,
// At index 210 : <select_gtl_5F_module_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken_step, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 216 : <select_gtl_5F_module_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 221 : <select_gtl_5F_module_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 227 : <select_gtl_5F_module_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 232 : <select_gtl_5F_module_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 2
  -1,
// At index 254 : <select_gtl_5F_instruction_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken__3A__3D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2B__3D_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__2D__3D_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2A__3D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2F__3D_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_mod_3D_, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken__26__3D_, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken__7C__3D_, -1, // Choice 10
C_Lexique_gtl_5F_scanner::kToken__5E__3D_, -1, // Choice 11
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 12
  -1,
// At index 302 : <select_gtl_5F_instruction_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 2
  -1,
// At index 358 : <select_gtl_5F_instruction_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 364 : <select_gtl_5F_instruction_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 392 : <select_gtl_5F_instruction_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 397 : <select_gtl_5F_instruction_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 402 : <select_gtl_5F_instruction_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 407 : <select_gtl_5F_expression_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__5E_, -1, // Choice 3
  -1,
// At index 451 : <select_gtl_5F_expression_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 495 : <select_gtl_5F_expression_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3D__3D_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__21__3D_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__3C__3D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__3E__3D_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 7
  -1,
// At index 550 : <select_gtl_5F_expression_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C__3C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__3E__3E_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2B_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2E_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__2D_, -1, // Choice 6
  -1,
// At index 609 : <select_gtl_5F_expression_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__2F_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_mod, -1, // Choice 4
  -1,
// At index 669 : <select_gtl_5F_expression_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 674 : <select_gtl_5F_expression_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 679 : <select_gtl_5F_expression_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 738 : <select_gtl_5F_expression_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 771 : <select_gtl_5F_expression_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 776 : <select_gtl_5F_expression_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_default, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 2
  -1,
// At index 835 : <select_gtl_5F_expression_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 840 : <select_gtl_5F_expression_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 873 : <select_gtl_5F_expression_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 878 : <select_gtl_5F_expression_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 2
  -1,
// At index 883 : <select_gtl_5F_expression_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 888 : <select_gtl_5F_expression_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 2
  -1,
// At index 893 : <select_gtl_5F_expression_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 898 : <select_gtl_5F_expression_5F_parser_18>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 931 : <select_gtl_5F_expression_5F_parser_19>
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 936 : <select_gtl_5F_expression_5F_parser_20>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1009 : <select_gtl_5F_expression_5F_parser_21>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1083 : <select_gtl_5F_expression_5F_parser_22>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1157 : <select_gtl_5F_expression_5F_parser_23>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 2
  -1,
// At index 1231 : <select_gtl_5F_expression_5F_parser_24>
C_Lexique_gtl_5F_scanner::kToken_here, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 1236 : <select_gtl_5F_expression_5F_parser_25>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1241 : <select_gtl_5F_expression_5F_parser_26>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1246 : <select_gtl_5F_expression_5F_parser_27>
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1252 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_gtl_module_grammar [73] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_simple_instruction>
26, // at 2 : <gtl_import>
27, // at 3 : <gtl_argument_list>
28, // at 4 : <gtl_instruction_list>
29, // at 5 : <gtl_module_start_symbol>
30, // at 6 : <gtl_function>
31, // at 7 : <gtl_getter>
32, // at 8 : <gtl_setter>
33, // at 9 : <gtl_instruction>
44, // at 10 : <gtl_variable>
45, // at 11 : <gtl_variable_or_here>
46, // at 12 : <gtl_sorting_order>
47, // at 13 : <gtl_relation_term>
48, // at 14 : <gtl_relation_factor>
49, // at 15 : <gtl_simple_expression>
50, // at 16 : <gtl_term>
51, // at 17 : <gtl_factor>
110, // at 18 : <select_gtl_5F_module_5F_parser_0>
138, // at 19 : <select_gtl_5F_module_5F_parser_1>
146, // at 20 : <select_gtl_5F_module_5F_parser_2>
155, // at 21 : <select_gtl_5F_module_5F_parser_3>
161, // at 22 : <select_gtl_5F_module_5F_parser_4>
166, // at 23 : <select_gtl_5F_module_5F_parser_5>
172, // at 24 : <select_gtl_5F_module_5F_parser_6>
177, // at 25 : <select_gtl_5F_module_5F_parser_7>
182, // at 26 : <select_gtl_5F_module_5F_parser_8>
188, // at 27 : <select_gtl_5F_module_5F_parser_9>
193, // at 28 : <select_gtl_5F_module_5F_parser_10>
198, // at 29 : <select_gtl_5F_module_5F_parser_11>
203, // at 30 : <select_gtl_5F_module_5F_parser_12>
210, // at 31 : <select_gtl_5F_module_5F_parser_13>
216, // at 32 : <select_gtl_5F_module_5F_parser_14>
221, // at 33 : <select_gtl_5F_module_5F_parser_15>
227, // at 34 : <select_gtl_5F_module_5F_parser_16>
232, // at 35 : <select_gtl_5F_module_5F_parser_17>
254, // at 36 : <select_gtl_5F_instruction_5F_parser_0>
302, // at 37 : <select_gtl_5F_instruction_5F_parser_1>
358, // at 38 : <select_gtl_5F_instruction_5F_parser_2>
364, // at 39 : <select_gtl_5F_instruction_5F_parser_3>
392, // at 40 : <select_gtl_5F_instruction_5F_parser_4>
397, // at 41 : <select_gtl_5F_instruction_5F_parser_5>
402, // at 42 : <select_gtl_5F_instruction_5F_parser_6>
407, // at 43 : <select_gtl_5F_expression_5F_parser_0>
451, // at 44 : <select_gtl_5F_expression_5F_parser_1>
495, // at 45 : <select_gtl_5F_expression_5F_parser_2>
550, // at 46 : <select_gtl_5F_expression_5F_parser_3>
609, // at 47 : <select_gtl_5F_expression_5F_parser_4>
669, // at 48 : <select_gtl_5F_expression_5F_parser_5>
674, // at 49 : <select_gtl_5F_expression_5F_parser_6>
679, // at 50 : <select_gtl_5F_expression_5F_parser_7>
738, // at 51 : <select_gtl_5F_expression_5F_parser_8>
771, // at 52 : <select_gtl_5F_expression_5F_parser_9>
776, // at 53 : <select_gtl_5F_expression_5F_parser_10>
835, // at 54 : <select_gtl_5F_expression_5F_parser_11>
840, // at 55 : <select_gtl_5F_expression_5F_parser_12>
873, // at 56 : <select_gtl_5F_expression_5F_parser_13>
878, // at 57 : <select_gtl_5F_expression_5F_parser_14>
883, // at 58 : <select_gtl_5F_expression_5F_parser_15>
888, // at 59 : <select_gtl_5F_expression_5F_parser_16>
893, // at 60 : <select_gtl_5F_expression_5F_parser_17>
898, // at 61 : <select_gtl_5F_expression_5F_parser_18>
931, // at 62 : <select_gtl_5F_expression_5F_parser_19>
936, // at 63 : <select_gtl_5F_expression_5F_parser_20>
1009, // at 64 : <select_gtl_5F_expression_5F_parser_21>
1083, // at 65 : <select_gtl_5F_expression_5F_parser_22>
1157, // at 66 : <select_gtl_5F_expression_5F_parser_23>
1231, // at 67 : <select_gtl_5F_expression_5F_parser_24>
1236, // at 68 : <select_gtl_5F_expression_5F_parser_25>
1241, // at 69 : <select_gtl_5F_expression_5F_parser_26>
1246, // at 70 : <select_gtl_5F_expression_5F_parser_27>
1252, // at 71 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_expression' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_expression_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_expression_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_instruction' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_simple_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_simple_5F_instruction_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_import' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_import_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i13_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_import_ (GALGAS_gtlContext parameter_1,
                                GALGAS_library & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i13_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_argument_list' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_argument_5F_list_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i36_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i36_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_instruction_list' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_instruction_5F_list_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_instruction_5F_list_ (GALGAS_gtlInstructionList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'gtl_module_start_symbol' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_module_5F_start_5F_symbol_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_module_5F_start_5F_symbol_ (GALGAS_gtlContext parameter_1,
                                GALGAS_library & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_(parameter_1, parameter_2, inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_gtl_5F_module_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_gtl_5F_module_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_gtl_module_grammar, gProductionNames_gtl_module_grammar, gProductionIndexes_gtl_module_grammar,
                                    gFirstProductionIndexes_gtl_module_grammar, gDecision_gtl_module_grammar, gDecisionIndexes_gtl_module_grammar, 594) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_gtlContext  parameter_1,
                                GALGAS_library &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_gtl_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_gtl_module_grammar, gProductionNames_gtl_module_grammar, gProductionIndexes_gtl_module_grammar,
                                                      gFirstProductionIndexes_gtl_module_grammar, gDecision_gtl_module_grammar, gDecisionIndexes_gtl_module_grammar, 594) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_gtl_5F_module_5F_grammar grammar ;
        grammar.nt_gtl_5F_module_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_gtlContext  parameter_1,
                                GALGAS_library &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_gtl_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_gtl_module_grammar, gProductionNames_gtl_module_grammar, gProductionIndexes_gtl_module_grammar,
                                                    gFirstProductionIndexes_gtl_module_grammar, gDecision_gtl_module_grammar, gDecisionIndexes_gtl_module_grammar, 594) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_gtl_5F_module_5F_grammar grammar ;
      grammar.nt_gtl_5F_module_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'gtl_function' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_function_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_function_ (GALGAS_gtlFunction & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_getter' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_getter_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_getter_ (GALGAS_gtlGetter & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_setter' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_setter_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_setter_ (GALGAS_gtlSetter & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'gtl_instruction' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_instruction_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'gtl_variable' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i34_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_ (GALGAS_gtlVarPath & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i34_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_variable_or_here' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i35_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & parameter_1,
                                GALGAS_bool & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i35_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_sorting_order' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_sorting_5F_order_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i12_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_sorting_5F_order_ (GALGAS_lsint & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i12_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_relation_term' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_relation_factor' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_expression' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'gtl_term' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_term_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_term_i4_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_term_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_factor' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i5_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i6_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i7_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i8_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i9_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i10_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i11_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i12_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i13_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i14_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i15_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i16_parse(inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i17_parse(inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i18_parse(inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i19_parse(inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i20_parse(inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i21_parse(inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i22_parse(inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i23_parse(inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i24_parse(inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i25_parse(inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i26_parse(inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i27_parse(inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i28_parse(inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i29_parse(inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i30_parse(inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i31_parse(inLexique) ;
    break ;
  case 28 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i32_parse(inLexique) ;
    break ;
  case 29 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i33_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i8_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i9_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i10_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i11_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i12_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i13_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i14_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i15_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i16_(parameter_1, inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i17_(parameter_1, inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i18_(parameter_1, inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i19_(parameter_1, inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i20_(parameter_1, inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i21_(parameter_1, inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i22_(parameter_1, inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i23_(parameter_1, inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i24_(parameter_1, inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i25_(parameter_1, inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i26_(parameter_1, inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i27_(parameter_1, inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i28_(parameter_1, inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i29_(parameter_1, inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i30_(parameter_1, inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i31_(parameter_1, inLexique) ;
    break ;
  case 28 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i32_(parameter_1, inLexique) ;
    break ;
  case 29 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i33_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_0' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_1' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_2' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_3' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_4' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_5' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_6' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_7' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_8' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_8 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'select_gtl_5F_module_5F_parser_9' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_9 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_10' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_10 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_11' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_11 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_12' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_12 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_13' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_13 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_14' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_14 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_15' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_15 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_16' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_16 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_module_5F_parser_17' added non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_module_5F_parser_17 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_0' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_1' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_2' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_3' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_4' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_5' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_6' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_0' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_1' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_2' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_3' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_4' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_5' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_6' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_7' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_8' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_9' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_10' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_11' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_12' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_13' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_14' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_15' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_16' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_17' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_18' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_19' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_20' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_21' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_22' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_23' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_24' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_24 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_25' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_25 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_26' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_26 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_27' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_module_5F_grammar::select_gtl_5F_expression_5F_parser_27 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

C_BoolCommandLineOption gOption_gtl_5F_options_debug ("gtl_options",
                                         "debug",
                                         0,
                                         "debug",
                                         "Execute the GTL templates in debug mode") ;

C_BoolCommandLineOption gOption_gtl_5F_options_warnDeprecated ("gtl_options",
                                         "warnDeprecated",
                                         0,
                                         "warn-deprecated",
                                         "Warns about deprecated constructs in the GTL template language") ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'invokeGTL'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_invokeGTL (GALGAS_gtlString inArgument_rootTemplateFileName,
                                  GALGAS_gtlContext inArgument_context,
                                  GALGAS_gtlData inArgument_vars,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  GALGAS_library var_lib_1098 = function_emptyLib (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 36)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_gtl_5F_options_debug.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Starting debugger, type help for command list\n")  COMMA_SOURCE_FILE ("gtl_interface.galgas", 39)) ;
    extensionMethod_loadCommandFile (GALGAS_string (".gtlinit"), inArgument_context, inArgument_vars, var_lib_1098, inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 40)) ;
  }
  GALGAS_gtlTemplateInstruction var_rootTemplateInstruction_1367 = GALGAS_gtlTemplateInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_interface.galgas", 45)), GALGAS_string::makeEmptyString (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 47)), GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_interface.galgas", 49)), inArgument_rootTemplateFileName  COMMA_SOURCE_FILE ("gtl_interface.galgas", 48)), GALGAS_bool (false), GALGAS_bool (true), GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_interface.galgas", 54)), GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_interface.galgas", 55))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 44)) ;
  callExtensionMethod_execute ((const cPtr_gtlTemplateInstruction *) var_rootTemplateInstruction_1367.ptr (), inArgument_context, inArgument_vars, var_lib_1098, result_result, inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 59)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_invokeGTL [4] = {
  & kTypeDescriptor_GALGAS_gtlString,
  & kTypeDescriptor_GALGAS_gtlContext,
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_invokeGTL (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_gtlString operand0 = GALGAS_gtlString::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                     inCompiler
                                                                     COMMA_THERE) ;
  const GALGAS_gtlContext operand1 = GALGAS_gtlContext::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                       inCompiler
                                                                       COMMA_THERE) ;
  const GALGAS_gtlData operand2 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_invokeGTL (operand0,
                             operand1,
                             operand2,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_invokeGTL ("invokeGTL",
                                                           functionWithGenericHeader_invokeGTL,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           3,
                                                           functionArgs_invokeGTL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'emptyVarContainer'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData function_emptyVarContainer (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  result_result = GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_interface.galgas", 73)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 73)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_interface.galgas", 73))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 73)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_emptyVarContainer [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_emptyVarContainer (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_emptyVarContainer (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_emptyVarContainer ("emptyVarContainer",
                                                                   functionWithGenericHeader_emptyVarContainer,
                                                                   & kTypeDescriptor_GALGAS_gtlData,
                                                                   0,
                                                                   functionArgs_emptyVarContainer) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'lstringToGtlString'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString function_lstringToGtlString (GALGAS_lstring inArgument_input,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlString result_output ; // Returned variable
  result_output = GALGAS_gtlString::constructor_new (inArgument_input.getter_location (SOURCE_FILE ("gtl_interface.galgas", 83)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 83)), inArgument_input.getter_string (SOURCE_FILE ("gtl_interface.galgas", 83))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 83)) ;
//---
  return result_output ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_lstringToGtlString [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_lstringToGtlString (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_lstringToGtlString (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_lstringToGtlString ("lstringToGtlString",
                                                                    functionWithGenericHeader_lstringToGtlString,
                                                                    & kTypeDescriptor_GALGAS_gtlString,
                                                                    1,
                                                                    functionArgs_lstringToGtlString) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'stringToGtlString'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString function_stringToGtlString (GALGAS_string inArgument_input,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlString result_output ; // Returned variable
  result_output = GALGAS_gtlString::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_interface.galgas", 93)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 93)), inArgument_input  COMMA_SOURCE_FILE ("gtl_interface.galgas", 93)) ;
//---
  return result_output ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stringToGtlString [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stringToGtlString (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stringToGtlString (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stringToGtlString ("stringToGtlString",
                                                                   functionWithGenericHeader_stringToGtlString,
                                                                   & kTypeDescriptor_GALGAS_gtlString,
                                                                   1,
                                                                   functionArgs_stringToGtlString) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'emptyContext'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContext function_emptyContext (C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlContext result_context ; // Returned variable
  result_context = GALGAS_gtlContext::constructor_new (function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 46)), GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString (), GALGAS_string ("gtl"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_types.galgas", 51)), GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_types.galgas", 52)), GALGAS_bool (true), function_defaultDebugSettings (inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 54))  COMMA_SOURCE_FILE ("gtl_types.galgas", 45)) ;
//---
  return result_context ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_emptyContext [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_emptyContext (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_emptyContext (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_emptyContext ("emptyContext",
                                                              functionWithGenericHeader_emptyContext,
                                                              & kTypeDescriptor_GALGAS_gtlContext,
                                                              0,
                                                              functionArgs_emptyContext) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'pathWithExtension'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_pathWithExtension (GALGAS_gtlContext inArgument_context,
                                          GALGAS_string inArgument_path,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_extendedPath ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_path.getter_pathExtension (SOURCE_FILE ("gtl_types.galgas", 96)).objectCompare (inArgument_context.getter_templateExtension (SOURCE_FILE ("gtl_types.galgas", 96)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_extendedPath = inArgument_path.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 97)).add_operation (inArgument_context.getter_templateExtension (SOURCE_FILE ("gtl_types.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 97)) ;
  }else if (kBoolFalse == test_0) {
    result_extendedPath = inArgument_path ;
  }
//---
  return result_extendedPath ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pathWithExtension [3] = {
  & kTypeDescriptor_GALGAS_gtlContext,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pathWithExtension (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_gtlContext operand0 = GALGAS_gtlContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                       inCompiler
                                                                       COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_pathWithExtension (operand0,
                                     operand1,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pathWithExtension ("pathWithExtension",
                                                                   functionWithGenericHeader_pathWithExtension,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   2,
                                                                   functionArgs_pathWithExtension) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'emptyLib'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library function_emptyLib (C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_library result_result ; // Returned variable
  result_result = GALGAS_library::constructor_new (GALGAS_gtlFuncMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 323)), GALGAS_gtlGetterMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 323)), GALGAS_gtlSetterMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 323)), GALGAS_gtlTemplateMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 323)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("gtl_types.galgas", 323))  COMMA_SOURCE_FILE ("gtl_types.galgas", 323)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_emptyLib [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_emptyLib (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_emptyLib (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_emptyLib ("emptyLib",
                                                          functionWithGenericHeader_emptyLib,
                                                          & kTypeDescriptor_GALGAS_library,
                                                          0,
                                                          functionArgs_emptyLib) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Once function 'noArgument'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_noArgument (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 85)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_noArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_noArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_noArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noArgument) {
    gOnceFunctionResult_noArgument = onceFunction_noArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noArgument = true ;
  }
  return gOnceFunctionResult_noArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_noArgument (void) {
  gOnceFunctionResult_noArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_noArgument (NULL,
                                                        releaseOnceFunctionResult_noArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_noArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_noArgument (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_noArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_noArgument ("noArgument",
                                                            functionWithGenericHeader_noArgument,
                                                            & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                            0,
                                                            functionArgs_noArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Once function 'intArgument'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_intArgument (C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 90)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_intArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_intArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_intArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_intArgument) {
    gOnceFunctionResult_intArgument = onceFunction_intArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_intArgument = true ;
  }
  return gOnceFunctionResult_intArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_intArgument (void) {
  gOnceFunctionResult_intArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_intArgument (NULL,
                                                         releaseOnceFunctionResult_intArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_intArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_intArgument (C_Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_intArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_intArgument ("intArgument",
                                                             functionWithGenericHeader_intArgument,
                                                             & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                             0,
                                                             functionArgs_intArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'charArgument'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_charArgument (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 95)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_charArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_charArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_charArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_charArgument) {
    gOnceFunctionResult_charArgument = onceFunction_charArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_charArgument = true ;
  }
  return gOnceFunctionResult_charArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_charArgument (void) {
  gOnceFunctionResult_charArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_charArgument (NULL,
                                                          releaseOnceFunctionResult_charArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_charArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_charArgument (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_charArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_charArgument ("charArgument",
                                                              functionWithGenericHeader_charArgument,
                                                              & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                              0,
                                                              functionArgs_charArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'charCharArguments'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_charCharArguments (C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 100)) ;
  result_result.addAssign_operation (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 101)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_charCharArguments = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_charCharArguments ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_charCharArguments (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_charCharArguments) {
    gOnceFunctionResult_charCharArguments = onceFunction_charCharArguments (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_charCharArguments = true ;
  }
  return gOnceFunctionResult_charCharArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_charCharArguments (void) {
  gOnceFunctionResult_charCharArguments.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_charCharArguments (NULL,
                                                               releaseOnceFunctionResult_charCharArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_charCharArguments [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_charCharArguments (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_charCharArguments (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_charCharArguments ("charCharArguments",
                                                                   functionWithGenericHeader_charCharArguments,
                                                                   & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                   0,
                                                                   functionArgs_charCharArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'charIntArguments'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_charIntArguments (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 106)) ;
  result_result.addAssign_operation (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 107)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_charIntArguments = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_charIntArguments ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_charIntArguments (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_charIntArguments) {
    gOnceFunctionResult_charIntArguments = onceFunction_charIntArguments (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_charIntArguments = true ;
  }
  return gOnceFunctionResult_charIntArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_charIntArguments (void) {
  gOnceFunctionResult_charIntArguments.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_charIntArguments (NULL,
                                                              releaseOnceFunctionResult_charIntArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_charIntArguments [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_charIntArguments (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_charIntArguments (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_charIntArguments ("charIntArguments",
                                                                  functionWithGenericHeader_charIntArguments,
                                                                  & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                  0,
                                                                  functionArgs_charIntArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'floatArgument'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_floatArgument (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 112)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_floatArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_floatArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_floatArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_floatArgument) {
    gOnceFunctionResult_floatArgument = onceFunction_floatArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_floatArgument = true ;
  }
  return gOnceFunctionResult_floatArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_floatArgument (void) {
  gOnceFunctionResult_floatArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_floatArgument (NULL,
                                                           releaseOnceFunctionResult_floatArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_floatArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_floatArgument (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_floatArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_floatArgument ("floatArgument",
                                                               functionWithGenericHeader_floatArgument,
                                                               & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                               0,
                                                               functionArgs_floatArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'stringArgument'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_stringArgument (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 117)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_stringArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_stringArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_stringArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_stringArgument) {
    gOnceFunctionResult_stringArgument = onceFunction_stringArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_stringArgument = true ;
  }
  return gOnceFunctionResult_stringArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_stringArgument (void) {
  gOnceFunctionResult_stringArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_stringArgument (NULL,
                                                            releaseOnceFunctionResult_stringArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stringArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stringArgument (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_stringArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stringArgument ("stringArgument",
                                                                functionWithGenericHeader_stringArgument,
                                                                & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                0,
                                                                functionArgs_stringArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'stringStringArgument'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_stringStringArgument (C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 122)) ;
  result_result.addAssign_operation (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 123)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_stringStringArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_stringStringArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_stringStringArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_stringStringArgument) {
    gOnceFunctionResult_stringStringArgument = onceFunction_stringStringArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_stringStringArgument = true ;
  }
  return gOnceFunctionResult_stringStringArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_stringStringArgument (void) {
  gOnceFunctionResult_stringStringArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_stringStringArgument (NULL,
                                                                  releaseOnceFunctionResult_stringStringArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stringStringArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stringStringArgument (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_stringStringArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stringStringArgument ("stringStringArgument",
                                                                      functionWithGenericHeader_stringStringArgument,
                                                                      & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                      0,
                                                                      functionArgs_stringStringArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'boolIntArguments'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_boolIntArguments (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 128)) ;
  result_result.addAssign_operation (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 129)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_boolIntArguments = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_boolIntArguments ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_boolIntArguments (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolIntArguments) {
    gOnceFunctionResult_boolIntArguments = onceFunction_boolIntArguments (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolIntArguments = true ;
  }
  return gOnceFunctionResult_boolIntArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_boolIntArguments (void) {
  gOnceFunctionResult_boolIntArguments.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_boolIntArguments (NULL,
                                                              releaseOnceFunctionResult_boolIntArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_boolIntArguments [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_boolIntArguments (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_boolIntArguments (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_boolIntArguments ("boolIntArguments",
                                                                  functionWithGenericHeader_boolIntArguments,
                                                                  & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                  0,
                                                                  functionArgs_boolIntArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'intIntArguments'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_intIntArguments (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 134)) ;
  result_result.addAssign_operation (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 135)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_intIntArguments = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_intIntArguments ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_intIntArguments (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_intIntArguments) {
    gOnceFunctionResult_intIntArguments = onceFunction_intIntArguments (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_intIntArguments = true ;
  }
  return gOnceFunctionResult_intIntArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_intIntArguments (void) {
  gOnceFunctionResult_intIntArguments.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_intIntArguments (NULL,
                                                             releaseOnceFunctionResult_intIntArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_intIntArguments [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_intIntArguments (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_intIntArguments (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_intIntArguments ("intIntArguments",
                                                                 functionWithGenericHeader_intIntArguments,
                                                                 & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                 0,
                                                                 functionArgs_intIntArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'intAnyArguments'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_intAnyArguments (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 140)) ;
  result_result.addAssign_operation (GALGAS_type (& kTypeDescriptor_GALGAS_gtlData)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 141)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_intAnyArguments = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_intAnyArguments ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_intAnyArguments (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_intAnyArguments) {
    gOnceFunctionResult_intAnyArguments = onceFunction_intAnyArguments (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_intAnyArguments = true ;
  }
  return gOnceFunctionResult_intAnyArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_intAnyArguments (void) {
  gOnceFunctionResult_intAnyArguments.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_intAnyArguments (NULL,
                                                             releaseOnceFunctionResult_intAnyArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_intAnyArguments [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_intAnyArguments (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_intAnyArguments (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_intAnyArguments ("intAnyArguments",
                                                                 functionWithGenericHeader_intAnyArguments,
                                                                 & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                 0,
                                                                 functionArgs_intAnyArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Once function 'anyArgument'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_anyArgument (C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlData)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 146)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_anyArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_anyArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_anyArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_anyArgument) {
    gOnceFunctionResult_anyArgument = onceFunction_anyArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_anyArgument = true ;
  }
  return gOnceFunctionResult_anyArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_anyArgument (void) {
  gOnceFunctionResult_anyArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_anyArgument (NULL,
                                                         releaseOnceFunctionResult_anyArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_anyArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_anyArgument (C_Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_anyArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_anyArgument ("anyArgument",
                                                             functionWithGenericHeader_anyArgument,
                                                             & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                             0,
                                                             functionArgs_anyArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'structArgument'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_structArgument (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 151)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_structArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_structArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_structArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_structArgument) {
    gOnceFunctionResult_structArgument = onceFunction_structArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_structArgument = true ;
  }
  return gOnceFunctionResult_structArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_structArgument (void) {
  gOnceFunctionResult_structArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_structArgument (NULL,
                                                            releaseOnceFunctionResult_structArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_structArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_structArgument (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_structArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_structArgument ("structArgument",
                                                                functionWithGenericHeader_structArgument,
                                                                & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                0,
                                                                functionArgs_structArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'expressionArgument'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlTypedArgumentList onceFunction_expressionArgument (C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList result_result ; // Returned variable
  result_result = GALGAS_gtlTypedArgumentList::constructor_listWithValue (GALGAS_type (& kTypeDescriptor_GALGAS_gtlExpr)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 156)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_expressionArgument = false ;
static GALGAS_gtlTypedArgumentList gOnceFunctionResult_expressionArgument ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList function_expressionArgument (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_expressionArgument) {
    gOnceFunctionResult_expressionArgument = onceFunction_expressionArgument (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_expressionArgument = true ;
  }
  return gOnceFunctionResult_expressionArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_expressionArgument (void) {
  gOnceFunctionResult_expressionArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_expressionArgument (NULL,
                                                                releaseOnceFunctionResult_expressionArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_expressionArgument [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_expressionArgument (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_expressionArgument (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_expressionArgument ("expressionArgument",
                                                                    functionWithGenericHeader_expressionArgument,
                                                                    & kTypeDescriptor_GALGAS_gtlTypedArgumentList,
                                                                    0,
                                                                    functionArgs_expressionArgument) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'argumentsCheck'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_argumentsCheck (const GALGAS_lstring constinArgument_methodName,
                             GALGAS_gtlTypedArgumentList inArgument_abstractArgumentList,
                             GALGAS_gtlDataList inArgument_concreteArgumentList,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_concreteLength_4945 = inArgument_concreteArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 164)) ;
  GALGAS_uint var_abstractLength_5000 = inArgument_abstractArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 165)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_abstractArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 166)).objectCompare (inArgument_concreteArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 166)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 167)), constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 167)).add_operation (GALGAS_string (" expects "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 167)).add_operation (var_abstractLength_5000.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 167)).add_operation (GALGAS_string (" arguments. "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 167)).add_operation (var_concreteLength_4945.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 168)).add_operation (GALGAS_string (" arguments provided."), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 168)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 167)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_gtlDataList enumerator_5303 (inArgument_concreteArgumentList, kENUMERATION_UP) ;
    cEnumerator_gtlTypedArgumentList enumerator_5331 (inArgument_abstractArgumentList, kENUMERATION_UP) ;
    GALGAS_uint index_5276 ((uint32_t) 0) ;
    while (enumerator_5303.hasCurrentObject () && enumerator_5331.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_5303.current_data (HERE).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 171)).objectCompare (enumerator_5331.current_type (HERE))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_5331.current_type (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlData))) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 171)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) enumerator_5303.current_data (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 172)), extensionGetter_typeName (enumerator_5331.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 172)).add_operation (GALGAS_string (" expected for argument "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 172)).add_operation (index_5276.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 174)).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 173)), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 172)) ;
      }
      enumerator_5303.gotoNextObject () ;
      enumerator_5331.gotoNextObject () ;
      index_5276.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 170)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'emptylstring'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring onceFunction_emptylstring (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_data_types.galgas", 182))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 182)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_emptylstring = false ;
static GALGAS_lstring gOnceFunctionResult_emptylstring ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_emptylstring (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_emptylstring) {
    gOnceFunctionResult_emptylstring = onceFunction_emptylstring (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_emptylstring = true ;
  }
  return gOnceFunctionResult_emptylstring ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_emptylstring (void) {
  gOnceFunctionResult_emptylstring.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_emptylstring (NULL,
                                                          releaseOnceFunctionResult_emptylstring) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_emptylstring [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_emptylstring (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_emptylstring (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_emptylstring ("emptylstring",
                                                              functionWithGenericHeader_emptylstring,
                                                              & kTypeDescriptor_GALGAS_lstring,
                                                              0,
                                                              functionArgs_emptylstring) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'lstring'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_lstring (GALGAS_string inArgument_string,
                                 C_Compiler * /* inCompiler */
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (inArgument_string, GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_data_types.galgas", 187))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 187)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_lstring [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_lstring (C_Compiler * inCompiler,
                                                        const cObjectArray & inEffectiveParameterArray,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_lstring (operand0,
                           inCompiler
                           COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_lstring ("lstring",
                                                         functionWithGenericHeader_lstring,
                                                         & kTypeDescriptor_GALGAS_lstring,
                                                         1,
                                                         functionArgs_lstring) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed desc'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlUnconstructed_desc (const cPtr_gtlData * /* inObject */,
                                                            const GALGAS_uint constinArgument_tab,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 372)).add_operation (GALGAS_string ("unconstructed\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 372)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_desc (defineExtensionGetter_gtlUnconstructed_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed string'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlUnconstructed_string (const cPtr_gtlData * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an unconstructed to a string"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 377)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                               extensionGetter_gtlUnconstructed_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_string (defineExtensionGetter_gtlUnconstructed_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed lstring'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlUnconstructed_lstring (const cPtr_gtlData * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an unconstructed to a lstring"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 381)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                extensionGetter_gtlUnconstructed_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_lstring (defineExtensionGetter_gtlUnconstructed_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed bool'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlUnconstructed_bool (const cPtr_gtlData * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an unconstructed to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 385)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_bool (defineExtensionGetter_gtlUnconstructed_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlUnconstructed int'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlUnconstructed_int (const cPtr_gtlData * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an unconstructed to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 389)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                            extensionGetter_gtlUnconstructed_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_int (defineExtensionGetter_gtlUnconstructed_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed float'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlUnconstructed_float (const cPtr_gtlData * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an unconstructed to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 393)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_float (defineExtensionGetter_gtlUnconstructed_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed plusOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_plusOp (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 397)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                               extensionGetter_gtlUnconstructed_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_plusOp (defineExtensionGetter_gtlUnconstructed_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed minusOp'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_minusOp (const cPtr_gtlData * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 400)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                extensionGetter_gtlUnconstructed_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_minusOp (defineExtensionGetter_gtlUnconstructed_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed notOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_notOp (const cPtr_gtlData * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 403)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_notOp (defineExtensionGetter_gtlUnconstructed_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed addOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_addOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 406)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_addOp (defineExtensionGetter_gtlUnconstructed_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed subOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_subOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 409)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_subOp (defineExtensionGetter_gtlUnconstructed_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed mulOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_mulOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 412)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_mulOp (defineExtensionGetter_gtlUnconstructed_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed divOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_divOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 415)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_divOp (defineExtensionGetter_gtlUnconstructed_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed modOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_modOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 418)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_modOp (defineExtensionGetter_gtlUnconstructed_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed andOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_andOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 421)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_andOp (defineExtensionGetter_gtlUnconstructed_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed orOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_orOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 424)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_orOp (defineExtensionGetter_gtlUnconstructed_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed xorOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_xorOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 427)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_xorOp (defineExtensionGetter_gtlUnconstructed_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed slOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_slOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 430)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_slOp (defineExtensionGetter_gtlUnconstructed_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed srOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_srOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 433)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_srOp (defineExtensionGetter_gtlUnconstructed_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed neqOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_neqOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 436)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_neqOp (defineExtensionGetter_gtlUnconstructed_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed eqOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_eqOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 439)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_eqOp (defineExtensionGetter_gtlUnconstructed_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed gtOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_gtOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 442)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_gtOp (defineExtensionGetter_gtlUnconstructed_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed geOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_geOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 445)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_geOp (defineExtensionGetter_gtlUnconstructed_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed ltOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_ltOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 448)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_ltOp (defineExtensionGetter_gtlUnconstructed_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed leOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_leOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 451)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_leOp (defineExtensionGetter_gtlUnconstructed_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlUnconstructed embeddedType'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlUnconstructed_embeddedType (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("unconstructed data provided as argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 456)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                     extensionGetter_gtlUnconstructed_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_embeddedType (defineExtensionGetter_gtlUnconstructed_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlUnconstructed addMyValue'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlUnconstructed_addMyValue (const cPtr_gtlData * inObject,
                                                         GALGAS_objectlist & /* ioArgument_objectList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("Attempting to pass an unconstructed data to a function"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 461)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlUnconstructed_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                   extensionMethod_gtlUnconstructed_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlUnconstructed_addMyValue (defineExtensionMethod_gtlUnconstructed_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlUnconstructed performGetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_performGetter (const cPtr_gtlData * inObject,
                                                                      const GALGAS_lstring constinArgument_methodName,
                                                                      const GALGAS_gtlDataList constinArgument_arguments,
                                                                      const GALGAS_gtlContext constinArgument_context,
                                                                      const GALGAS_library constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 474)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 475)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 475)) ;
    }
    const GALGAS_gtlUnconstructed temp_1 = object ;
    result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 477)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 477)), temp_1.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 477))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 476)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 479)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 480)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 480)) ;
      }
      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 482)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 482)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 481)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 484)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 485)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 485)) ;
        }
        result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 487)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 487)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 487))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 486)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 489)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_gtlUnconstructed temp_5 = object ;
          result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 490)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 491)), constinArgument_context, constinArgument_lib, temp_5, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 490)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 498)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 498)).add_operation (GALGAS_string ("' for unconstructed target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 498)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 498)) ;
          result_result.drop () ; // Release error dropped variable
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                      extensionGetter_gtlUnconstructed_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_performGetter (defineExtensionGetter_gtlUnconstructed_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension setter '@gtlUnconstructed performSetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlUnconstructed_performSetter (cPtr_gtlData * inObject,
                                                            const GALGAS_lstring constinArgument_methodName,
                                                            const GALGAS_gtlDataList constinArgument_arguments,
                                                            const GALGAS_gtlContext constinArgument_context,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlUnconstructed * object = (cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 511)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 512)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 512)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 513)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 513)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 513)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 513)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 513)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_15981 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_15981.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 514)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 514)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 515)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 516)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 517)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 517)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 518)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 519)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlUnconstructed temp_4 = object ;
        GALGAS_gtlData var_copy_16286 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 521)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 522)), constinArgument_context, constinArgument_lib, var_copy_16286, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 521)) ;
        object->mProperty_where = var_copy_16286.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 528)) ;
        object->mProperty_meta = var_copy_16286.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 529)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 531)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 531)).add_operation (GALGAS_string ("' for unconstructed target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 531)), fixItArray5  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 531)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlUnconstructed_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                      extensionSetter_gtlUnconstructed_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlUnconstructed_performSetter (defineExtensionSetter_gtlUnconstructed_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlType_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 545)).add_operation (GALGAS_string ("type: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 545)).add_operation (extensionGetter_typeName (object->mProperty_type, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 546)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 546)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_desc (defineExtensionGetter_gtlType_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlType_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  result_result = extensionGetter_typeName (object->mProperty_type, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 549)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                               extensionGetter_gtlType_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_string (defineExtensionGetter_gtlType_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlType lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlType_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  result_result = GALGAS_lstring::constructor_new (extensionGetter_typeName (object->mProperty_type, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 552)), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 552)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                extensionGetter_gtlType_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_lstring (defineExtensionGetter_gtlType_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlType_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a type to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 556)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_bool (defineExtensionGetter_gtlType_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlType_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a type to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 560)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                            extensionGetter_gtlType_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_int (defineExtensionGetter_gtlType_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlType_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a type to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 564)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_float (defineExtensionGetter_gtlType_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 568)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                               extensionGetter_gtlType_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_plusOp (defineExtensionGetter_gtlType_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlType minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 571)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                extensionGetter_gtlType_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_minusOp (defineExtensionGetter_gtlType_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 574)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_notOp (defineExtensionGetter_gtlType_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 577)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_addOp (defineExtensionGetter_gtlType_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 580)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_subOp (defineExtensionGetter_gtlType_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 583)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_mulOp (defineExtensionGetter_gtlType_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 586)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_divOp (defineExtensionGetter_gtlType_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 589)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_modOp (defineExtensionGetter_gtlType_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 592)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_andOp (defineExtensionGetter_gtlType_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 595)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_orOp (defineExtensionGetter_gtlType_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 598)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_xorOp (defineExtensionGetter_gtlType_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 601)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_slOp (defineExtensionGetter_gtlType_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 604)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_srOp (defineExtensionGetter_gtlType_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlType).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlType temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlType *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlType *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlType", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 608)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 608)), GALGAS_bool (kIsNotEqual, object->mProperty_type.objectCompare (temp_1.getter_type (SOURCE_FILE ("gtl_data_types.galgas", 608))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 608)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 610)), GALGAS_string ("type expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 610)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_neqOp (defineExtensionGetter_gtlType_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlType).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlType temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlType *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlType *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlType", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 615)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 615)), GALGAS_bool (kIsEqual, object->mProperty_type.objectCompare (temp_1.getter_type (SOURCE_FILE ("gtl_data_types.galgas", 615))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 615)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 617)), GALGAS_string ("type expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 617)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_eqOp (defineExtensionGetter_gtlType_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 621)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_gtOp (defineExtensionGetter_gtlType_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 624)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_geOp (defineExtensionGetter_gtlType_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 627)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_ltOp (defineExtensionGetter_gtlType_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 630)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_leOp (defineExtensionGetter_gtlType_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlType embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlType_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_type) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                     extensionGetter_gtlType_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_embeddedType (defineExtensionGetter_gtlType_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlType addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlType_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_type.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 640))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 640)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlType_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                   extensionMethod_gtlType_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlType_addMyValue (defineExtensionMethod_gtlType_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlType performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_methodName,
                                                             const GALGAS_gtlDataList constinArgument_arguments,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 653)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 654)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 654)) ;
    }
    const GALGAS_gtlType temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 656)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 656)), callExtensionGetter_string ((const cPtr_gtlType *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 656))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 655)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 658)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 659)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 659)) ;
      }
      const GALGAS_gtlType temp_3 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 661)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 661)), temp_3.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 661))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 660)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 663)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 664)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 664)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 666)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 666)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 665)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 668)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 669)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 669)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 671)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 671)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 671))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 670)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 673)).boolEnum () ;
          if (kBoolTrue == test_6) {
            const GALGAS_gtlType temp_7 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 674)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 675)), constinArgument_context, constinArgument_lib, temp_7, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 674)) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 682)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 682)).add_operation (GALGAS_string ("' for type target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 682)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 682)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                      extensionGetter_gtlType_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_performGetter (defineExtensionGetter_gtlType_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlType performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlType_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlType * object = (cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 695)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 696)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 696)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 697)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 697)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 697)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 697)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 697)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_22130 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_22130.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 698)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 698)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 699)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 700)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 701)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 701)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 702)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 703)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlType temp_4 = object ;
        GALGAS_gtlData var_copy_22426 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 705)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 706)), constinArgument_context, constinArgument_lib, var_copy_22426, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 705)) ;
        GALGAS_gtlType temp_5 ;
        if (var_copy_22426.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlType *> (var_copy_22426.ptr ())) {
            temp_5 = (cPtr_gtlType *) var_copy_22426.ptr () ;
          }else{
            inCompiler->castError ("gtlType", var_copy_22426.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 712)) ;
          }
        }
        object->mProperty_type = temp_5.getter_type (SOURCE_FILE ("gtl_data_types.galgas", 712)) ;
        object->mProperty_where = var_copy_22426.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 713)) ;
        object->mProperty_meta = var_copy_22426.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 714)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 716)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 716)).add_operation (GALGAS_string ("' for type target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 716)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 716)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlType_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                      extensionSetter_gtlType_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlType_performSetter (defineExtensionSetter_gtlType_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlEnum_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 729)).add_operation (GALGAS_string ("enum: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 729)).add_operation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 730)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 730)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_desc (defineExtensionGetter_gtlEnum_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlEnum_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  result_result = object->mProperty_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                               extensionGetter_gtlEnum_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_string (defineExtensionGetter_gtlEnum_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlEnum lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlEnum_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_value, object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 736)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                extensionGetter_gtlEnum_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_lstring (defineExtensionGetter_gtlEnum_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlEnum_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an enum to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 740)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_bool (defineExtensionGetter_gtlEnum_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlEnum_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an enum to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 744)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                            extensionGetter_gtlEnum_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_int (defineExtensionGetter_gtlEnum_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlEnum_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an enum to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 748)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_float (defineExtensionGetter_gtlEnum_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 752)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                               extensionGetter_gtlEnum_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_plusOp (defineExtensionGetter_gtlEnum_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlEnum minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 755)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                extensionGetter_gtlEnum_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_minusOp (defineExtensionGetter_gtlEnum_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 758)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_notOp (defineExtensionGetter_gtlEnum_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 761)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_addOp (defineExtensionGetter_gtlEnum_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 764)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_subOp (defineExtensionGetter_gtlEnum_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 767)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_mulOp (defineExtensionGetter_gtlEnum_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 770)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_divOp (defineExtensionGetter_gtlEnum_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 773)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_modOp (defineExtensionGetter_gtlEnum_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 776)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_andOp (defineExtensionGetter_gtlEnum_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 779)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_orOp (defineExtensionGetter_gtlEnum_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 782)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_xorOp (defineExtensionGetter_gtlEnum_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 785)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_slOp (defineExtensionGetter_gtlEnum_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 788)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_srOp (defineExtensionGetter_gtlEnum_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlEnum).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlEnum temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlEnum *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlEnum *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlEnum", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 795)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 794)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 795))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 792)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 798)), GALGAS_string ("enum expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 798)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_neqOp (defineExtensionGetter_gtlEnum_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlEnum).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlEnum temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlEnum *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlEnum *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlEnum", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 806)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 805)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 806))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 803)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 809)), GALGAS_string ("enum expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 809)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_eqOp (defineExtensionGetter_gtlEnum_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 813)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_gtOp (defineExtensionGetter_gtlEnum_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 816)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_geOp (defineExtensionGetter_gtlEnum_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 819)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_ltOp (defineExtensionGetter_gtlEnum_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 822)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_leOp (defineExtensionGetter_gtlEnum_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlEnum embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlEnum_embeddedType (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 827)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                     extensionGetter_gtlEnum_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_embeddedType (defineExtensionGetter_gtlEnum_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlEnum addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlEnum_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & /* ioArgument_objectList */,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("enum forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 832)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlEnum_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                   extensionMethod_gtlEnum_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlEnum_addMyValue (defineExtensionMethod_gtlEnum_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlEnum performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_methodName,
                                                             const GALGAS_gtlDataList constinArgument_arguments,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 845)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 846)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 846)) ;
    }
    const GALGAS_gtlEnum temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 848)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 848)), callExtensionGetter_string ((const cPtr_gtlEnum *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 848))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 847)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 850)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 851)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 851)) ;
      }
      const GALGAS_gtlEnum temp_3 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 853)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 853)), temp_3.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 853))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 852)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 855)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 856)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 856)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 858)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 858)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 857)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 860)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 861)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 861)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 863)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 863)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 863))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 862)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 865)).boolEnum () ;
          if (kBoolTrue == test_6) {
            const GALGAS_gtlEnum temp_7 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 866)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 867)), constinArgument_context, constinArgument_lib, temp_7, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 866)) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 874)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 874)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 874)).add_operation (GALGAS_string ("' for enum target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 874)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 874)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                      extensionGetter_gtlEnum_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_performGetter (defineExtensionGetter_gtlEnum_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlEnum performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlEnum_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlEnum * object = (cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 887)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 888)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 888)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 889)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 889)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 889)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 889)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 889)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_28409 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_28409.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 890)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 890)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 891)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 892)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 893)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 893)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 894)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 895)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlEnum temp_4 = object ;
        GALGAS_gtlData var_copy_28705 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 897)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 898)), constinArgument_context, constinArgument_lib, var_copy_28705, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 897)) ;
        GALGAS_gtlEnum temp_5 ;
        if (var_copy_28705.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlEnum *> (var_copy_28705.ptr ())) {
            temp_5 = (cPtr_gtlEnum *) var_copy_28705.ptr () ;
          }else{
            inCompiler->castError ("gtlEnum", var_copy_28705.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 904)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 904)) ;
        object->mProperty_where = var_copy_28705.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 905)) ;
        object->mProperty_meta = var_copy_28705.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 906)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 908)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 908)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 908)).add_operation (GALGAS_string ("' for enum target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 908)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 908)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlEnum_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                      extensionSetter_gtlEnum_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlEnum_performSetter (defineExtensionSetter_gtlEnum_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlChar_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 921)).add_operation (GALGAS_string ("char: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 921)).add_operation (object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 922)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 922)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 922)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_desc (defineExtensionGetter_gtlChar_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlChar_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 925)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                               extensionGetter_gtlChar_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_string (defineExtensionGetter_gtlChar_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlChar lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlChar_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 928)), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 928)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                extensionGetter_gtlChar_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_lstring (defineExtensionGetter_gtlChar_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlChar_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a char to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 932)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_bool (defineExtensionGetter_gtlChar_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlChar_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = object->mProperty_value.getter_uint (SOURCE_FILE ("gtl_data_types.galgas", 936)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 936)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                            extensionGetter_gtlChar_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_int (defineExtensionGetter_gtlChar_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlChar_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a char to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 940)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_float (defineExtensionGetter_gtlChar_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 944)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                               extensionGetter_gtlChar_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_plusOp (defineExtensionGetter_gtlChar_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlChar minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 948)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                extensionGetter_gtlChar_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_minusOp (defineExtensionGetter_gtlChar_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 952)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_notOp (defineExtensionGetter_gtlChar_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 956)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_addOp (defineExtensionGetter_gtlChar_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 960)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_subOp (defineExtensionGetter_gtlChar_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 964)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_mulOp (defineExtensionGetter_gtlChar_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 968)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_divOp (defineExtensionGetter_gtlChar_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 972)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_modOp (defineExtensionGetter_gtlChar_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 976)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_andOp (defineExtensionGetter_gtlChar_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 980)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_orOp (defineExtensionGetter_gtlChar_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 984)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_xorOp (defineExtensionGetter_gtlChar_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 988)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_slOp (defineExtensionGetter_gtlChar_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 992)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_srOp (defineExtensionGetter_gtlChar_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1000)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 999)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1000))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 997)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1003)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1003)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_neqOp (defineExtensionGetter_gtlChar_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1012)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1011)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1012))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1009)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1015)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1015)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_eqOp (defineExtensionGetter_gtlChar_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1024)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1023)), GALGAS_bool (kIsStrictSup, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1024))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1021)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1027)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1027)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_gtOp (defineExtensionGetter_gtlChar_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1036)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1035)), GALGAS_bool (kIsSupOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1036))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1033)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1039)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1039)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_geOp (defineExtensionGetter_gtlChar_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1048)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1047)), GALGAS_bool (kIsStrictInf, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1048))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1045)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1051)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1051)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_ltOp (defineExtensionGetter_gtlChar_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1060)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1059)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1060))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1057)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1063)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1063)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_leOp (defineExtensionGetter_gtlChar_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlChar embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlChar_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_char) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                     extensionGetter_gtlChar_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_embeddedType (defineExtensionGetter_gtlChar_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlChar addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlChar_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 1074))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1074)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlChar_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                   extensionMethod_gtlChar_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlChar_addMyValue (defineExtensionMethod_gtlChar_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlChar performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_methodName,
                                                             const GALGAS_gtlDataList constinArgument_arguments,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1087)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1088)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1088)) ;
    }
    const GALGAS_gtlChar temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1090)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1090)), callExtensionGetter_string ((const cPtr_gtlChar *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1090))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1089)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("isAlnum").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1092)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1093)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1093)) ;
      }
      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1095)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1095)), object->mProperty_value.getter_isalnum (SOURCE_FILE ("gtl_data_types.galgas", 1095))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1094)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isCntrl").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1097)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1098)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1098)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1100)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1100)), object->mProperty_value.getter_iscntrl (SOURCE_FILE ("gtl_data_types.galgas", 1100))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1099)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isDigit").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1102)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1103)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1103)) ;
          }
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1105)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1105)), object->mProperty_value.getter_isdigit (SOURCE_FILE ("gtl_data_types.galgas", 1105))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1104)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("isAlpha").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1107)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1108)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1108)) ;
            }
            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1110)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1110)), object->mProperty_value.getter_isalpha (SOURCE_FILE ("gtl_data_types.galgas", 1110))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1109)) ;
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("isLower").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1112)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1113)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1113)) ;
              }
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1115)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1115)), object->mProperty_value.getter_islower (SOURCE_FILE ("gtl_data_types.galgas", 1115))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1114)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("isUpper").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1117)))).boolEnum () ;
              if (kBoolTrue == test_7) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1118)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1118)) ;
                }
                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1120)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1120)), object->mProperty_value.getter_isupper (SOURCE_FILE ("gtl_data_types.galgas", 1120))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1119)) ;
              }else if (kBoolFalse == test_7) {
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("isXDigit").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1122)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1123)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1123)) ;
                  }
                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1125)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1125)), object->mProperty_value.getter_isxdigit (SOURCE_FILE ("gtl_data_types.galgas", 1125))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1124)) ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1127)))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1128)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1128)) ;
                    }
                    const GALGAS_gtlChar temp_10 = object ;
                    result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1130)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1130)), temp_10.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 1130))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1129)) ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1132)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1133)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1133)) ;
                      }
                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1135)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1135)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1134)) ;
                    }else if (kBoolFalse == test_11) {
                      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1137)))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)) ;
                        }
                        result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1140)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1140)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1140))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1139)) ;
                      }else if (kBoolFalse == test_12) {
                        const enumGalgasBool test_13 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1142)).boolEnum () ;
                        if (kBoolTrue == test_13) {
                          const GALGAS_gtlChar temp_14 = object ;
                          result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1143)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1144)), constinArgument_context, constinArgument_lib, temp_14, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1143)) ;
                        }else if (kBoolFalse == test_13) {
                          TC_Array <C_FixItDescription> fixItArray15 ;
                          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1151)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1151)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1151)).add_operation (GALGAS_string ("' for char target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1151)), fixItArray15  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1151)) ;
                          result_result.drop () ; // Release error dropped variable
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                      extensionGetter_gtlChar_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_performGetter (defineExtensionGetter_gtlChar_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlChar performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlChar_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlChar * object = (cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1164)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1165)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1165)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1166)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1166)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1166)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1166)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1166)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_36679 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_36679.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1167)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1167)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1168)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1169)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1170)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1170)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1171)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1172)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlChar temp_4 = object ;
        GALGAS_gtlData var_copy_36975 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1174)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1175)), constinArgument_context, constinArgument_lib, var_copy_36975, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1174)) ;
        GALGAS_gtlChar temp_5 ;
        if (var_copy_36975.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlChar *> (var_copy_36975.ptr ())) {
            temp_5 = (cPtr_gtlChar *) var_copy_36975.ptr () ;
          }else{
            inCompiler->castError ("gtlChar", var_copy_36975.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1181)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1181)) ;
        object->mProperty_where = var_copy_36975.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1182)) ;
        object->mProperty_meta = var_copy_36975.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 1183)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1185)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1185)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1185)).add_operation (GALGAS_string ("' for char target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1185)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1185)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlChar_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                      extensionSetter_gtlChar_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlChar_performSetter (defineExtensionSetter_gtlChar_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlInt_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1198)).add_operation (GALGAS_string ("integer: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1198)).add_operation (object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1199)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1199)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1199)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_desc (defineExtensionGetter_gtlInt_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlInt_string (const cPtr_gtlData * inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1202)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                               extensionGetter_gtlInt_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_string (defineExtensionGetter_gtlInt_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlInt_lstring (const cPtr_gtlData * inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1205)), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1205)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                extensionGetter_gtlInt_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_lstring (defineExtensionGetter_gtlInt_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlInt_bool (const cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an int to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1209)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_bool (defineExtensionGetter_gtlInt_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Overriding extension getter '@gtlInt int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlInt_int (const cPtr_gtlData * inObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = object->mProperty_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                            extensionGetter_gtlInt_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_int (defineExtensionGetter_gtlInt_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlInt_float (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = object->mProperty_value.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1217)).getter_double (SOURCE_FILE ("gtl_data_types.galgas", 1217)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_float (defineExtensionGetter_gtlInt_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_plusOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const GALGAS_gtlInt temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                               extensionGetter_gtlInt_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_plusOp (defineExtensionGetter_gtlInt_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_minusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1223)), object->mProperty_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1223))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1223)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                extensionGetter_gtlInt_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_minusOp (defineExtensionGetter_gtlInt_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_notOp (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1227)), object->mProperty_value.operator_tilde (SOURCE_FILE ("gtl_data_types.galgas", 1227))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1227)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_notOp (defineExtensionGetter_gtlInt_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1235)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1234)), object->mProperty_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1235)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1235))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1232)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1238)), GALGAS_string ("*int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1238)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_addOp (defineExtensionGetter_gtlInt_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1247)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1246)), object->mProperty_value.substract_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1247))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1244)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1250)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1250)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_subOp (defineExtensionGetter_gtlInt_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_mulOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1259)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1258)), object->mProperty_value.multiply_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1259)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1259))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1256)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1262)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1262)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_mulOp (defineExtensionGetter_gtlInt_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_divOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1271)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1270)), object->mProperty_value.divide_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1271)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1271))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1268)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1274)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1274)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_divOp (defineExtensionGetter_gtlInt_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_modOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1283)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1282)), object->mProperty_value.modulo_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1283)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1283))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1280)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1286)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1286)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_modOp (defineExtensionGetter_gtlInt_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1295)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1294)), object->mProperty_value.operator_and (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1295)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1295))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1292)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1298)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1298)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_andOp (defineExtensionGetter_gtlInt_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1307)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1306)), object->mProperty_value.operator_or (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1307)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1307))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1304)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1310)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1310)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_orOp (defineExtensionGetter_gtlInt_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_xorOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1319)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1318)), object->mProperty_value.operator_xor (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1319)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1319))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1316)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1322)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1322)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_xorOp (defineExtensionGetter_gtlInt_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_slOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1328)) ;
      }
    }
    GALGAS_bigint var_r_40815 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1328)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_r_40815.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1329)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_gtlInt temp_3 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
          temp_3 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1333)) ;
        }
      }
      result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1332)), object->mProperty_value.left_shift_operation (temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1333)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1333)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1333))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1330)) ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1336)), GALGAS_string ("positive int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1336)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1339)), GALGAS_string ("int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1339)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_slOp (defineExtensionGetter_gtlInt_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_srOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1345)) ;
      }
    }
    GALGAS_bigint var_r_41249 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1345)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_r_41249.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1346)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result = GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1347)), object->mProperty_value.right_shift_operation (var_r_41249.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1347)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1347))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1347)) ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1349)), GALGAS_string ("positive int expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1349)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1352)), GALGAS_string ("int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1352)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_srOp (defineExtensionGetter_gtlInt_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1361)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1360)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1361))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1358)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1364)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1364)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_neqOp (defineExtensionGetter_gtlInt_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1373)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1372)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1373))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1370)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1376)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1376)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_eqOp (defineExtensionGetter_gtlInt_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1385)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1384)), GALGAS_bool (kIsStrictSup, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1385))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1382)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1388)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1388)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_gtOp (defineExtensionGetter_gtlInt_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1397)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1396)), GALGAS_bool (kIsSupOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1397))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1394)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1400)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1400)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_geOp (defineExtensionGetter_gtlInt_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1409)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1408)), GALGAS_bool (kIsStrictInf, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1409))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1406)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1412)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1412)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_ltOp (defineExtensionGetter_gtlInt_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1421)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1420)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1421))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1418)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1424)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1424)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_leOp (defineExtensionGetter_gtlInt_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlInt embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlInt_embeddedType (const cPtr_gtlData * /* inObject */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_bigint) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                     extensionGetter_gtlInt_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_embeddedType (defineExtensionGetter_gtlInt_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlInt addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInt_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 1435))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1435)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInt_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                   extensionMethod_gtlInt_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInt_addMyValue (defineExtensionMethod_gtlInt_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlInt performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_performGetter (const cPtr_gtlData * inObject,
                                                            const GALGAS_lstring constinArgument_methodName,
                                                            const GALGAS_gtlDataList constinArgument_arguments,
                                                            const GALGAS_gtlContext constinArgument_context,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1448)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1449)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1449)) ;
    }
    const GALGAS_gtlInt temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1451)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1451)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1451))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1450)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("padded").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1453)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1454)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1454)) ;
      }
      GALGAS_gtlInt temp_3 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)).ptr ())) {
          temp_3 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)).ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)) ;
        }
      }
      GALGAS_uint var_fieldSize_44071 = temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1455)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)) ;
      const GALGAS_gtlInt temp_4 = object ;
      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1457)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1458)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1459)).getter_stringByLeftAndRightPadding (var_fieldSize_44071, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1459))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1456)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("leftPadded").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1461)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1462)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1462)) ;
        }
        GALGAS_gtlInt temp_6 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1463)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1463)).ptr ())) {
            temp_6 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1463)).ptr () ;
          }else{
            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1463)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1463)) ;
          }
        }
        GALGAS_uint var_fieldSize_44412 = temp_6.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1463)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1463)) ;
        const GALGAS_gtlInt temp_7 = object ;
        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1465)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1466)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_7.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1467)).getter_stringByLeftPadding (var_fieldSize_44412, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1467))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1464)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("rightPadded").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1469)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1470)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1470)) ;
          }
          GALGAS_gtlInt temp_9 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1471)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1471)).ptr ())) {
              temp_9 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1471)).ptr () ;
            }else{
              inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1471)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1471)) ;
            }
          }
          GALGAS_uint var_fieldSize_44747 = temp_9.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1471)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1471)) ;
          const GALGAS_gtlInt temp_10 = object ;
          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1473)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1474)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_10.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1475)).getter_stringByRightPadding (var_fieldSize_44747, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1475))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1472)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("hexString").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1477)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1478)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1478)) ;
            }
            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1480)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1480)), object->mProperty_value.getter_hexString (SOURCE_FILE ("gtl_data_types.galgas", 1480))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1479)) ;
          }else if (kBoolFalse == test_11) {
            const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("xString").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1482)))).boolEnum () ;
            if (kBoolTrue == test_12) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1483)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1483)) ;
              }
              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1485)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1485)), object->mProperty_value.getter_xString (SOURCE_FILE ("gtl_data_types.galgas", 1485))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1484)) ;
            }else if (kBoolFalse == test_12) {
              const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, GALGAS_string ("numberOfBytes").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1487)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1488)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1488)) ;
                }
                result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1490)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1491)), object->mProperty_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1492)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1492)).substract_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1492)).divide_operation (GALGAS_uint ((uint32_t) 8U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1492)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1492))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1489)) ;
              }else if (kBoolFalse == test_13) {
                const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_string ("signedNumberOfBytes").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1494)))).boolEnum () ;
                if (kBoolTrue == test_14) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1495)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1495)) ;
                  }
                  result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1497)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1498)), object->mProperty_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1499)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1499)).substract_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1499)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1499)).divide_operation (GALGAS_uint ((uint32_t) 8U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1499)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1499)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1499)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1499))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1496)) ;
                }else if (kBoolFalse == test_14) {
                  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_string ("numberOfBits").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1501)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1502)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1502)) ;
                    }
                    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1504)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1505)), object->mProperty_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1506)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1506))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1503)) ;
                  }else if (kBoolFalse == test_15) {
                    const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, GALGAS_string ("signedNumberOfBits").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1508)))).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1509)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1509)) ;
                      }
                      result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1511)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1512)), object->mProperty_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1513)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1513))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1510)) ;
                    }else if (kBoolFalse == test_16) {
                      const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_string ("sign").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1515)))).boolEnum () ;
                      if (kBoolTrue == test_17) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1516)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1516)) ;
                        }
                        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1518)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1519)), object->mProperty_value.getter_sign (SOURCE_FILE ("gtl_data_types.galgas", 1520)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1520))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1517)) ;
                      }else if (kBoolFalse == test_17) {
                        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInByte").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1522)))).boolEnum () ;
                        if (kBoolTrue == test_18) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1523)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1523)) ;
                          }
                          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1525)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1526)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1527)).objectCompare (GALGAS_uint ((uint32_t) 8U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1524)) ;
                        }else if (kBoolFalse == test_18) {
                          const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInByte").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1529)))).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1530)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1530)) ;
                            }
                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1532)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1533)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1534)).objectCompare (GALGAS_uint ((uint32_t) 8U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1531)) ;
                          }else if (kBoolFalse == test_19) {
                            const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInShort").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1536)))).boolEnum () ;
                            if (kBoolTrue == test_20) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1537)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1537)) ;
                              }
                              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1539)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1540)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1541)).objectCompare (GALGAS_uint ((uint32_t) 16U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1538)) ;
                            }else if (kBoolFalse == test_20) {
                              const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInShort").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1543)))).boolEnum () ;
                              if (kBoolTrue == test_21) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1544)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1544)) ;
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1546)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1547)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1548)).objectCompare (GALGAS_uint ((uint32_t) 16U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1545)) ;
                              }else if (kBoolFalse == test_21) {
                                const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1550)))).boolEnum () ;
                                if (kBoolTrue == test_22) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1551)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1551)) ;
                                  }
                                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1553)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1554)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1555)).objectCompare (GALGAS_uint ((uint32_t) 32U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1552)) ;
                                }else if (kBoolFalse == test_22) {
                                  const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1557)))).boolEnum () ;
                                  if (kBoolTrue == test_23) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1558)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1558)) ;
                                    }
                                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1560)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1561)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1562)).objectCompare (GALGAS_uint ((uint32_t) 32U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1559)) ;
                                  }else if (kBoolFalse == test_23) {
                                    const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInLongLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1564)))).boolEnum () ;
                                    if (kBoolTrue == test_24) {
                                      {
                                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1565)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1565)) ;
                                      }
                                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1567)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1568)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1569)).objectCompare (GALGAS_uint ((uint32_t) 64U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1566)) ;
                                    }else if (kBoolFalse == test_24) {
                                      const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInLongLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1571)))).boolEnum () ;
                                      if (kBoolTrue == test_25) {
                                        {
                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1572)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1572)) ;
                                        }
                                        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1574)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1575)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1576)).objectCompare (GALGAS_uint ((uint32_t) 64U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1573)) ;
                                      }else if (kBoolFalse == test_25) {
                                        const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, GALGAS_string ("abs").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1578)))).boolEnum () ;
                                        if (kBoolTrue == test_26) {
                                          {
                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1579)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1579)) ;
                                          }
                                          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1581)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1582)), object->mProperty_value.getter_abs (SOURCE_FILE ("gtl_data_types.galgas", 1583))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1580)) ;
                                        }else if (kBoolFalse == test_26) {
                                          const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_string ("bitAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1585)))).boolEnum () ;
                                          if (kBoolTrue == test_27) {
                                            {
                                            routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1586)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1586)) ;
                                            }
                                            GALGAS_gtlInt temp_28 ;
                                            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1587)).isValid ()) {
                                              if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1587)).ptr ())) {
                                                temp_28 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1587)).ptr () ;
                                              }else{
                                                inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1587)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1587)) ;
                                              }
                                            }
                                            GALGAS_uint var_index_48943 = temp_28.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1587)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1587)) ;
                                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1589)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1590)), object->mProperty_value.getter_bitAtIndex (var_index_48943 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1591))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1588)) ;
                                          }else if (kBoolFalse == test_27) {
                                            const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1593)))).boolEnum () ;
                                            if (kBoolTrue == test_29) {
                                              {
                                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1594)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1594)) ;
                                              }
                                              const GALGAS_gtlInt temp_30 = object ;
                                              result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1596)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1596)), temp_30.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 1596))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1595)) ;
                                            }else if (kBoolFalse == test_29) {
                                              const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1598)))).boolEnum () ;
                                              if (kBoolTrue == test_31) {
                                                {
                                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1599)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1599)) ;
                                                }
                                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1601)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1600)) ;
                                              }else if (kBoolFalse == test_31) {
                                                const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1603)))).boolEnum () ;
                                                if (kBoolTrue == test_32) {
                                                  {
                                                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1604)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1604)) ;
                                                  }
                                                  result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1606)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1606))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1605)) ;
                                                }else if (kBoolFalse == test_32) {
                                                  const enumGalgasBool test_33 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1608)).boolEnum () ;
                                                  if (kBoolTrue == test_33) {
                                                    const GALGAS_gtlInt temp_34 = object ;
                                                    result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1609)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1610)), constinArgument_context, constinArgument_lib, temp_34, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1609)) ;
                                                  }else if (kBoolFalse == test_33) {
                                                    TC_Array <C_FixItDescription> fixItArray35 ;
                                                    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1617)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1617)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1617)).add_operation (GALGAS_string ("' for int target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1617)), fixItArray35  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1617)) ;
                                                    result_result.drop () ; // Release error dropped variable
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                      extensionGetter_gtlInt_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_performGetter (defineExtensionGetter_gtlInt_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlInt performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlInt_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_gtlContext constinArgument_context,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlInt * object = (cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1630)).objectCompare (GALGAS_string ("setBitAtIndex"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_boolIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1631)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1631)) ;
    }
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1632)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1632)).ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1632)).ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1632)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1632)) ;
      }
    }
    GALGAS_bool var_bit_50449 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1632)) ;
    GALGAS_gtlInt temp_2 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1633)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1633)).ptr ())) {
        temp_2 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1633)).ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1633)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1633)) ;
      }
    }
    GALGAS_uint var_index_50514 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1633)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1633)) ;
    {
    object->mProperty_value.setter_setBitAtIndex (var_bit_50449, var_index_50514 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1634)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1635)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1636)).objectCompare (GALGAS_string ("complementBitAtIndex"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1637)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1637)) ;
      }
      GALGAS_gtlInt temp_4 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1638)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1638)).ptr ())) {
          temp_4 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1638)).ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1638)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1638)) ;
        }
      }
      GALGAS_uint var_index_50765 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1638)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1638)) ;
      {
      object->mProperty_value.setter_complementBitAtIndex (var_index_50765 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1639)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1640)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1641)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1642)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1642)) ;
        }
        GALGAS_gtlString temp_6 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)).ptr ())) {
            temp_6 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)).ptr () ;
          }else{
            inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)) ;
          }
        }
        GALGAS_gtlString var_descriptionToSet_51022 = temp_6 ;
        {
        object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_51022.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1644)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1644)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1645)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1646)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1647)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1647)) ;
          }
          object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1648)) ;
        }else if (kBoolFalse == test_7) {
          const enumGalgasBool test_8 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1649)).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GALGAS_gtlInt temp_9 = object ;
            GALGAS_gtlData var_copy_51317 = temp_9 ;
            callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1651)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1652)), constinArgument_context, constinArgument_lib, var_copy_51317, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1651)) ;
            GALGAS_gtlInt temp_10 ;
            if (var_copy_51317.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_copy_51317.ptr ())) {
                temp_10 = (cPtr_gtlInt *) var_copy_51317.ptr () ;
              }else{
                inCompiler->castError ("gtlInt", var_copy_51317.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1658)) ;
              }
            }
            object->mProperty_value = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1658)) ;
            object->mProperty_where = var_copy_51317.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1659)) ;
            object->mProperty_meta = var_copy_51317.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 1660)) ;
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1662)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1662)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1662)).add_operation (GALGAS_string ("' for int target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1662)), fixItArray11  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1662)) ;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlInt_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                      extensionSetter_gtlInt_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlInt_performSetter (defineExtensionSetter_gtlInt_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlFloat_desc (const cPtr_gtlData * inObject,
                                                    const GALGAS_uint constinArgument_tab,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1675)).add_operation (GALGAS_string ("float: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1675)).add_operation (object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1676)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1676)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1676)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_desc (defineExtensionGetter_gtlFloat_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlFloat_string (const cPtr_gtlData * inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1679)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                               extensionGetter_gtlFloat_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_string (defineExtensionGetter_gtlFloat_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat lstring'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlFloat_lstring (const cPtr_gtlData * inObject,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1682)), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1682)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                extensionGetter_gtlFloat_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_lstring (defineExtensionGetter_gtlFloat_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlFloat_bool (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a float to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1686)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_bool (defineExtensionGetter_gtlFloat_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlFloat int'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlFloat_int (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = object->mProperty_value.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1690)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1690)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                            extensionGetter_gtlFloat_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_int (defineExtensionGetter_gtlFloat_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat float'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlFloat_float (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = object->mProperty_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_float (defineExtensionGetter_gtlFloat_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_plusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const GALGAS_gtlFloat temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                               extensionGetter_gtlFloat_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_plusOp (defineExtensionGetter_gtlFloat_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat minusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_minusOp (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = GALGAS_gtlFloat::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1700)), object->mProperty_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1700))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1700)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                extensionGetter_gtlFloat_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_minusOp (defineExtensionGetter_gtlFloat_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat notOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_notOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1704)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_notOp (defineExtensionGetter_gtlFloat_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat addOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_addOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1712)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1711)), object->mProperty_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1712)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1712))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1709)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1715)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1715)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_addOp (defineExtensionGetter_gtlFloat_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat subOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_subOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1724)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1723)), object->mProperty_value.substract_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1724)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1724))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1721)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1727)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1727)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_subOp (defineExtensionGetter_gtlFloat_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat mulOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_mulOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1736)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1735)), object->mProperty_value.multiply_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1736)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1736))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1733)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1739)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1739)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_mulOp (defineExtensionGetter_gtlFloat_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat divOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_divOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1748)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1747)), object->mProperty_value.divide_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1748)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1748))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1745)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1751)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1751)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_divOp (defineExtensionGetter_gtlFloat_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat modOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_modOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1756)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_modOp (defineExtensionGetter_gtlFloat_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat andOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_andOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1760)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_andOp (defineExtensionGetter_gtlFloat_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_orOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1764)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_orOp (defineExtensionGetter_gtlFloat_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat xorOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_xorOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1768)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_xorOp (defineExtensionGetter_gtlFloat_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_slOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1772)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_slOp (defineExtensionGetter_gtlFloat_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_srOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1776)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_srOp (defineExtensionGetter_gtlFloat_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat neqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_neqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1784)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1783)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1784))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1781)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1787)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1787)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_neqOp (defineExtensionGetter_gtlFloat_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_eqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1796)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1795)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1796))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1793)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1799)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1799)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_eqOp (defineExtensionGetter_gtlFloat_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_gtOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1808)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1807)), GALGAS_bool (kIsStrictSup, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1808))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1805)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1811)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1811)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_gtOp (defineExtensionGetter_gtlFloat_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_geOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1820)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1819)), GALGAS_bool (kIsSupOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1820))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1817)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1823)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1823)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_geOp (defineExtensionGetter_gtlFloat_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_ltOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1832)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1831)), GALGAS_bool (kIsStrictInf, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1832))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1829)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1835)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1835)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_ltOp (defineExtensionGetter_gtlFloat_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_leOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1844)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1843)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1844))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1841)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1847)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1847)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_leOp (defineExtensionGetter_gtlFloat_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlFloat embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlFloat_embeddedType (const cPtr_gtlData * /* inObject */,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_double) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                     extensionGetter_gtlFloat_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_embeddedType (defineExtensionGetter_gtlFloat_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlFloat addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlFloat_addMyValue (const cPtr_gtlData * inObject,
                                                 GALGAS_objectlist & ioArgument_objectList,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 1858))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1858)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlFloat_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                   extensionMethod_gtlFloat_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlFloat_addMyValue (defineExtensionMethod_gtlFloat_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlFloat performGetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_performGetter (const cPtr_gtlData * inObject,
                                                              const GALGAS_lstring constinArgument_methodName,
                                                              const GALGAS_gtlDataList constinArgument_arguments,
                                                              const GALGAS_gtlContext constinArgument_context,
                                                              const GALGAS_library constinArgument_lib,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1871)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1872)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1872)) ;
    }
    const GALGAS_gtlFloat temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1874)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1874)), callExtensionGetter_string ((const cPtr_gtlFloat *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1874))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1873)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("cos").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1876)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1877)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1877)) ;
      }
      result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1879)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1879)), object->mProperty_value.getter_cos (SOURCE_FILE ("gtl_data_types.galgas", 1879))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1878)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("sin").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1881)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1882)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1882)) ;
        }
        result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1884)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1884)), object->mProperty_value.getter_sin (SOURCE_FILE ("gtl_data_types.galgas", 1884))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1883)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("tan").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1886)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1887)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1887)) ;
          }
          result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1889)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1889)), object->mProperty_value.getter_tan (SOURCE_FILE ("gtl_data_types.galgas", 1889))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1888)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("cosDegree").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1891)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1892)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1892)) ;
            }
            result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1894)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1894)), object->mProperty_value.getter_cosDegree (SOURCE_FILE ("gtl_data_types.galgas", 1894))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1893)) ;
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("sinDegree").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1896)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1897)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1897)) ;
              }
              result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1899)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1899)), object->mProperty_value.getter_sinDegree (SOURCE_FILE ("gtl_data_types.galgas", 1899))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1898)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("tanDegree").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1901)))).boolEnum () ;
              if (kBoolTrue == test_7) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1902)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1902)) ;
                }
                result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1904)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1904)), object->mProperty_value.getter_tanDegree (SOURCE_FILE ("gtl_data_types.galgas", 1904))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1903)) ;
              }else if (kBoolFalse == test_7) {
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("exp").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1906)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1907)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1907)) ;
                  }
                  result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1909)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1909)), object->mProperty_value.getter_exp (SOURCE_FILE ("gtl_data_types.galgas", 1909))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1908)) ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("logn").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1911)))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1912)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1912)) ;
                    }
                    result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1914)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1914)), object->mProperty_value.getter_logn (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1914))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1913)) ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, GALGAS_string ("log2").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1916)))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1917)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1917)) ;
                      }
                      result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1919)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1919)), object->mProperty_value.getter_log_32_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1919))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1918)) ;
                    }else if (kBoolFalse == test_10) {
                      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("log10").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1921)))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1922)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1922)) ;
                        }
                        result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1924)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1924)), object->mProperty_value.getter_log_31__30_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1924))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1923)) ;
                      }else if (kBoolFalse == test_11) {
                        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("sqrt").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1926)))).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1927)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1927)) ;
                          }
                          result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1929)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1929)), object->mProperty_value.getter_sqrt (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1929))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1928)) ;
                        }else if (kBoolFalse == test_12) {
                          const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, GALGAS_string ("power").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1931)))).boolEnum () ;
                          if (kBoolTrue == test_13) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_floatArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1932)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1932)) ;
                            }
                            GALGAS_gtlFloat temp_14 ;
                            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1933)).isValid ()) {
                              if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1933)).ptr ())) {
                                temp_14 = (cPtr_gtlFloat *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1933)).ptr () ;
                              }else{
                                inCompiler->castError ("gtlFloat", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1933)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1933)) ;
                              }
                            }
                            GALGAS_double var_power_59563 = temp_14.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1933)) ;
                            result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1935)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1935)), object->mProperty_value.getter_power (var_power_59563, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1935))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1934)) ;
                          }else if (kBoolFalse == test_13) {
                            const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1937)))).boolEnum () ;
                            if (kBoolTrue == test_15) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1938)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1938)) ;
                              }
                              const GALGAS_gtlFloat temp_16 = object ;
                              result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1940)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1940)), temp_16.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 1940))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1939)) ;
                            }else if (kBoolFalse == test_15) {
                              const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1942)))).boolEnum () ;
                              if (kBoolTrue == test_17) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1943)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1943)) ;
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1945)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1945)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1944)) ;
                              }else if (kBoolFalse == test_17) {
                                const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("int").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1947)))).boolEnum () ;
                                if (kBoolTrue == test_18) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1948)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1948)) ;
                                  }
                                  result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1950)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1950)), object->mProperty_value.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1950)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1950))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1949)) ;
                                }else if (kBoolFalse == test_18) {
                                  const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1952)))).boolEnum () ;
                                  if (kBoolTrue == test_19) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1953)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1953)) ;
                                    }
                                    result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1955)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1955)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1955))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1954)) ;
                                  }else if (kBoolFalse == test_19) {
                                    const enumGalgasBool test_20 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1957)).boolEnum () ;
                                    if (kBoolTrue == test_20) {
                                      const GALGAS_gtlFloat temp_21 = object ;
                                      result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1958)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1959)), constinArgument_context, constinArgument_lib, temp_21, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1958)) ;
                                    }else if (kBoolFalse == test_20) {
                                      TC_Array <C_FixItDescription> fixItArray22 ;
                                      inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1966)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1966)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1966)).add_operation (GALGAS_string ("' for float target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1966)), fixItArray22  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1966)) ;
                                      result_result.drop () ; // Release error dropped variable
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                      extensionGetter_gtlFloat_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_performGetter (defineExtensionGetter_gtlFloat_performGetter, NULL) ;

