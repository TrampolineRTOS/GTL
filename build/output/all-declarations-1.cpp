#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


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
// At index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 95
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_unlet) // $unlet$
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 104
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_error) // $error$
, NONTERMINAL (11) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 15 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 118
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_warning) // $warning$
, NONTERMINAL (11) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 20 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 132
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_print) // $print$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 23 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 144
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_println) // $println$
, NONTERMINAL (37) // <select_gtl_5F_instruction_5F_parser_1>
, END_PRODUCTION
// At index 26 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 163
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_display) // $display$
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 29 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 175
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_sort) // $sort$
, NONTERMINAL (10) // <gtl_variable>
, NONTERMINAL (38) // <select_gtl_5F_instruction_5F_parser_2>
, END_PRODUCTION
// At index 33 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 202
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_tab) // $tab$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 36 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 214
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 38 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 222
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_libraries) // $libraries$
, END_PRODUCTION
// At index 40 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 230
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B__21_) // $[!$
, NONTERMINAL (10) // <gtl_variable>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (40) // <select_gtl_5F_instruction_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 46 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 270
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_import) // $import$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 49 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 716
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (68) // <select_gtl_5F_expression_5F_parser_25>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 53 : <gtl_instruction_list>, in file 'gtl_module_parser.ggs', line 45
, NONTERMINAL (18) // <select_gtl_5F_module_5F_parser_0>
, END_PRODUCTION
// At index 55 : <gtl_module_start_symbol>, in file 'gtl_module_parser.ggs', line 73
, NONTERMINAL (19) // <select_gtl_5F_module_5F_parser_1>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 58 : <gtl_function>, in file 'gtl_module_parser.ggs', line 98
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_func) // $func$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (3) // <gtl_argument_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_func) // $func$
, END_PRODUCTION
// At index 66 : <gtl_getter>, in file 'gtl_module_parser.ggs', line 117
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
// At index 76 : <gtl_setter>, in file 'gtl_module_parser.ggs', line 142
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_setter) // $setter$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (3) // <gtl_argument_list>
, NONTERMINAL (4) // <gtl_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_setter) // $setter$
, END_PRODUCTION
// At index 85 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 165
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (21) // <select_gtl_5F_module_5F_parser_3>
, NONTERMINAL (22) // <select_gtl_5F_module_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, END_PRODUCTION
// At index 94 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 198
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
// At index 108 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 261
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
// At index 119 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 301
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
// At index 135 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 361
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
// At index 145 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 667
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (64) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 149 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 702
, NONTERMINAL (67) // <select_gtl_5F_expression_5F_parser_24>
, END_PRODUCTION
// At index 151 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 257
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
//---- Added productions from 'select' and 'repeat' instructions
// At index 246 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
, END_PRODUCTION
// At index 247 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
, NONTERMINAL (9) // <gtl_instruction>
, NONTERMINAL (18) // <select_gtl_5F_module_5F_parser_0>
, END_PRODUCTION
// At index 250 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
, NONTERMINAL (1) // <gtl_simple_instruction>
, NONTERMINAL (18) // <select_gtl_5F_module_5F_parser_0>
, END_PRODUCTION
// At index 253 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 77
, END_PRODUCTION
// At index 254 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 77
, NONTERMINAL (2) // <gtl_import>
, NONTERMINAL (19) // <select_gtl_5F_module_5F_parser_1>
, END_PRODUCTION
// At index 257 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
, END_PRODUCTION
// At index 258 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
, NONTERMINAL (6) // <gtl_function>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 261 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
, NONTERMINAL (7) // <gtl_getter>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 264 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
, NONTERMINAL (8) // <gtl_setter>
, NONTERMINAL (20) // <select_gtl_5F_module_5F_parser_2>
, END_PRODUCTION
// At index 267 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 172
, END_PRODUCTION
// At index 268 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 172
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_elsif) // $elsif$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_instruction_list>
, NONTERMINAL (21) // <select_gtl_5F_module_5F_parser_3>
, END_PRODUCTION
// At index 274 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 182
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_else) // $else$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 277 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 182
, END_PRODUCTION
// At index 278 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 210
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 281 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 210
, END_PRODUCTION
// At index 282 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 216
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 286 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 216
, END_PRODUCTION
// At index 287 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 224
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 290 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 224
, END_PRODUCTION
// At index 291 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 232
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 294 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 232
, END_PRODUCTION
// At index 295 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 237
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 298 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 237
, END_PRODUCTION
// At index 299 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 275
, END_PRODUCTION
// At index 300 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 275
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (28) // <select_gtl_5F_module_5F_parser_10>
, END_PRODUCTION
// At index 304 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 285
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 307 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 285
, END_PRODUCTION
// At index 308 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 318
, END_PRODUCTION
// At index 309 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 318
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_up) // $up$
, END_PRODUCTION
// At index 311 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 318
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_down) // $down$
, END_PRODUCTION
// At index 313 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 326
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_step) // $step$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 316 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 326
, END_PRODUCTION
// At index 317 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 331
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 320 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 331
, END_PRODUCTION
// At index 321 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 339
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 324 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 339
, END_PRODUCTION
// At index 325 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 344
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 328 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 344
, END_PRODUCTION
// At index 329 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 367
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 333 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 367
, END_PRODUCTION
// At index 334 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 337 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B__3D_) // $+=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 340 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D__3D_) // $-=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 343 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A__3D_) // $*=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 346 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F__3D_) // $/=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 349 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod_3D_) // $mod=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 352 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_) // $<<=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 355 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_) // $>>=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 358 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26__3D_) // $&=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 361 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C__3D_) // $|=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 364 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E__3D_) // $^=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 367 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, END_PRODUCTION
// At index 368 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 148
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 370 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 148
, END_PRODUCTION
// At index 371 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 180
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <gtl_sorting_order>
, NONTERMINAL (39) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 376 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 180
, NONTERMINAL (12) // <gtl_sorting_order>
, END_PRODUCTION
// At index 378 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 183
, END_PRODUCTION
// At index 379 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 183
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <gtl_sorting_order>
, NONTERMINAL (39) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 384 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 237
, END_PRODUCTION
// At index 385 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 237
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 389 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 240
, END_PRODUCTION
// At index 390 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 240
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 394 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 260
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, END_PRODUCTION
// At index 396 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 260
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, END_PRODUCTION
// At index 398 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, END_PRODUCTION
// At index 399 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (13) // <gtl_relation_term>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 403 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (13) // <gtl_relation_term>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 407 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, END_PRODUCTION
// At index 408 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (14) // <gtl_relation_factor>
, NONTERMINAL (44) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 412 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, END_PRODUCTION
// At index 413 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3D__3D_) // $==$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 416 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21__3D_) // $!=$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 419 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3D_) // $<=$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 422 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3D_) // $>=$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 425 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 428 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, NONTERMINAL (15) // <gtl_simple_expression>
, END_PRODUCTION
// At index 431 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, END_PRODUCTION
// At index 432 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C_) // $<<$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 436 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E_) // $>>$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 440 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 444 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2E_) // $.$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 448 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (16) // <gtl_term>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 452 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, END_PRODUCTION
// At index 453 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 457 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F_) // $/$
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 461 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod) // $mod$
, NONTERMINAL (17) // <gtl_factor>
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 465 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, END_PRODUCTION
// At index 466 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (49) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 470 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, END_PRODUCTION
// At index 471 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (49) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 475 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, END_PRODUCTION
// At index 476 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (51) // <select_gtl_5F_expression_5F_parser_8>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 480 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (52) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 483 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, END_PRODUCTION
// At index 484 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, END_PRODUCTION
// At index 485 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (52) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 489 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_default) // $default$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 494 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, END_PRODUCTION
// At index 495 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 498 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 500 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (56) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 503 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, END_PRODUCTION
// At index 504 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, END_PRODUCTION
// At index 505 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (56) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 509 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (58) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 514 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, END_PRODUCTION
// At index 515 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, END_PRODUCTION
// At index 516 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (58) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 522 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (60) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 527 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, END_PRODUCTION
// At index 528 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, END_PRODUCTION
// At index 529 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (60) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 535 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 538 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, END_PRODUCTION
// At index 539 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, END_PRODUCTION
// At index 540 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 544 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
, END_PRODUCTION
// At index 545 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3A_) // $::$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (64) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 550 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (65) // <select_gtl_5F_expression_5F_parser_22>
, END_PRODUCTION
// At index 555 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
, END_PRODUCTION
// At index 556 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (66) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 561 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
, END_PRODUCTION
// At index 562 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
, END_PRODUCTION
// At index 563 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (66) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 568 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_here) // $here$
, END_PRODUCTION
// At index 570 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
, NONTERMINAL (10) // <gtl_variable>
, END_PRODUCTION
// At index 572 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (70) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 576 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
, END_PRODUCTION
// At index 577 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
, END_PRODUCTION
// At index 578 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (70) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 583 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 587 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
, END_PRODUCTION
// At index 588 : <>, in file '.ggs', line 0
, NONTERMINAL (5) // <gtl_module_start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_gtl_module_grammar [192] = {
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
 {"<select_gtl_5F_module_5F_parser_0>", "gtl_module_parser", 246}, // at index 59
 {"<select_gtl_5F_module_5F_parser_0>", "gtl_module_parser", 247}, // at index 60
 {"<select_gtl_5F_module_5F_parser_0>", "gtl_module_parser", 250}, // at index 61
 {"<select_gtl_5F_module_5F_parser_1>", "gtl_module_parser", 253}, // at index 62
 {"<select_gtl_5F_module_5F_parser_1>", "gtl_module_parser", 254}, // at index 63
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 257}, // at index 64
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 258}, // at index 65
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 261}, // at index 66
 {"<select_gtl_5F_module_5F_parser_2>", "gtl_module_parser", 264}, // at index 67
 {"<select_gtl_5F_module_5F_parser_3>", "gtl_module_parser", 267}, // at index 68
 {"<select_gtl_5F_module_5F_parser_3>", "gtl_module_parser", 268}, // at index 69
 {"<select_gtl_5F_module_5F_parser_4>", "gtl_module_parser", 274}, // at index 70
 {"<select_gtl_5F_module_5F_parser_4>", "gtl_module_parser", 277}, // at index 71
 {"<select_gtl_5F_module_5F_parser_5>", "gtl_module_parser", 278}, // at index 72
 {"<select_gtl_5F_module_5F_parser_5>", "gtl_module_parser", 281}, // at index 73
 {"<select_gtl_5F_module_5F_parser_6>", "gtl_module_parser", 282}, // at index 74
 {"<select_gtl_5F_module_5F_parser_6>", "gtl_module_parser", 286}, // at index 75
 {"<select_gtl_5F_module_5F_parser_7>", "gtl_module_parser", 287}, // at index 76
 {"<select_gtl_5F_module_5F_parser_7>", "gtl_module_parser", 290}, // at index 77
 {"<select_gtl_5F_module_5F_parser_8>", "gtl_module_parser", 291}, // at index 78
 {"<select_gtl_5F_module_5F_parser_8>", "gtl_module_parser", 294}, // at index 79
 {"<select_gtl_5F_module_5F_parser_9>", "gtl_module_parser", 295}, // at index 80
 {"<select_gtl_5F_module_5F_parser_9>", "gtl_module_parser", 298}, // at index 81
 {"<select_gtl_5F_module_5F_parser_10>", "gtl_module_parser", 299}, // at index 82
 {"<select_gtl_5F_module_5F_parser_10>", "gtl_module_parser", 300}, // at index 83
 {"<select_gtl_5F_module_5F_parser_11>", "gtl_module_parser", 304}, // at index 84
 {"<select_gtl_5F_module_5F_parser_11>", "gtl_module_parser", 307}, // at index 85
 {"<select_gtl_5F_module_5F_parser_12>", "gtl_module_parser", 308}, // at index 86
 {"<select_gtl_5F_module_5F_parser_12>", "gtl_module_parser", 309}, // at index 87
 {"<select_gtl_5F_module_5F_parser_12>", "gtl_module_parser", 311}, // at index 88
 {"<select_gtl_5F_module_5F_parser_13>", "gtl_module_parser", 313}, // at index 89
 {"<select_gtl_5F_module_5F_parser_13>", "gtl_module_parser", 316}, // at index 90
 {"<select_gtl_5F_module_5F_parser_14>", "gtl_module_parser", 317}, // at index 91
 {"<select_gtl_5F_module_5F_parser_14>", "gtl_module_parser", 320}, // at index 92
 {"<select_gtl_5F_module_5F_parser_15>", "gtl_module_parser", 321}, // at index 93
 {"<select_gtl_5F_module_5F_parser_15>", "gtl_module_parser", 324}, // at index 94
 {"<select_gtl_5F_module_5F_parser_16>", "gtl_module_parser", 325}, // at index 95
 {"<select_gtl_5F_module_5F_parser_16>", "gtl_module_parser", 328}, // at index 96
 {"<select_gtl_5F_module_5F_parser_17>", "gtl_module_parser", 329}, // at index 97
 {"<select_gtl_5F_module_5F_parser_17>", "gtl_module_parser", 333}, // at index 98
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 334}, // at index 99
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 337}, // at index 100
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
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 368}, // at index 111
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 370}, // at index 112
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 371}, // at index 113
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 376}, // at index 114
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 378}, // at index 115
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 379}, // at index 116
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 384}, // at index 117
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 385}, // at index 118
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 389}, // at index 119
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 390}, // at index 120
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 394}, // at index 121
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 396}, // at index 122
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 398}, // at index 123
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 399}, // at index 124
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 403}, // at index 125
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 407}, // at index 126
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 408}, // at index 127
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 412}, // at index 128
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 413}, // at index 129
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 416}, // at index 130
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 419}, // at index 131
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 422}, // at index 132
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 425}, // at index 133
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 428}, // at index 134
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 431}, // at index 135
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 432}, // at index 136
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 436}, // at index 137
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 440}, // at index 138
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 444}, // at index 139
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 448}, // at index 140
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 452}, // at index 141
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 453}, // at index 142
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 457}, // at index 143
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 461}, // at index 144
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 465}, // at index 145
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 466}, // at index 146
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 470}, // at index 147
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 471}, // at index 148
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 475}, // at index 149
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 476}, // at index 150
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 480}, // at index 151
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 483}, // at index 152
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 484}, // at index 153
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 485}, // at index 154
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 489}, // at index 155
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 494}, // at index 156
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 495}, // at index 157
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 498}, // at index 158
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 500}, // at index 159
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 503}, // at index 160
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 504}, // at index 161
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 505}, // at index 162
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 509}, // at index 163
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 514}, // at index 164
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 515}, // at index 165
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 516}, // at index 166
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 522}, // at index 167
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 527}, // at index 168
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 528}, // at index 169
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 529}, // at index 170
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 535}, // at index 171
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 538}, // at index 172
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 539}, // at index 173
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 540}, // at index 174
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 544}, // at index 175
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 545}, // at index 176
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 550}, // at index 177
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 555}, // at index 178
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 556}, // at index 179
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 561}, // at index 180
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 562}, // at index 181
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 563}, // at index 182
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 568}, // at index 183
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 570}, // at index 184
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 572}, // at index 185
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 576}, // at index 186
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 577}, // at index 187
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 578}, // at index 188
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 583}, // at index 189
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 587}, // at index 190
 {"<>", "", 588} // at index 191
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_gtl_module_grammar [192] = {
0, // index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
3, // index 1 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
7, // index 2 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 95
10, // index 3 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 104
15, // index 4 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 118
20, // index 5 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 132
23, // index 6 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 144
26, // index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 163
29, // index 8 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 175
33, // index 9 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 202
36, // index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 214
38, // index 11 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 222
40, // index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 230
46, // index 13 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 270
49, // index 14 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 716
53, // index 15 : <gtl_instruction_list>, in file 'gtl_module_parser.ggs', line 45
55, // index 16 : <gtl_module_start_symbol>, in file 'gtl_module_parser.ggs', line 73
58, // index 17 : <gtl_function>, in file 'gtl_module_parser.ggs', line 98
66, // index 18 : <gtl_getter>, in file 'gtl_module_parser.ggs', line 117
76, // index 19 : <gtl_setter>, in file 'gtl_module_parser.ggs', line 142
85, // index 20 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 165
94, // index 21 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 198
108, // index 22 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 261
119, // index 23 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 301
135, // index 24 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 361
145, // index 25 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 667
149, // index 26 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 702
151, // index 27 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 257
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
246, // index 59 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
247, // index 60 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
250, // index 61 : <select_gtl_5F_module_5F_parser_0>, in file 'gtl_module_parser.ggs', line 50
253, // index 62 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 77
254, // index 63 : <select_gtl_5F_module_5F_parser_1>, in file 'gtl_module_parser.ggs', line 77
257, // index 64 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
258, // index 65 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
261, // index 66 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
264, // index 67 : <select_gtl_5F_module_5F_parser_2>, in file 'gtl_module_parser.ggs', line 82
267, // index 68 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 172
268, // index 69 : <select_gtl_5F_module_5F_parser_3>, in file 'gtl_module_parser.ggs', line 172
274, // index 70 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 182
277, // index 71 : <select_gtl_5F_module_5F_parser_4>, in file 'gtl_module_parser.ggs', line 182
278, // index 72 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 210
281, // index 73 : <select_gtl_5F_module_5F_parser_5>, in file 'gtl_module_parser.ggs', line 210
282, // index 74 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 216
286, // index 75 : <select_gtl_5F_module_5F_parser_6>, in file 'gtl_module_parser.ggs', line 216
287, // index 76 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 224
290, // index 77 : <select_gtl_5F_module_5F_parser_7>, in file 'gtl_module_parser.ggs', line 224
291, // index 78 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 232
294, // index 79 : <select_gtl_5F_module_5F_parser_8>, in file 'gtl_module_parser.ggs', line 232
295, // index 80 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 237
298, // index 81 : <select_gtl_5F_module_5F_parser_9>, in file 'gtl_module_parser.ggs', line 237
299, // index 82 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 275
300, // index 83 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 275
304, // index 84 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 285
307, // index 85 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 285
308, // index 86 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 318
309, // index 87 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 318
311, // index 88 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 318
313, // index 89 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 326
316, // index 90 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 326
317, // index 91 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 331
320, // index 92 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 331
321, // index 93 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 339
324, // index 94 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 339
325, // index 95 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 344
328, // index 96 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 344
329, // index 97 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 367
333, // index 98 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 367
334, // index 99 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
337, // index 100 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
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
368, // index 111 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 148
370, // index 112 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 148
371, // index 113 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 180
376, // index 114 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 180
378, // index 115 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 183
379, // index 116 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 183
384, // index 117 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 237
385, // index 118 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 237
389, // index 119 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 240
390, // index 120 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 240
394, // index 121 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 260
396, // index 122 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 260
398, // index 123 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
399, // index 124 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
403, // index 125 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
407, // index 126 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
408, // index 127 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
412, // index 128 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
413, // index 129 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
416, // index 130 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
419, // index 131 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
422, // index 132 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
425, // index 133 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
428, // index 134 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
431, // index 135 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
432, // index 136 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
436, // index 137 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
440, // index 138 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
444, // index 139 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
448, // index 140 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
452, // index 141 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
453, // index 142 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
457, // index 143 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
461, // index 144 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
465, // index 145 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
466, // index 146 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
470, // index 147 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
471, // index 148 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
475, // index 149 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
476, // index 150 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
480, // index 151 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
483, // index 152 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
484, // index 153 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
485, // index 154 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
489, // index 155 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
494, // index 156 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
495, // index 157 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
498, // index 158 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
500, // index 159 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
503, // index 160 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
504, // index 161 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
505, // index 162 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
509, // index 163 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
514, // index 164 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
515, // index 165 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
516, // index 166 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
522, // index 167 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
527, // index 168 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
528, // index 169 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
529, // index 170 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
535, // index 171 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
538, // index 172 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
539, // index 173 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
540, // index 174 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
544, // index 175 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
545, // index 176 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
550, // index 177 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
555, // index 178 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
556, // index 179 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
561, // index 180 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
562, // index 181 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
563, // index 182 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
568, // index 183 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
570, // index 184 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
572, // index 185 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
576, // index 186 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
577, // index 187 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
578, // index 188 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
583, // index 189 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
587, // index 190 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
588 // index 191 : <>, in file '.ggs', line 0
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
59, // at 18 : <select_gtl_5F_module_5F_parser_0>
62, // at 19 : <select_gtl_5F_module_5F_parser_1>
64, // at 20 : <select_gtl_5F_module_5F_parser_2>
68, // at 21 : <select_gtl_5F_module_5F_parser_3>
70, // at 22 : <select_gtl_5F_module_5F_parser_4>
72, // at 23 : <select_gtl_5F_module_5F_parser_5>
74, // at 24 : <select_gtl_5F_module_5F_parser_6>
76, // at 25 : <select_gtl_5F_module_5F_parser_7>
78, // at 26 : <select_gtl_5F_module_5F_parser_8>
80, // at 27 : <select_gtl_5F_module_5F_parser_9>
82, // at 28 : <select_gtl_5F_module_5F_parser_10>
84, // at 29 : <select_gtl_5F_module_5F_parser_11>
86, // at 30 : <select_gtl_5F_module_5F_parser_12>
89, // at 31 : <select_gtl_5F_module_5F_parser_13>
91, // at 32 : <select_gtl_5F_module_5F_parser_14>
93, // at 33 : <select_gtl_5F_module_5F_parser_15>
95, // at 34 : <select_gtl_5F_module_5F_parser_16>
97, // at 35 : <select_gtl_5F_module_5F_parser_17>
99, // at 36 : <select_gtl_5F_instruction_5F_parser_0>
111, // at 37 : <select_gtl_5F_instruction_5F_parser_1>
113, // at 38 : <select_gtl_5F_instruction_5F_parser_2>
115, // at 39 : <select_gtl_5F_instruction_5F_parser_3>
117, // at 40 : <select_gtl_5F_instruction_5F_parser_4>
119, // at 41 : <select_gtl_5F_instruction_5F_parser_5>
121, // at 42 : <select_gtl_5F_instruction_5F_parser_6>
123, // at 43 : <select_gtl_5F_expression_5F_parser_0>
126, // at 44 : <select_gtl_5F_expression_5F_parser_1>
128, // at 45 : <select_gtl_5F_expression_5F_parser_2>
135, // at 46 : <select_gtl_5F_expression_5F_parser_3>
141, // at 47 : <select_gtl_5F_expression_5F_parser_4>
145, // at 48 : <select_gtl_5F_expression_5F_parser_5>
147, // at 49 : <select_gtl_5F_expression_5F_parser_6>
149, // at 50 : <select_gtl_5F_expression_5F_parser_7>
151, // at 51 : <select_gtl_5F_expression_5F_parser_8>
153, // at 52 : <select_gtl_5F_expression_5F_parser_9>
155, // at 53 : <select_gtl_5F_expression_5F_parser_10>
157, // at 54 : <select_gtl_5F_expression_5F_parser_11>
159, // at 55 : <select_gtl_5F_expression_5F_parser_12>
161, // at 56 : <select_gtl_5F_expression_5F_parser_13>
163, // at 57 : <select_gtl_5F_expression_5F_parser_14>
165, // at 58 : <select_gtl_5F_expression_5F_parser_15>
167, // at 59 : <select_gtl_5F_expression_5F_parser_16>
169, // at 60 : <select_gtl_5F_expression_5F_parser_17>
171, // at 61 : <select_gtl_5F_expression_5F_parser_18>
173, // at 62 : <select_gtl_5F_expression_5F_parser_19>
175, // at 63 : <select_gtl_5F_expression_5F_parser_20>
177, // at 64 : <select_gtl_5F_expression_5F_parser_21>
179, // at 65 : <select_gtl_5F_expression_5F_parser_22>
181, // at 66 : <select_gtl_5F_expression_5F_parser_23>
183, // at 67 : <select_gtl_5F_expression_5F_parser_24>
185, // at 68 : <select_gtl_5F_expression_5F_parser_25>
187, // at 69 : <select_gtl_5F_expression_5F_parser_26>
189, // at 70 : <select_gtl_5F_expression_5F_parser_27>
191, // at 71 : <>
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
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 106 : <select_gtl_5F_module_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_while, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 3
  -1,
// At index 134 : <select_gtl_5F_module_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_func, C_Lexique_gtl_5F_scanner::kToken_getter, C_Lexique_gtl_5F_scanner::kToken_setter, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_import, -1, // Choice 2
  -1,
// At index 142 : <select_gtl_5F_module_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_func, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_getter, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_setter, -1, // Choice 4
  -1,
// At index 151 : <select_gtl_5F_module_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_elsif, -1, // Choice 2
  -1,
// At index 157 : <select_gtl_5F_module_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 162 : <select_gtl_5F_module_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 168 : <select_gtl_5F_module_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 173 : <select_gtl_5F_module_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 178 : <select_gtl_5F_module_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 184 : <select_gtl_5F_module_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 189 : <select_gtl_5F_module_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 194 : <select_gtl_5F_module_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 199 : <select_gtl_5F_module_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken_to, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_up, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_down, -1, // Choice 3
  -1,
// At index 206 : <select_gtl_5F_module_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken_step, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 212 : <select_gtl_5F_module_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 217 : <select_gtl_5F_module_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 223 : <select_gtl_5F_module_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 228 : <select_gtl_5F_module_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 2
  -1,
// At index 250 : <select_gtl_5F_instruction_5F_parser_0>
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
// At index 298 : <select_gtl_5F_instruction_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 2
  -1,
// At index 352 : <select_gtl_5F_instruction_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 358 : <select_gtl_5F_instruction_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 386 : <select_gtl_5F_instruction_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 391 : <select_gtl_5F_instruction_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 396 : <select_gtl_5F_instruction_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 401 : <select_gtl_5F_expression_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__5E_, -1, // Choice 3
  -1,
// At index 444 : <select_gtl_5F_expression_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 487 : <select_gtl_5F_expression_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3D__3D_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__21__3D_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__3C__3D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__3E__3D_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 7
  -1,
// At index 541 : <select_gtl_5F_expression_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C__3C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__3E__3E_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2B_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2E_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__2D_, -1, // Choice 6
  -1,
// At index 599 : <select_gtl_5F_expression_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__2F_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_mod, -1, // Choice 4
  -1,
// At index 658 : <select_gtl_5F_expression_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 663 : <select_gtl_5F_expression_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 668 : <select_gtl_5F_expression_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 726 : <select_gtl_5F_expression_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 757 : <select_gtl_5F_expression_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 762 : <select_gtl_5F_expression_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_default, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 820 : <select_gtl_5F_expression_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 825 : <select_gtl_5F_expression_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 856 : <select_gtl_5F_expression_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 861 : <select_gtl_5F_expression_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 2
  -1,
// At index 866 : <select_gtl_5F_expression_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 871 : <select_gtl_5F_expression_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 2
  -1,
// At index 876 : <select_gtl_5F_expression_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 881 : <select_gtl_5F_expression_5F_parser_18>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 912 : <select_gtl_5F_expression_5F_parser_19>
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 917 : <select_gtl_5F_expression_5F_parser_20>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 989 : <select_gtl_5F_expression_5F_parser_21>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1062 : <select_gtl_5F_expression_5F_parser_22>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1135 : <select_gtl_5F_expression_5F_parser_23>
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 2
  -1,
// At index 1208 : <select_gtl_5F_expression_5F_parser_24>
C_Lexique_gtl_5F_scanner::kToken_here, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 1213 : <select_gtl_5F_expression_5F_parser_25>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1218 : <select_gtl_5F_expression_5F_parser_26>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1223 : <select_gtl_5F_expression_5F_parser_27>
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1229 : <> only one production, no choice
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
106, // at 18 : <select_gtl_5F_module_5F_parser_0>
134, // at 19 : <select_gtl_5F_module_5F_parser_1>
142, // at 20 : <select_gtl_5F_module_5F_parser_2>
151, // at 21 : <select_gtl_5F_module_5F_parser_3>
157, // at 22 : <select_gtl_5F_module_5F_parser_4>
162, // at 23 : <select_gtl_5F_module_5F_parser_5>
168, // at 24 : <select_gtl_5F_module_5F_parser_6>
173, // at 25 : <select_gtl_5F_module_5F_parser_7>
178, // at 26 : <select_gtl_5F_module_5F_parser_8>
184, // at 27 : <select_gtl_5F_module_5F_parser_9>
189, // at 28 : <select_gtl_5F_module_5F_parser_10>
194, // at 29 : <select_gtl_5F_module_5F_parser_11>
199, // at 30 : <select_gtl_5F_module_5F_parser_12>
206, // at 31 : <select_gtl_5F_module_5F_parser_13>
212, // at 32 : <select_gtl_5F_module_5F_parser_14>
217, // at 33 : <select_gtl_5F_module_5F_parser_15>
223, // at 34 : <select_gtl_5F_module_5F_parser_16>
228, // at 35 : <select_gtl_5F_module_5F_parser_17>
250, // at 36 : <select_gtl_5F_instruction_5F_parser_0>
298, // at 37 : <select_gtl_5F_instruction_5F_parser_1>
352, // at 38 : <select_gtl_5F_instruction_5F_parser_2>
358, // at 39 : <select_gtl_5F_instruction_5F_parser_3>
386, // at 40 : <select_gtl_5F_instruction_5F_parser_4>
391, // at 41 : <select_gtl_5F_instruction_5F_parser_5>
396, // at 42 : <select_gtl_5F_instruction_5F_parser_6>
401, // at 43 : <select_gtl_5F_expression_5F_parser_0>
444, // at 44 : <select_gtl_5F_expression_5F_parser_1>
487, // at 45 : <select_gtl_5F_expression_5F_parser_2>
541, // at 46 : <select_gtl_5F_expression_5F_parser_3>
599, // at 47 : <select_gtl_5F_expression_5F_parser_4>
658, // at 48 : <select_gtl_5F_expression_5F_parser_5>
663, // at 49 : <select_gtl_5F_expression_5F_parser_6>
668, // at 50 : <select_gtl_5F_expression_5F_parser_7>
726, // at 51 : <select_gtl_5F_expression_5F_parser_8>
757, // at 52 : <select_gtl_5F_expression_5F_parser_9>
762, // at 53 : <select_gtl_5F_expression_5F_parser_10>
820, // at 54 : <select_gtl_5F_expression_5F_parser_11>
825, // at 55 : <select_gtl_5F_expression_5F_parser_12>
856, // at 56 : <select_gtl_5F_expression_5F_parser_13>
861, // at 57 : <select_gtl_5F_expression_5F_parser_14>
866, // at 58 : <select_gtl_5F_expression_5F_parser_15>
871, // at 59 : <select_gtl_5F_expression_5F_parser_16>
876, // at 60 : <select_gtl_5F_expression_5F_parser_17>
881, // at 61 : <select_gtl_5F_expression_5F_parser_18>
912, // at 62 : <select_gtl_5F_expression_5F_parser_19>
917, // at 63 : <select_gtl_5F_expression_5F_parser_20>
989, // at 64 : <select_gtl_5F_expression_5F_parser_21>
1062, // at 65 : <select_gtl_5F_expression_5F_parser_22>
1135, // at 66 : <select_gtl_5F_expression_5F_parser_23>
1208, // at 67 : <select_gtl_5F_expression_5F_parser_24>
1213, // at 68 : <select_gtl_5F_expression_5F_parser_25>
1218, // at 69 : <select_gtl_5F_expression_5F_parser_26>
1223, // at 70 : <select_gtl_5F_expression_5F_parser_27>
1229, // at 71 : <>
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
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i34_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i34_(parameter_1, inLexique) ;
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
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_gtl_5F_module_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_gtl_module_grammar, gProductionNames_gtl_module_grammar, gProductionIndexes_gtl_module_grammar,
                                    gFirstProductionIndexes_gtl_module_grammar, gDecision_gtl_module_grammar, gDecisionIndexes_gtl_module_grammar, 588) ;
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
    macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, "", "", filePath COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performTopDownParsing (gProductions_gtl_module_grammar, gProductionNames_gtl_module_grammar, gProductionIndexes_gtl_module_grammar,
                                                      gFirstProductionIndexes_gtl_module_grammar, gDecision_gtl_module_grammar, gDecisionIndexes_gtl_module_grammar, 588) ;
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
                                                    gFirstProductionIndexes_gtl_module_grammar, gDecision_gtl_module_grammar, gDecisionIndexes_gtl_module_grammar, 588) ;
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
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i32_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_ (GALGAS_gtlVarPath & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i32_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_variable_or_here' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i33_parse(inLexique) ;
}

void cGrammar_gtl_5F_module_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & parameter_1,
                                GALGAS_bool & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i33_(parameter_1, parameter_2, inLexique) ;
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
  GALGAS_gtlTemplateInstruction var_rootTemplateInstruction_1166 = GALGAS_gtlTemplateInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_interface.galgas", 39)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 40)), GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_interface.galgas", 42)), inArgument_rootTemplateFileName  COMMA_SOURCE_FILE ("gtl_interface.galgas", 41)), GALGAS_bool (false), GALGAS_bool (true), GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_interface.galgas", 47)), GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_interface.galgas", 48))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 38)) ;
  GALGAS_library var_lib_1551 = function_emptyLib (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 52)) ;
  callExtensionMethod_execute ((const cPtr_gtlTemplateInstruction *) var_rootTemplateInstruction_1166.ptr (), inArgument_context, inArgument_vars, var_lib_1551, result_result, inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 53)) ;
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
                                                          const GALGAS_location & /* §§ inErrorLocation */
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
  result_result = GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_interface.galgas", 67)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 67)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_interface.galgas", 67))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 67)) ;
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
  result_output = GALGAS_gtlString::constructor_new (inArgument_input.getter_location (SOURCE_FILE ("gtl_interface.galgas", 77)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 77)), inArgument_input.getter_string (SOURCE_FILE ("gtl_interface.galgas", 77))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 77)) ;
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
                                                                   const GALGAS_location & /* §§ inErrorLocation */
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
  result_output = GALGAS_gtlString::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_interface.galgas", 87)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 87)), inArgument_input  COMMA_SOURCE_FILE ("gtl_interface.galgas", 87)) ;
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
                                                                  const GALGAS_location & /* §§ inErrorLocation */
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
  result_context = GALGAS_gtlContext::constructor_new (function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 43)), GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString (), GALGAS_string (".gtl"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_types.galgas", 47)), GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_types.galgas", 48))  COMMA_SOURCE_FILE ("gtl_types.galgas", 42)) ;
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
//                                                 Function 'emptyLib'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library function_emptyLib (C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_library result_result ; // Returned variable
  result_result = GALGAS_library::constructor_new (GALGAS_gtlFuncMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 264)), GALGAS_gtlGetterMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 264)), GALGAS_gtlSetterMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 264)), GALGAS_gtlTemplateMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 264)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("gtl_types.galgas", 264))  COMMA_SOURCE_FILE ("gtl_types.galgas", 264)) ;
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
//                                              Routine 'argumentsCheck'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_argumentsCheck (const GALGAS_lstring constinArgument_methodName,
                             GALGAS_gtlTypedArgumentList inArgument_abstractArgumentList,
                             GALGAS_gtlDataList inArgument_concreteArgumentList,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_concreteLength_4711 = inArgument_concreteArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 154)) ;
  GALGAS_uint var_abstractLength_4766 = inArgument_abstractArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 155)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_abstractArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 156)).objectCompare (inArgument_concreteArgumentList.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 156)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 157)), constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 157)).add_operation (GALGAS_string (" expects "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 157)).add_operation (var_abstractLength_4766.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 157)).add_operation (GALGAS_string (" arguments. "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 157)).add_operation (var_concreteLength_4711.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 158)).add_operation (GALGAS_string (" arguments provided."), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 158)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 157)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_gtlDataList enumerator_5069 (inArgument_concreteArgumentList, kEnumeration_up) ;
    cEnumerator_gtlTypedArgumentList enumerator_5097 (inArgument_abstractArgumentList, kEnumeration_up) ;
    GALGAS_uint index_5042 ((uint32_t) 0) ;
    while (enumerator_5069.hasCurrentObject () && enumerator_5097.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_5069.current_data (HERE).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 161)).objectCompare (enumerator_5097.current_type (HERE))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_5097.current_type (HERE).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlData))) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 161)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) enumerator_5069.current_data (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 162)), extensionGetter_typeName (enumerator_5097.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 162)).add_operation (GALGAS_string (" expected for argument "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 162)).add_operation (index_5042.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 164)).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 162)) ;
      }
      enumerator_5069.gotoNextObject () ;
      enumerator_5097.gotoNextObject () ;
      index_5042.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 160)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_data_types.galgas", 172))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 172)) ;
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
  result_result = GALGAS_lstring::constructor_new (inArgument_string, GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_data_types.galgas", 177))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 177)) ;
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
                                                        const GALGAS_location & /* §§ inErrorLocation */
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
//                                                Function 'trueFalse'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_trueFalse (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("true") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("false") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_trueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_trueFalse (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_trueFalse (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_trueFalse ("trueFalse",
                                                           functionWithGenericHeader_trueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_trueFalse) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'TrueFalse'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_TrueFalse (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("True") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("False") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_TrueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_TrueFalse (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_TrueFalse (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_TrueFalse ("TrueFalse",
                                                           functionWithGenericHeader_TrueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TrueFalse) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'yesNo'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_yesNo (const GALGAS_bool & constinArgument_inBool,
                              C_Compiler * /* inCompiler */
                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("YES") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("NO") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_yesNo [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_yesNo (C_Compiler * inCompiler,
                                                      const cObjectArray & inEffectiveParameterArray,
                                                      const GALGAS_location & /* §§ inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_yesNo (operand0,
                         inCompiler
                         COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_yesNo ("yesNo",
                                                       functionWithGenericHeader_yesNo,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       1,
                                                       functionArgs_yesNo) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'TRUEFALSE'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_TRUEFALSE (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("TRUE") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("FALSE") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_TRUEFALSE [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_TRUEFALSE (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_TRUEFALSE (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_TRUEFALSE ("TRUEFALSE",
                                                           functionWithGenericHeader_TRUEFALSE,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TRUEFALSE) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'listOfSize'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list function_listOfSize (GALGAS_bigint inArgument_inSize,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_list result_result ; // Returned variable
  result_result = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_functions.galgas", 84)) ;
  if (inArgument_inSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 85)).isValid ()) {
    uint32_t variant_2589 = inArgument_inSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 85)).uintValue () ;
    bool loop_2589 = true ;
    while (loop_2589) {
      loop_2589 = GALGAS_bool (kIsStrictSup, inArgument_inSize.objectCompare (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 86)))).isValid () ;
      if (loop_2589) {
        loop_2589 = GALGAS_bool (kIsStrictSup, inArgument_inSize.objectCompare (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 86)))).boolValue () ;
      }
      if (loop_2589 && (0 == variant_2589)) {
        loop_2589 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_functions.galgas", 85)) ;
      }
      if (loop_2589) {
        variant_2589 -- ;
        result_result.addAssign_operation (GALGAS_gtlUnconstructed::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 87)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 87))  COMMA_SOURCE_FILE ("gtl_functions.galgas", 87))  COMMA_SOURCE_FILE ("gtl_functions.galgas", 87)) ;
        inArgument_inSize.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 88)) ;
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_listOfSize [2] = {
  & kTypeDescriptor_GALGAS_bigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_listOfSize (C_Compiler * inCompiler,
                                                           const cObjectArray & inEffectiveParameterArray,
                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_bigint operand0 = GALGAS_bigint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_listOfSize (operand0,
                              inCompiler
                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_listOfSize ("listOfSize",
                                                            functionWithGenericHeader_listOfSize,
                                                            & kTypeDescriptor_GALGAS_list,
                                                            1,
                                                            functionArgs_listOfSize) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'version'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_version (C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 97)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_version [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_version (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_version (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_version ("version",
                                                         functionWithGenericHeader_version,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_version) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'majorVersion'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_majorVersion (C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_3236 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 105)) ;
  GALGAS_stringlist var_versionComponents_3304 = var_version_3236.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 106)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_3304.getter_length (SOURCE_FILE ("gtl_functions.galgas", 107)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_versionComponents_3304.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 109)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 109)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 109)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 111)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_majorVersion [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_majorVersion (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_majorVersion (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_majorVersion ("majorVersion",
                                                              functionWithGenericHeader_majorVersion,
                                                              & kTypeDescriptor_GALGAS_bigint,
                                                              0,
                                                              functionArgs_majorVersion) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'minorVersion'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_minorVersion (C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_3764 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 120)) ;
  GALGAS_stringlist var_versionComponents_3832 = var_version_3764.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 121)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_3832.getter_length (SOURCE_FILE ("gtl_functions.galgas", 122)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_versionComponents_3832.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 124)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 124)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 124)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 126)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_minorVersion [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_minorVersion (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_minorVersion (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_minorVersion ("minorVersion",
                                                              functionWithGenericHeader_minorVersion,
                                                              & kTypeDescriptor_GALGAS_bigint,
                                                              0,
                                                              functionArgs_minorVersion) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'revision'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_revision (C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_4283 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 135)) ;
  GALGAS_stringlist var_versionComponents_4351 = var_version_4283.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 136)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_4351.getter_length (SOURCE_FILE ("gtl_functions.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_versionComponents_4351.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 139)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 139)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 139)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 141)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_revision [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_revision (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_revision (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_revision ("revision",
                                                          functionWithGenericHeader_revision,
                                                          & kTypeDescriptor_GALGAS_bigint,
                                                          0,
                                                          functionArgs_revision) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'currentDir'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_currentDir (C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithCurrentDirectory (SOURCE_FILE ("gtl_functions.galgas", 150)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_currentDir [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_currentDir (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_currentDir (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_currentDir ("currentDir",
                                                            functionWithGenericHeader_currentDir,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_currentDir) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'homeDir'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_homeDir (C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("gtl_functions.galgas", 158)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_homeDir [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_homeDir (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_homeDir (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_homeDir ("homeDir",
                                                         functionWithGenericHeader_homeDir,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_homeDir) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'currentDateTime'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_currentDateTime (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithCurrentDateTime (SOURCE_FILE ("gtl_functions.galgas", 166)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_currentDateTime [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_currentDateTime (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_currentDateTime (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_currentDateTime ("currentDateTime",
                                                                 functionWithGenericHeader_currentDateTime,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_currentDateTime) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max8bitsUnsignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_38_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 255U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 174)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_38_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_38_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_max_38_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_38_bitsUnsignedInt ("max8bitsUnsignedInt",
                                                                        functionWithGenericHeader_max_38_bitsUnsignedInt,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_max_38_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max8bitsSignedInt'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_38_bitsSignedInt (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 127U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 182)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_38_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_38_bitsSignedInt (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_max_38_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_38_bitsSignedInt ("max8bitsSignedInt",
                                                                      functionWithGenericHeader_max_38_bitsSignedInt,
                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                      0,
                                                                      functionArgs_max_38_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min8bitsSignedInt'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_38_bitsSignedInt (C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 190)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 190)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_38_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_38_bitsSignedInt (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_min_38_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_38_bitsSignedInt ("min8bitsSignedInt",
                                                                      functionWithGenericHeader_min_38_bitsSignedInt,
                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                      0,
                                                                      functionArgs_min_38_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max16bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_31__36_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 65535U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 198)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_31__36_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_31__36_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_31__36_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_31__36_bitsUnsignedInt ("max16bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_31__36_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_31__36_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max16bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_31__36_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 32767U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 206)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_31__36_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_31__36_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_31__36_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_31__36_bitsSignedInt ("max16bitsSignedInt",
                                                                          functionWithGenericHeader_max_31__36_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_31__36_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min16bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_31__36_bitsSignedInt (C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint ((int32_t) 32768L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 214)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 214)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_31__36_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_31__36_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_31__36_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_31__36_bitsSignedInt ("min16bitsSignedInt",
                                                                          functionWithGenericHeader_min_31__36_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_31__36_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max32bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_33__32_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 222)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 222)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_33__32_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_33__32_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_33__32_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_33__32_bitsUnsignedInt ("max32bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_33__32_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_33__32_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max32bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_33__32_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 230)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 230)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_33__32_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_33__32_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_33__32_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_33__32_bitsSignedInt ("max32bitsSignedInt",
                                                                          functionWithGenericHeader_max_33__32_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_33__32_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min32bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_33__32_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint::constructor_min (SOURCE_FILE ("gtl_functions.galgas", 238)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 238)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_33__32_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_33__32_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_33__32_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_33__32_bitsSignedInt ("min32bitsSignedInt",
                                                                          functionWithGenericHeader_min_33__32_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_33__32_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max64bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_36__34_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 246)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 246)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_36__34_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_36__34_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_36__34_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_36__34_bitsUnsignedInt ("max64bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_36__34_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_36__34_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max64bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_36__34_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint_36__34_::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 254)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 254)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_36__34_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_36__34_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_36__34_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_36__34_bitsSignedInt ("max64bitsSignedInt",
                                                                          functionWithGenericHeader_max_36__34_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_36__34_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min64bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_36__34_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint_36__34_::constructor_min (SOURCE_FILE ("gtl_functions.galgas", 262)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 262)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_36__34_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_36__34_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_36__34_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_36__34_bitsSignedInt ("min64bitsSignedInt",
                                                                          functionWithGenericHeader_min_36__34_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_36__34_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    Function 'pi'                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double function_pi (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  result_result = GALGAS_double::constructor_pi (SOURCE_FILE ("gtl_functions.galgas", 270)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pi [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pi (C_Compiler * inCompiler,
                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                   const GALGAS_location & /* inErrorLocation */
                                                   COMMA_LOCATION_ARGS) {
  return function_pi (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pi ("pi",
                                                    functionWithGenericHeader_pi,
                                                    & kTypeDescriptor_GALGAS_double,
                                                    0,
                                                    functionArgs_pi) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'wantGtlStruct'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData function_wantGtlStruct (GALGAS_gtlData inArgument_inData,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_outData ; // Returned variable
  if (inArgument_inData.isValid ()) {
    if (inArgument_inData.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
      GALGAS_gtlStruct cast_1500_inDataStruct ((cPtr_gtlStruct *) inArgument_inData.ptr ()) ;
      result_outData = cast_1500_inDataStruct ;
    }else{
      result_outData = GALGAS_gtlStruct::constructor_new (callExtensionGetter_location ((const cPtr_gtlData *) inArgument_inData.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 56)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 56)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 56))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 56)) ;
    }
  }
//---
  return result_outData ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_wantGtlStruct [2] = {
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_wantGtlStruct (C_Compiler * inCompiler,
                                                              const cObjectArray & inEffectiveParameterArray,
                                                              const GALGAS_location & /* §§ inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_gtlData operand0 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_wantGtlStruct (operand0,
                                 inCompiler
                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_wantGtlStruct ("wantGtlStruct",
                                                               functionWithGenericHeader_wantGtlStruct,
                                                               & kTypeDescriptor_GALGAS_gtlData,
                                                               1,
                                                               functionArgs_wantGtlStruct) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'wantGtlMap'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData function_wantGtlMap (GALGAS_gtlData inArgument_inData,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_outData ; // Returned variable
  if (inArgument_inData.isValid ()) {
    if (inArgument_inData.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_1793_inDataMap ((cPtr_gtlMap *) inArgument_inData.ptr ()) ;
      result_outData = cast_1793_inDataMap ;
    }else{
      result_outData = GALGAS_gtlMap::constructor_new (callExtensionGetter_location ((const cPtr_gtlData *) inArgument_inData.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 69)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 69)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 69))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 69)) ;
    }
  }
//---
  return result_outData ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_wantGtlMap [2] = {
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_wantGtlMap (C_Compiler * inCompiler,
                                                           const cObjectArray & inEffectiveParameterArray,
                                                           const GALGAS_location & /* §§ inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_gtlData operand0 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_wantGtlMap (operand0,
                              inCompiler
                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_wantGtlMap ("wantGtlMap",
                                                            functionWithGenericHeader_wantGtlMap,
                                                            & kTypeDescriptor_GALGAS_gtlData,
                                                            1,
                                                            functionArgs_wantGtlMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'wantGtlList'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData function_wantGtlList (GALGAS_gtlData inArgument_inData,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_outData ; // Returned variable
  if (inArgument_inData.isValid ()) {
    if (inArgument_inData.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_2083_inDataList ((cPtr_gtlList *) inArgument_inData.ptr ()) ;
      result_outData = cast_2083_inDataList ;
    }else{
      result_outData = GALGAS_gtlList::constructor_new (callExtensionGetter_location ((const cPtr_gtlData *) inArgument_inData.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 82)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 82)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 82))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 82)) ;
    }
  }
//---
  return result_outData ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_wantGtlList [2] = {
  & kTypeDescriptor_GALGAS_gtlData,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_wantGtlList (C_Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GALGAS_location & /* §§ inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_gtlData operand0 = GALGAS_gtlData::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_wantGtlList (operand0,
                               inCompiler
                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_wantGtlList ("wantGtlList",
                                                             functionWithGenericHeader_wantGtlList,
                                                             & kTypeDescriptor_GALGAS_gtlData,
                                                             1,
                                                             functionArgs_wantGtlList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkArgumentError'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkArgumentError (const GALGAS_lstring constinArgument_name,
                                 const GALGAS_type constinArgument_formalType,
                                 const GALGAS_gtlData constinArgument_actualArgument,
                                 const GALGAS_uint constinArgument_argumentNum,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_formalType.objectCompare (callExtensionGetter_embeddedType ((const cPtr_gtlData *) constinArgument_actualArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1192)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1193)), extensionGetter_typeName (constinArgument_formalType, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)).add_operation (GALGAS_string (" expected for argument "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)).add_operation (constinArgument_argumentNum.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1193)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1194)).add_operation (extensionGetter_typeName (constinArgument_actualArgument.getter_dynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1194)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1194)), fixItArray1  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'validateReturnValue'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData function_validateReturnValue (const GALGAS_lstring & constinArgument_functionName,
                                             const GALGAS_object & constinArgument_returnedValue,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  GALGAS_type var_returnedType_36203 = constinArgument_returnedValue.getter_objectDynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1204)) ;
  GALGAS_location var_loc_36255 = constinArgument_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1205)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_returnedType_36203.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bigint))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_gtlInt::constructor_new (var_loc_36255, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1207)), GALGAS_bigint::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1207))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1207)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_returnedType_36203.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_double))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result = GALGAS_gtlFloat::constructor_new (var_loc_36255, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1209)), GALGAS_double::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1209))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1209)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_returnedType_36203.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_string))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result_result = GALGAS_gtlString::constructor_new (var_loc_36255, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1211)), GALGAS_string::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1211))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1211)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_returnedType_36203.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bool))).boolEnum () ;
        if (kBoolTrue == test_6) {
          result_result = GALGAS_gtlBool::constructor_new (var_loc_36255, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1213)), GALGAS_bool::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1213))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1213)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_returnedType_36203.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_list))).boolEnum () ;
          if (kBoolTrue == test_8) {
            result_result = GALGAS_gtlList::constructor_new (var_loc_36255, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1215)), GALGAS_list::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1215))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1215)) ;
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (constinArgument_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1217)), GALGAS_string ("this function does not return a compatible type"), fixItArray10  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1217)) ;
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
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_validateReturnValue [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_object,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_validateReturnValue (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* §§ inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_object operand1 = GALGAS_object::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_validateReturnValue (operand0,
                                       operand1,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_validateReturnValue ("validateReturnValue",
                                                                     functionWithGenericHeader_validateReturnValue,
                                                                     & kTypeDescriptor_GALGAS_gtlData,
                                                                     2,
                                                                     functionArgs_validateReturnValue) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlContext * p = (const cPtr_gtlContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlContext) ;
  if (kOperandEqual == result) {
    result = mAttribute_prefix.objectCompare (p->mAttribute_prefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_path.objectCompare (p->mAttribute_path) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_templateDirectory.objectCompare (p->mAttribute_templateDirectory) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_templateExtension.objectCompare (p->mAttribute_templateExtension) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_importPath.objectCompare (p->mAttribute_importPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_inputVars.objectCompare (p->mAttribute_inputVars) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlContext::objectCompare (const GALGAS_gtlContext & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContext::GALGAS_gtlContext (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContext GALGAS_gtlContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlContext::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_stringlist::constructor_emptyList (HERE),
                                             GALGAS_gtlDataList::constructor_emptyList (HERE)
                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContext::GALGAS_gtlContext (const cPtr_gtlContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContext GALGAS_gtlContext::constructor_new (const GALGAS_lstring & inAttribute_prefix,
                                                      const GALGAS_string & inAttribute_path,
                                                      const GALGAS_string & inAttribute_templateDirectory,
                                                      const GALGAS_string & inAttribute_templateExtension,
                                                      const GALGAS_stringlist & inAttribute_importPath,
                                                      const GALGAS_gtlDataList & inAttribute_inputVars
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlContext result ;
  if (inAttribute_prefix.isValid () && inAttribute_path.isValid () && inAttribute_templateDirectory.isValid () && inAttribute_templateExtension.isValid () && inAttribute_importPath.isValid () && inAttribute_inputVars.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlContext (inAttribute_prefix, inAttribute_path, inAttribute_templateDirectory, inAttribute_templateExtension, inAttribute_importPath, inAttribute_inputVars COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlContext::getter_prefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_prefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlContext::getter_prefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_prefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlContext::getter_path (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_path ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlContext::getter_path (UNUSED_LOCATION_ARGS) const {
  return mAttribute_path ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlContext::getter_templateDirectory (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_templateDirectory ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlContext::getter_templateDirectory (UNUSED_LOCATION_ARGS) const {
  return mAttribute_templateDirectory ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlContext::getter_templateExtension (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_templateExtension ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlContext::getter_templateExtension (UNUSED_LOCATION_ARGS) const {
  return mAttribute_templateExtension ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_gtlContext::getter_importPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_importPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_gtlContext::getter_importPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_importPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList GALGAS_gtlContext::getter_inputVars (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlDataList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_inputVars ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList cPtr_gtlContext::getter_inputVars (UNUSED_LOCATION_ARGS) const {
  return mAttribute_inputVars ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlContext::setter_setPrefix (GALGAS_lstring inValue
                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mAttribute_prefix = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlContext::setter_setPrefix (GALGAS_lstring inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_prefix = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlContext::setter_setPath (GALGAS_string inValue
                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mAttribute_path = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlContext::setter_setPath (GALGAS_string inValue
                                      COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_path = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlContext::setter_setTemplateDirectory (GALGAS_string inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mAttribute_templateDirectory = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlContext::setter_setTemplateDirectory (GALGAS_string inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_templateDirectory = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlContext::setter_setTemplateExtension (GALGAS_string inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mAttribute_templateExtension = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlContext::setter_setTemplateExtension (GALGAS_string inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_templateExtension = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlContext::setter_setInputVars (GALGAS_gtlDataList inValue
                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mAttribute_inputVars = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlContext::setter_setInputVars (GALGAS_gtlDataList inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_inputVars = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @gtlContext class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlContext::cPtr_gtlContext (const GALGAS_lstring & in_prefix,
                                  const GALGAS_string & in_path,
                                  const GALGAS_string & in_templateDirectory,
                                  const GALGAS_string & in_templateExtension,
                                  const GALGAS_stringlist & in_importPath,
                                  const GALGAS_gtlDataList & in_inputVars
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_prefix (in_prefix),
mAttribute_path (in_path),
mAttribute_templateDirectory (in_templateDirectory),
mAttribute_templateExtension (in_templateExtension),
mAttribute_importPath (in_importPath),
mAttribute_inputVars (in_inputVars) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContext ;
}

void cPtr_gtlContext::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "[@gtlContext:" ;
  mAttribute_prefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_path.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_templateDirectory.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_templateExtension.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_importPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_inputVars.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlContext (mAttribute_prefix, mAttribute_path, mAttribute_templateDirectory, mAttribute_templateExtension, mAttribute_importPath, mAttribute_inputVars COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @gtlContext type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlContext ("gtlContext",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContext GALGAS_gtlContext::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlContext result ;
  const GALGAS_gtlContext * p = (const GALGAS_gtlContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_gtlData::objectCompare (const GALGAS_gtlData & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData::GALGAS_gtlData (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData::GALGAS_gtlData (const cPtr_gtlData * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlData) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_gtlData::getter_where (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlData * p = (const cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    result = p->mAttribute_where ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_gtlData::getter_where (UNUSED_LOCATION_ARGS) const {
  return mAttribute_where ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlData::getter_meta (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlData * p = (const cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    result = p->mAttribute_meta ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlData::getter_meta (UNUSED_LOCATION_ARGS) const {
  return mAttribute_meta ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlData::setter_setWhere (GALGAS_location inValue
                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlData * p = (cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    p->mAttribute_where = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlData::setter_setWhere (GALGAS_location inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_where = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlData::setter_setMeta (GALGAS_lstring inValue
                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlData * p = (cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    p->mAttribute_meta = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlData::setter_setMeta (GALGAS_lstring inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_meta = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlData class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlData::cPtr_gtlData (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_where (in_where),
mAttribute_meta (in_meta) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlData type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlData ("gtlData",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlData::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlData ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlData::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlData (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlData::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  const GALGAS_gtlData * p = (const GALGAS_gtlData *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlData *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlData", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlBool::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBool * p = (const cPtr_gtlBool *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBool) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlBool::objectCompare (const GALGAS_gtlBool & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBool::GALGAS_gtlBool (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBool GALGAS_gtlBool::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_bool::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBool::GALGAS_gtlBool (const cPtr_gtlBool * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBool GALGAS_gtlBool::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_bool & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlBool result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBool (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_gtlBool::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBool * p = (const cPtr_gtlBool *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBool) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_gtlBool::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlBool class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBool::cPtr_gtlBool (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_bool & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlBool::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBool ;
}

void cPtr_gtlBool::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlBool:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlBool::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlBool (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlBool type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBool ("gtlBool",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBool ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBool::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBool (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBool GALGAS_gtlBool::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlBool result ;
  const GALGAS_gtlBool * p = (const GALGAS_gtlBool *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlChar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlChar * p = (const cPtr_gtlChar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlChar) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlChar::objectCompare (const GALGAS_gtlChar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar::GALGAS_gtlChar (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar GALGAS_gtlChar::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlChar::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_char::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar::GALGAS_gtlChar (const cPtr_gtlChar * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlChar) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar GALGAS_gtlChar::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_char & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlChar result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlChar (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_gtlChar::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_char result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlChar * p = (const cPtr_gtlChar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlChar) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cPtr_gtlChar::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlChar::setter_setValue (GALGAS_char inValue
                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlChar * p = (cPtr_gtlChar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlChar) ;
    p->mAttribute_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlChar::setter_setValue (GALGAS_char inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlChar class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlChar::cPtr_gtlChar (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_char & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlChar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlChar ;
}

void cPtr_gtlChar::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlChar:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlChar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlChar (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlChar type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlChar ("gtlChar",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlChar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlChar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlChar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar GALGAS_gtlChar::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlChar result ;
  const GALGAS_gtlChar * p = (const GALGAS_gtlChar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlChar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlChar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlEnum::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlEnum * p = (const cPtr_gtlEnum *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlEnum) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlEnum::objectCompare (const GALGAS_gtlEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum::GALGAS_gtlEnum (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum GALGAS_gtlEnum::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlEnum::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum::GALGAS_gtlEnum (const cPtr_gtlEnum * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum GALGAS_gtlEnum::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_string & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlEnum result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlEnum (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlEnum::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlEnum * p = (const cPtr_gtlEnum *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlEnum) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlEnum::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlEnum class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlEnum::cPtr_gtlEnum (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_string & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlEnum::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEnum ;
}

void cPtr_gtlEnum::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlEnum:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlEnum::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlEnum (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlEnum type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlEnum ("gtlEnum",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum GALGAS_gtlEnum::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlEnum result ;
  const GALGAS_gtlEnum * p = (const GALGAS_gtlEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlFloat::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlFloat * p = (const cPtr_gtlFloat *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlFloat) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlFloat::objectCompare (const GALGAS_gtlFloat & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFloat::GALGAS_gtlFloat (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFloat GALGAS_gtlFloat::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlFloat::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_double::constructor_default (HERE)
                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFloat::GALGAS_gtlFloat (const cPtr_gtlFloat * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlFloat) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFloat GALGAS_gtlFloat::constructor_new (const GALGAS_location & inAttribute_where,
                                                  const GALGAS_lstring & inAttribute_meta,
                                                  const GALGAS_double & inAttribute_value
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlFloat result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlFloat (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_gtlFloat::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlFloat * p = (const cPtr_gtlFloat *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlFloat) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double cPtr_gtlFloat::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlFloat class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlFloat::cPtr_gtlFloat (const GALGAS_location & in_where,
                              const GALGAS_lstring & in_meta,
                              const GALGAS_double & in_value
                              COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlFloat::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFloat ;
}

void cPtr_gtlFloat::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@gtlFloat:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlFloat::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlFloat (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @gtlFloat type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFloat ("gtlFloat",
                                 & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlFloat::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFloat ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlFloat::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFloat (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFloat GALGAS_gtlFloat::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlFloat result ;
  const GALGAS_gtlFloat * p = (const GALGAS_gtlFloat *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlFloat *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlFloat", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlInt::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlInt * p = (const cPtr_gtlInt *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlInt) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlInt::objectCompare (const GALGAS_gtlInt & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt::GALGAS_gtlInt (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt GALGAS_gtlInt::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_bigint::constructor_zero (HERE)
                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt::GALGAS_gtlInt (const cPtr_gtlInt * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlInt) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt GALGAS_gtlInt::constructor_new (const GALGAS_location & inAttribute_where,
                                              const GALGAS_lstring & inAttribute_meta,
                                              const GALGAS_bigint & inAttribute_value
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlInt result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlInt (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_gtlInt::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlInt * p = (const cPtr_gtlInt *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlInt) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_gtlInt::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInt::setter_setValue (GALGAS_bigint inValue
                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlInt * p = (cPtr_gtlInt *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlInt) ;
    p->mAttribute_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlInt::setter_setValue (GALGAS_bigint inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @gtlInt class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlInt::cPtr_gtlInt (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_bigint & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlInt::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInt ;
}

void cPtr_gtlInt::description (C_String & ioString,
                               const int32_t inIndentation) const {
  ioString << "[@gtlInt:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlInt::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlInt (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlInt type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInt ("gtlInt",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInt::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInt ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInt::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInt (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt GALGAS_gtlInt::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlInt result ;
  const GALGAS_gtlInt * p = (const GALGAS_gtlInt *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInt *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInt", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlList::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlList * p = (const cPtr_gtlList *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlList) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlList::objectCompare (const GALGAS_gtlList & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlList::GALGAS_gtlList (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlList GALGAS_gtlList::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlList::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_list::constructor_emptyList (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlList::GALGAS_gtlList (const cPtr_gtlList * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlList GALGAS_gtlList::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_list & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlList result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlList (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list GALGAS_gtlList::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_list result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlList * p = (const cPtr_gtlList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlList) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list cPtr_gtlList::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlList class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlList::cPtr_gtlList (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_list & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlList::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlList ;
}

void cPtr_gtlList::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlList:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlList::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlList (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlList ("gtlList",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlList GALGAS_gtlList::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlList result ;
  const GALGAS_gtlList * p = (const GALGAS_gtlList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlMap::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlMap * p = (const cPtr_gtlMap *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlMap) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlMap::objectCompare (const GALGAS_gtlMap & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMap::GALGAS_gtlMap (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMap GALGAS_gtlMap::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlMap::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_gtlVarMap::constructor_emptyMap (HERE)
                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMap::GALGAS_gtlMap (const cPtr_gtlMap * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMap GALGAS_gtlMap::constructor_new (const GALGAS_location & inAttribute_where,
                                              const GALGAS_lstring & inAttribute_meta,
                                              const GALGAS_gtlVarMap & inAttribute_value
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlMap result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlMap (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap GALGAS_gtlMap::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlMap * p = (const cPtr_gtlMap *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlMap) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap cPtr_gtlMap::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlMap::setter_setValue (GALGAS_gtlVarMap inValue
                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlMap * p = (cPtr_gtlMap *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlMap) ;
    p->mAttribute_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlMap::setter_setValue (GALGAS_gtlVarMap inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @gtlMap class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlMap::cPtr_gtlMap (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_gtlVarMap & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlMap::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMap ;
}

void cPtr_gtlMap::description (C_String & ioString,
                               const int32_t inIndentation) const {
  ioString << "[@gtlMap:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlMap::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlMap (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlMap type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlMap ("gtlMap",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMap GALGAS_gtlMap::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlMap result ;
  const GALGAS_gtlMap * p = (const GALGAS_gtlMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlSet::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlSet * p = (const cPtr_gtlSet *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlSet) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlSet::objectCompare (const GALGAS_gtlSet & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSet::GALGAS_gtlSet (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSet GALGAS_gtlSet::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlSet::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_stringset::constructor_emptySet (HERE)
                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSet::GALGAS_gtlSet (const cPtr_gtlSet * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSet GALGAS_gtlSet::constructor_new (const GALGAS_location & inAttribute_where,
                                              const GALGAS_lstring & inAttribute_meta,
                                              const GALGAS_stringset & inAttribute_value
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlSet result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlSet (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_gtlSet::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlSet * p = (const cPtr_gtlSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSet) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cPtr_gtlSet::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlSet::setter_setValue (GALGAS_stringset inValue
                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlSet * p = (cPtr_gtlSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSet) ;
    p->mAttribute_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlSet::setter_setValue (GALGAS_stringset inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @gtlSet class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlSet::cPtr_gtlSet (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_stringset & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlSet::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSet ;
}

void cPtr_gtlSet::description (C_String & ioString,
                               const int32_t inIndentation) const {
  ioString << "[@gtlSet:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlSet::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlSet (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlSet type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSet ("gtlSet",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSet::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSet (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSet GALGAS_gtlSet::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlSet result ;
  const GALGAS_gtlSet * p = (const GALGAS_gtlSet *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlString::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlString * p = (const cPtr_gtlString *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlString) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlString::objectCompare (const GALGAS_gtlString & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString::GALGAS_gtlString (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString GALGAS_gtlString::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlString::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString::GALGAS_gtlString (const cPtr_gtlString * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString GALGAS_gtlString::constructor_new (const GALGAS_location & inAttribute_where,
                                                    const GALGAS_lstring & inAttribute_meta,
                                                    const GALGAS_string & inAttribute_value
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlString result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlString (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlString::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlString * p = (const cPtr_gtlString *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlString) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlString::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @gtlString class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlString::cPtr_gtlString (const GALGAS_location & in_where,
                                const GALGAS_lstring & in_meta,
                                const GALGAS_string & in_value
                                COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlString::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlString ;
}

void cPtr_gtlString::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@gtlString:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlString::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlString (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @gtlString type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlString ("gtlString",
                                  & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlString::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlString ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlString::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlString (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlString GALGAS_gtlString::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlString result ;
  const GALGAS_gtlString * p = (const GALGAS_gtlString *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlString *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlString", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlStruct::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlStruct * p = (const cPtr_gtlStruct *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlStruct) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlStruct::objectCompare (const GALGAS_gtlStruct & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct::GALGAS_gtlStruct (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct GALGAS_gtlStruct::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_gtlVarMap::constructor_emptyMap (HERE)
                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct::GALGAS_gtlStruct (const cPtr_gtlStruct * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlStruct) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct GALGAS_gtlStruct::constructor_new (const GALGAS_location & inAttribute_where,
                                                    const GALGAS_lstring & inAttribute_meta,
                                                    const GALGAS_gtlVarMap & inAttribute_value
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlStruct (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap GALGAS_gtlStruct::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlStruct * p = (const cPtr_gtlStruct *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlStruct) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap cPtr_gtlStruct::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlStruct::setter_setValue (GALGAS_gtlVarMap inValue
                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlStruct * p = (cPtr_gtlStruct *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlStruct) ;
    p->mAttribute_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlStruct::setter_setValue (GALGAS_gtlVarMap inValue
                                      COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @gtlStruct class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlStruct::cPtr_gtlStruct (const GALGAS_location & in_where,
                                const GALGAS_lstring & in_meta,
                                const GALGAS_gtlVarMap & in_value
                                COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlStruct::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStruct ;
}

void cPtr_gtlStruct::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@gtlStruct:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlStruct::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlStruct (mAttribute_where, mAttribute_meta, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @gtlStruct type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlStruct ("gtlStruct",
                                  & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct GALGAS_gtlStruct::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
  const GALGAS_gtlStruct * p = (const GALGAS_gtlStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlType * p = (const cPtr_gtlType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlType) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_type.objectCompare (p->mAttribute_type) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlType::objectCompare (const GALGAS_gtlType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType::GALGAS_gtlType (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType::GALGAS_gtlType (const cPtr_gtlType * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType GALGAS_gtlType::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_type & inAttribute_type
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlType result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_type.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlType (inAttribute_where, inAttribute_meta, inAttribute_type COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlType::getter_type (UNUSED_LOCATION_ARGS) const {
  GALGAS_type result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlType * p = (const cPtr_gtlType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlType) ;
    result = p->mAttribute_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type cPtr_gtlType::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlType class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlType::cPtr_gtlType (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_type & in_type
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mAttribute_type (in_type) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlType ;
}

void cPtr_gtlType::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlType:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_type.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlType (mAttribute_where, mAttribute_meta, mAttribute_type COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlType ("gtlType",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType GALGAS_gtlType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlType result ;
  const GALGAS_gtlType * p = (const GALGAS_gtlType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlUnconstructed::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlUnconstructed * p = (const cPtr_gtlUnconstructed *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlUnconstructed) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_meta.objectCompare (p->mAttribute_meta) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlUnconstructed::objectCompare (const GALGAS_gtlUnconstructed & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed::GALGAS_gtlUnconstructed (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlUnconstructed::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed::GALGAS_gtlUnconstructed (const cPtr_gtlUnconstructed * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlUnconstructed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_lstring & inAttribute_meta
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlUnconstructed result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlUnconstructed (inAttribute_where, inAttribute_meta COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlUnconstructed class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlUnconstructed::cPtr_gtlUnconstructed (const GALGAS_location & in_where,
                                              const GALGAS_lstring & in_meta
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlUnconstructed::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlUnconstructed ;
}

void cPtr_gtlUnconstructed::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@gtlUnconstructed:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_meta.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlUnconstructed::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlUnconstructed (mAttribute_where, mAttribute_meta COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlUnconstructed type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlUnconstructed ("gtlUnconstructed",
                                         & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlUnconstructed::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlUnconstructed ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlUnconstructed::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlUnconstructed (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlUnconstructed result ;
  const GALGAS_gtlUnconstructed * p = (const GALGAS_gtlUnconstructed *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlUnconstructed *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlUnconstructed", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlExecutableEntity::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlExecutableEntity * p = (const cPtr_gtlExecutableEntity *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlExecutableEntity) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_formalArguments.objectCompare (p->mAttribute_formalArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructions.objectCompare (p->mAttribute_instructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlExecutableEntity::objectCompare (const GALGAS_gtlExecutableEntity & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExecutableEntity::GALGAS_gtlExecutableEntity (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExecutableEntity GALGAS_gtlExecutableEntity::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlExecutableEntity::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_gtlArgumentList::constructor_emptyList (HERE),
                                                      GALGAS_gtlInstructionList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExecutableEntity::GALGAS_gtlExecutableEntity (const cPtr_gtlExecutableEntity * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExecutableEntity) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExecutableEntity GALGAS_gtlExecutableEntity::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_lstring & inAttribute_name,
                                                                        const GALGAS_gtlArgumentList & inAttribute_formalArguments,
                                                                        const GALGAS_gtlInstructionList & inAttribute_instructions
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlExecutableEntity result ;
  if (inAttribute_where.isValid () && inAttribute_name.isValid () && inAttribute_formalArguments.isValid () && inAttribute_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlExecutableEntity (inAttribute_where, inAttribute_name, inAttribute_formalArguments, inAttribute_instructions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_gtlExecutableEntity::getter_where (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExecutableEntity * p = (const cPtr_gtlExecutableEntity *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExecutableEntity) ;
    result = p->mAttribute_where ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_gtlExecutableEntity::getter_where (UNUSED_LOCATION_ARGS) const {
  return mAttribute_where ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlExecutableEntity::getter_name (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExecutableEntity * p = (const cPtr_gtlExecutableEntity *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExecutableEntity) ;
    result = p->mAttribute_name ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlExecutableEntity::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList GALGAS_gtlExecutableEntity::getter_formalArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlArgumentList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExecutableEntity * p = (const cPtr_gtlExecutableEntity *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExecutableEntity) ;
    result = p->mAttribute_formalArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList cPtr_gtlExecutableEntity::getter_formalArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_formalArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlExecutableEntity::getter_instructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExecutableEntity * p = (const cPtr_gtlExecutableEntity *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExecutableEntity) ;
    result = p->mAttribute_instructions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlExecutableEntity::getter_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instructions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlExecutableEntity class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlExecutableEntity::cPtr_gtlExecutableEntity (const GALGAS_location & in_where,
                                                    const GALGAS_lstring & in_name,
                                                    const GALGAS_gtlArgumentList & in_formalArguments,
                                                    const GALGAS_gtlInstructionList & in_instructions
                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_where (in_where),
mAttribute_name (in_name),
mAttribute_formalArguments (in_formalArguments),
mAttribute_instructions (in_instructions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlExecutableEntity::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExecutableEntity ;
}

void cPtr_gtlExecutableEntity::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlExecutableEntity:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_formalArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlExecutableEntity::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlExecutableEntity (mAttribute_where, mAttribute_name, mAttribute_formalArguments, mAttribute_instructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlExecutableEntity type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExecutableEntity ("gtlExecutableEntity",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExecutableEntity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExecutableEntity ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExecutableEntity::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExecutableEntity (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExecutableEntity GALGAS_gtlExecutableEntity::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlExecutableEntity result ;
  const GALGAS_gtlExecutableEntity * p = (const GALGAS_gtlExecutableEntity *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExecutableEntity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExecutableEntity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlFunction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlFunction * p = (const cPtr_gtlFunction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlFunction) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_formalArguments.objectCompare (p->mAttribute_formalArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructions.objectCompare (p->mAttribute_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_returnVariable.objectCompare (p->mAttribute_returnVariable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlFunction::objectCompare (const GALGAS_gtlFunction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction::GALGAS_gtlFunction (void) :
GALGAS_gtlExecutableEntity () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction GALGAS_gtlFunction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlFunction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                              GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_gtlArgumentList::constructor_emptyList (HERE),
                                              GALGAS_gtlInstructionList::constructor_emptyList (HERE),
                                              GALGAS_lstring::constructor_default (HERE)
                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction::GALGAS_gtlFunction (const cPtr_gtlFunction * inSourcePtr) :
GALGAS_gtlExecutableEntity (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction GALGAS_gtlFunction::constructor_new (const GALGAS_location & inAttribute_where,
                                                        const GALGAS_lstring & inAttribute_name,
                                                        const GALGAS_gtlArgumentList & inAttribute_formalArguments,
                                                        const GALGAS_gtlInstructionList & inAttribute_instructions,
                                                        const GALGAS_lstring & inAttribute_returnVariable
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunction result ;
  if (inAttribute_where.isValid () && inAttribute_name.isValid () && inAttribute_formalArguments.isValid () && inAttribute_instructions.isValid () && inAttribute_returnVariable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlFunction (inAttribute_where, inAttribute_name, inAttribute_formalArguments, inAttribute_instructions, inAttribute_returnVariable COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlFunction::getter_returnVariable (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlFunction * p = (const cPtr_gtlFunction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlFunction) ;
    result = p->mAttribute_returnVariable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlFunction::getter_returnVariable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_returnVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @gtlFunction class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlFunction::cPtr_gtlFunction (const GALGAS_location & in_where,
                                    const GALGAS_lstring & in_name,
                                    const GALGAS_gtlArgumentList & in_formalArguments,
                                    const GALGAS_gtlInstructionList & in_instructions,
                                    const GALGAS_lstring & in_returnVariable
                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExecutableEntity (in_where, in_name, in_formalArguments, in_instructions COMMA_THERE),
mAttribute_returnVariable (in_returnVariable) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlFunction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFunction ;
}

void cPtr_gtlFunction::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@gtlFunction:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_formalArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_returnVariable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlFunction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlFunction (mAttribute_where, mAttribute_name, mAttribute_formalArguments, mAttribute_instructions, mAttribute_returnVariable COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @gtlFunction type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFunction ("gtlFunction",
                                    & kTypeDescriptor_GALGAS_gtlExecutableEntity) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlFunction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlFunction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFunction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction GALGAS_gtlFunction::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunction result ;
  const GALGAS_gtlFunction * p = (const GALGAS_gtlFunction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlFunction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlFunction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlGetter::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlGetter * p = (const cPtr_gtlGetter *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlGetter) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_formalArguments.objectCompare (p->mAttribute_formalArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructions.objectCompare (p->mAttribute_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_returnVariable.objectCompare (p->mAttribute_returnVariable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_targetType.objectCompare (p->mAttribute_targetType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlGetter::objectCompare (const GALGAS_gtlGetter & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter::GALGAS_gtlGetter (void) :
GALGAS_gtlFunction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter::GALGAS_gtlGetter (const cPtr_gtlGetter * inSourcePtr) :
GALGAS_gtlFunction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter GALGAS_gtlGetter::constructor_new (const GALGAS_location & inAttribute_where,
                                                    const GALGAS_lstring & inAttribute_name,
                                                    const GALGAS_gtlArgumentList & inAttribute_formalArguments,
                                                    const GALGAS_gtlInstructionList & inAttribute_instructions,
                                                    const GALGAS_lstring & inAttribute_returnVariable,
                                                    const GALGAS_type & inAttribute_targetType
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetter result ;
  if (inAttribute_where.isValid () && inAttribute_name.isValid () && inAttribute_formalArguments.isValid () && inAttribute_instructions.isValid () && inAttribute_returnVariable.isValid () && inAttribute_targetType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlGetter (inAttribute_where, inAttribute_name, inAttribute_formalArguments, inAttribute_instructions, inAttribute_returnVariable, inAttribute_targetType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlGetter::getter_targetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_type result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlGetter * p = (const cPtr_gtlGetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlGetter) ;
    result = p->mAttribute_targetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type cPtr_gtlGetter::getter_targetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_targetType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @gtlGetter class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlGetter::cPtr_gtlGetter (const GALGAS_location & in_where,
                                const GALGAS_lstring & in_name,
                                const GALGAS_gtlArgumentList & in_formalArguments,
                                const GALGAS_gtlInstructionList & in_instructions,
                                const GALGAS_lstring & in_returnVariable,
                                const GALGAS_type & in_targetType
                                COMMA_LOCATION_ARGS) :
cPtr_gtlFunction (in_where, in_name, in_formalArguments, in_instructions, in_returnVariable COMMA_THERE),
mAttribute_targetType (in_targetType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlGetter::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetter ;
}

void cPtr_gtlGetter::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@gtlGetter:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_formalArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_returnVariable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_targetType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlGetter::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlGetter (mAttribute_where, mAttribute_name, mAttribute_formalArguments, mAttribute_instructions, mAttribute_returnVariable, mAttribute_targetType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @gtlGetter type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGetter ("gtlGetter",
                                  & kTypeDescriptor_GALGAS_gtlFunction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlGetter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlGetter::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGetter (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter GALGAS_gtlGetter::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetter result ;
  const GALGAS_gtlGetter * p = (const GALGAS_gtlGetter *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlGetter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlGetter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlProcedure::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlProcedure * p = (const cPtr_gtlProcedure *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlProcedure) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_formalArguments.objectCompare (p->mAttribute_formalArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructions.objectCompare (p->mAttribute_instructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlProcedure::objectCompare (const GALGAS_gtlProcedure & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure::GALGAS_gtlProcedure (void) :
GALGAS_gtlExecutableEntity () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure GALGAS_gtlProcedure::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlProcedure::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_gtlArgumentList::constructor_emptyList (HERE),
                                               GALGAS_gtlInstructionList::constructor_emptyList (HERE)
                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure::GALGAS_gtlProcedure (const cPtr_gtlProcedure * inSourcePtr) :
GALGAS_gtlExecutableEntity (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlProcedure) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure GALGAS_gtlProcedure::constructor_new (const GALGAS_location & inAttribute_where,
                                                          const GALGAS_lstring & inAttribute_name,
                                                          const GALGAS_gtlArgumentList & inAttribute_formalArguments,
                                                          const GALGAS_gtlInstructionList & inAttribute_instructions
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlProcedure result ;
  if (inAttribute_where.isValid () && inAttribute_name.isValid () && inAttribute_formalArguments.isValid () && inAttribute_instructions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlProcedure (inAttribute_where, inAttribute_name, inAttribute_formalArguments, inAttribute_instructions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @gtlProcedure class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlProcedure::cPtr_gtlProcedure (const GALGAS_location & in_where,
                                      const GALGAS_lstring & in_name,
                                      const GALGAS_gtlArgumentList & in_formalArguments,
                                      const GALGAS_gtlInstructionList & in_instructions
                                      COMMA_LOCATION_ARGS) :
cPtr_gtlExecutableEntity (in_where, in_name, in_formalArguments, in_instructions COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlProcedure::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlProcedure ;
}

void cPtr_gtlProcedure::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@gtlProcedure:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_formalArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlProcedure::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlProcedure (mAttribute_where, mAttribute_name, mAttribute_formalArguments, mAttribute_instructions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @gtlProcedure type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlProcedure ("gtlProcedure",
                                     & kTypeDescriptor_GALGAS_gtlExecutableEntity) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlProcedure::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlProcedure ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlProcedure::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlProcedure (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure GALGAS_gtlProcedure::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlProcedure result ;
  const GALGAS_gtlProcedure * p = (const GALGAS_gtlProcedure *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlProcedure *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlProcedure", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlSetter::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlSetter * p = (const cPtr_gtlSetter *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlSetter) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_name.objectCompare (p->mAttribute_name) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_formalArguments.objectCompare (p->mAttribute_formalArguments) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructions.objectCompare (p->mAttribute_instructions) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_targetType.objectCompare (p->mAttribute_targetType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlSetter::objectCompare (const GALGAS_gtlSetter & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter::GALGAS_gtlSetter (void) :
GALGAS_gtlExecutableEntity () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter::GALGAS_gtlSetter (const cPtr_gtlSetter * inSourcePtr) :
GALGAS_gtlExecutableEntity (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter GALGAS_gtlSetter::constructor_new (const GALGAS_location & inAttribute_where,
                                                    const GALGAS_lstring & inAttribute_name,
                                                    const GALGAS_gtlArgumentList & inAttribute_formalArguments,
                                                    const GALGAS_gtlInstructionList & inAttribute_instructions,
                                                    const GALGAS_type & inAttribute_targetType
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetter result ;
  if (inAttribute_where.isValid () && inAttribute_name.isValid () && inAttribute_formalArguments.isValid () && inAttribute_instructions.isValid () && inAttribute_targetType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlSetter (inAttribute_where, inAttribute_name, inAttribute_formalArguments, inAttribute_instructions, inAttribute_targetType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlSetter::getter_targetType (UNUSED_LOCATION_ARGS) const {
  GALGAS_type result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlSetter * p = (const cPtr_gtlSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSetter) ;
    result = p->mAttribute_targetType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type cPtr_gtlSetter::getter_targetType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_targetType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @gtlSetter class                                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlSetter::cPtr_gtlSetter (const GALGAS_location & in_where,
                                const GALGAS_lstring & in_name,
                                const GALGAS_gtlArgumentList & in_formalArguments,
                                const GALGAS_gtlInstructionList & in_instructions,
                                const GALGAS_type & in_targetType
                                COMMA_LOCATION_ARGS) :
cPtr_gtlExecutableEntity (in_where, in_name, in_formalArguments, in_instructions COMMA_THERE),
mAttribute_targetType (in_targetType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlSetter::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetter ;
}

void cPtr_gtlSetter::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@gtlSetter:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_name.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_formalArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_targetType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlSetter::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlSetter (mAttribute_where, mAttribute_name, mAttribute_formalArguments, mAttribute_instructions, mAttribute_targetType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @gtlSetter type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSetter ("gtlSetter",
                                  & kTypeDescriptor_GALGAS_gtlExecutableEntity) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSetter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetter ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSetter::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSetter (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter GALGAS_gtlSetter::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetter result ;
  const GALGAS_gtlSetter * p = (const GALGAS_gtlSetter *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSetter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSetter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_gtlExpression::objectCompare (const GALGAS_gtlExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression::GALGAS_gtlExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression::GALGAS_gtlExpression (const cPtr_gtlExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_gtlExpression::getter_where (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExpression * p = (const cPtr_gtlExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExpression) ;
    result = p->mAttribute_where ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_gtlExpression::getter_where (UNUSED_LOCATION_ARGS) const {
  return mAttribute_where ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @gtlExpression class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlExpression::cPtr_gtlExpression (const GALGAS_location & in_where
                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_where (in_where) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @gtlExpression type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpression ("gtlExpression",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExpression::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpression result ;
  const GALGAS_gtlExpression * p = (const GALGAS_gtlExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_gtlBinaryExpression::objectCompare (const GALGAS_gtlBinaryExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBinaryExpression::GALGAS_gtlBinaryExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBinaryExpression::GALGAS_gtlBinaryExpression (const cPtr_gtlBinaryExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBinaryExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlBinaryExpression::getter_lSon (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBinaryExpression * p = (const cPtr_gtlBinaryExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBinaryExpression) ;
    result = p->mAttribute_lSon ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlBinaryExpression::getter_lSon (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lSon ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlBinaryExpression::getter_rSon (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBinaryExpression * p = (const cPtr_gtlBinaryExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBinaryExpression) ;
    result = p->mAttribute_rSon ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlBinaryExpression::getter_rSon (UNUSED_LOCATION_ARGS) const {
  return mAttribute_rSon ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlBinaryExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBinaryExpression::cPtr_gtlBinaryExpression (const GALGAS_location & in_where,
                                                    const GALGAS_gtlExpression & in_lSon,
                                                    const GALGAS_gtlExpression & in_rSon
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_lSon (in_lSon),
mAttribute_rSon (in_rSon) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlBinaryExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBinaryExpression ("gtlBinaryExpression",
                                            & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBinaryExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBinaryExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBinaryExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBinaryExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBinaryExpression GALGAS_gtlBinaryExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlBinaryExpression result ;
  const GALGAS_gtlBinaryExpression * p = (const GALGAS_gtlBinaryExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBinaryExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBinaryExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlAddExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlAddExpression * p = (const cPtr_gtlAddExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlAddExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlAddExpression::objectCompare (const GALGAS_gtlAddExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAddExpression::GALGAS_gtlAddExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAddExpression::GALGAS_gtlAddExpression (const cPtr_gtlAddExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlAddExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAddExpression GALGAS_gtlAddExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_gtlExpression & inAttribute_lSon,
                                                                  const GALGAS_gtlExpression & inAttribute_rSon
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlAddExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlAddExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlAddExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlAddExpression::cPtr_gtlAddExpression (const GALGAS_location & in_where,
                                              const GALGAS_gtlExpression & in_lSon,
                                              const GALGAS_gtlExpression & in_rSon
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlAddExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlAddExpression ;
}

void cPtr_gtlAddExpression::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@gtlAddExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlAddExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlAddExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlAddExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlAddExpression ("gtlAddExpression",
                                         & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlAddExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlAddExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlAddExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlAddExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAddExpression GALGAS_gtlAddExpression::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlAddExpression result ;
  const GALGAS_gtlAddExpression * p = (const GALGAS_gtlAddExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlAddExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlAddExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlAndExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlAndExpression * p = (const cPtr_gtlAndExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlAndExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlAndExpression::objectCompare (const GALGAS_gtlAndExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAndExpression::GALGAS_gtlAndExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAndExpression::GALGAS_gtlAndExpression (const cPtr_gtlAndExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlAndExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAndExpression GALGAS_gtlAndExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_gtlExpression & inAttribute_lSon,
                                                                  const GALGAS_gtlExpression & inAttribute_rSon
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlAndExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlAndExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlAndExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlAndExpression::cPtr_gtlAndExpression (const GALGAS_location & in_where,
                                              const GALGAS_gtlExpression & in_lSon,
                                              const GALGAS_gtlExpression & in_rSon
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlAndExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlAndExpression ;
}

void cPtr_gtlAndExpression::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@gtlAndExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlAndExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlAndExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlAndExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlAndExpression ("gtlAndExpression",
                                         & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlAndExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlAndExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlAndExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlAndExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlAndExpression GALGAS_gtlAndExpression::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlAndExpression result ;
  const GALGAS_gtlAndExpression * p = (const GALGAS_gtlAndExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlAndExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlAndExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlDivideExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlDivideExpression * p = (const cPtr_gtlDivideExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlDivideExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlDivideExpression::objectCompare (const GALGAS_gtlDivideExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDivideExpression::GALGAS_gtlDivideExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDivideExpression::GALGAS_gtlDivideExpression (const cPtr_gtlDivideExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDivideExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDivideExpression GALGAS_gtlDivideExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_gtlExpression & inAttribute_lSon,
                                                                        const GALGAS_gtlExpression & inAttribute_rSon
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlDivideExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDivideExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlDivideExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlDivideExpression::cPtr_gtlDivideExpression (const GALGAS_location & in_where,
                                                    const GALGAS_gtlExpression & in_lSon,
                                                    const GALGAS_gtlExpression & in_rSon
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlDivideExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDivideExpression ;
}

void cPtr_gtlDivideExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlDivideExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlDivideExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlDivideExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlDivideExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDivideExpression ("gtlDivideExpression",
                                            & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDivideExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDivideExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDivideExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDivideExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDivideExpression GALGAS_gtlDivideExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlDivideExpression result ;
  const GALGAS_gtlDivideExpression * p = (const GALGAS_gtlDivideExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDivideExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDivideExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlEqualExpression * p = (const cPtr_gtlEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlEqualExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlEqualExpression::objectCompare (const GALGAS_gtlEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEqualExpression::GALGAS_gtlEqualExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEqualExpression::GALGAS_gtlEqualExpression (const cPtr_gtlEqualExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlEqualExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEqualExpression GALGAS_gtlEqualExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_gtlExpression & inAttribute_lSon,
                                                                      const GALGAS_gtlExpression & inAttribute_rSon
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlEqualExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlEqualExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @gtlEqualExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlEqualExpression::cPtr_gtlEqualExpression (const GALGAS_location & in_where,
                                                  const GALGAS_gtlExpression & in_lSon,
                                                  const GALGAS_gtlExpression & in_rSon
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEqualExpression ;
}

void cPtr_gtlEqualExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@gtlEqualExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlEqualExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlEqualExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlEqualExpression ("gtlEqualExpression",
                                           & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEqualExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlEqualExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEqualExpression GALGAS_gtlEqualExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlEqualExpression result ;
  const GALGAS_gtlEqualExpression * p = (const GALGAS_gtlEqualExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlGreaterOrEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlGreaterOrEqualExpression * p = (const cPtr_gtlGreaterOrEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlGreaterOrEqualExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlGreaterOrEqualExpression::objectCompare (const GALGAS_gtlGreaterOrEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterOrEqualExpression::GALGAS_gtlGreaterOrEqualExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterOrEqualExpression::GALGAS_gtlGreaterOrEqualExpression (const cPtr_gtlGreaterOrEqualExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlGreaterOrEqualExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterOrEqualExpression GALGAS_gtlGreaterOrEqualExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                        const GALGAS_gtlExpression & inAttribute_lSon,
                                                                                        const GALGAS_gtlExpression & inAttribute_rSon
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlGreaterOrEqualExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlGreaterOrEqualExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlGreaterOrEqualExpression class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlGreaterOrEqualExpression::cPtr_gtlGreaterOrEqualExpression (const GALGAS_location & in_where,
                                                                    const GALGAS_gtlExpression & in_lSon,
                                                                    const GALGAS_gtlExpression & in_rSon
                                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlGreaterOrEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression ;
}

void cPtr_gtlGreaterOrEqualExpression::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@gtlGreaterOrEqualExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlGreaterOrEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlGreaterOrEqualExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlGreaterOrEqualExpression type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression ("gtlGreaterOrEqualExpression",
                                                    & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlGreaterOrEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlGreaterOrEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGreaterOrEqualExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterOrEqualExpression GALGAS_gtlGreaterOrEqualExpression::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlGreaterOrEqualExpression result ;
  const GALGAS_gtlGreaterOrEqualExpression * p = (const GALGAS_gtlGreaterOrEqualExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlGreaterOrEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlGreaterOrEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlGreaterThanExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlGreaterThanExpression * p = (const cPtr_gtlGreaterThanExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlGreaterThanExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlGreaterThanExpression::objectCompare (const GALGAS_gtlGreaterThanExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterThanExpression::GALGAS_gtlGreaterThanExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterThanExpression::GALGAS_gtlGreaterThanExpression (const cPtr_gtlGreaterThanExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlGreaterThanExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterThanExpression GALGAS_gtlGreaterThanExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_gtlExpression & inAttribute_lSon,
                                                                                  const GALGAS_gtlExpression & inAttribute_rSon
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlGreaterThanExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlGreaterThanExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlGreaterThanExpression class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlGreaterThanExpression::cPtr_gtlGreaterThanExpression (const GALGAS_location & in_where,
                                                              const GALGAS_gtlExpression & in_lSon,
                                                              const GALGAS_gtlExpression & in_rSon
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlGreaterThanExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGreaterThanExpression ;
}

void cPtr_gtlGreaterThanExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlGreaterThanExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlGreaterThanExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlGreaterThanExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlGreaterThanExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGreaterThanExpression ("gtlGreaterThanExpression",
                                                 & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlGreaterThanExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGreaterThanExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlGreaterThanExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGreaterThanExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGreaterThanExpression GALGAS_gtlGreaterThanExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlGreaterThanExpression result ;
  const GALGAS_gtlGreaterThanExpression * p = (const GALGAS_gtlGreaterThanExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlGreaterThanExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlGreaterThanExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLowerOrEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLowerOrEqualExpression * p = (const cPtr_gtlLowerOrEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLowerOrEqualExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLowerOrEqualExpression::objectCompare (const GALGAS_gtlLowerOrEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerOrEqualExpression::GALGAS_gtlLowerOrEqualExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerOrEqualExpression::GALGAS_gtlLowerOrEqualExpression (const cPtr_gtlLowerOrEqualExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLowerOrEqualExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerOrEqualExpression GALGAS_gtlLowerOrEqualExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                    const GALGAS_gtlExpression & inAttribute_lSon,
                                                                                    const GALGAS_gtlExpression & inAttribute_rSon
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlLowerOrEqualExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLowerOrEqualExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @gtlLowerOrEqualExpression class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLowerOrEqualExpression::cPtr_gtlLowerOrEqualExpression (const GALGAS_location & in_where,
                                                                const GALGAS_gtlExpression & in_lSon,
                                                                const GALGAS_gtlExpression & in_rSon
                                                                COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLowerOrEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression ;
}

void cPtr_gtlLowerOrEqualExpression::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@gtlLowerOrEqualExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLowerOrEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLowerOrEqualExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlLowerOrEqualExpression type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression ("gtlLowerOrEqualExpression",
                                                  & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLowerOrEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLowerOrEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLowerOrEqualExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerOrEqualExpression GALGAS_gtlLowerOrEqualExpression::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlLowerOrEqualExpression result ;
  const GALGAS_gtlLowerOrEqualExpression * p = (const GALGAS_gtlLowerOrEqualExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLowerOrEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLowerOrEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLowerThanExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLowerThanExpression * p = (const cPtr_gtlLowerThanExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLowerThanExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLowerThanExpression::objectCompare (const GALGAS_gtlLowerThanExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerThanExpression::GALGAS_gtlLowerThanExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerThanExpression::GALGAS_gtlLowerThanExpression (const cPtr_gtlLowerThanExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLowerThanExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerThanExpression GALGAS_gtlLowerThanExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_gtlExpression & inAttribute_lSon,
                                                                              const GALGAS_gtlExpression & inAttribute_rSon
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlLowerThanExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLowerThanExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlLowerThanExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLowerThanExpression::cPtr_gtlLowerThanExpression (const GALGAS_location & in_where,
                                                          const GALGAS_gtlExpression & in_lSon,
                                                          const GALGAS_gtlExpression & in_rSon
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLowerThanExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLowerThanExpression ;
}

void cPtr_gtlLowerThanExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@gtlLowerThanExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLowerThanExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLowerThanExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlLowerThanExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLowerThanExpression ("gtlLowerThanExpression",
                                               & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLowerThanExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLowerThanExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLowerThanExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLowerThanExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLowerThanExpression GALGAS_gtlLowerThanExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlLowerThanExpression result ;
  const GALGAS_gtlLowerThanExpression * p = (const GALGAS_gtlLowerThanExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLowerThanExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLowerThanExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlModulusExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlModulusExpression * p = (const cPtr_gtlModulusExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlModulusExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlModulusExpression::objectCompare (const GALGAS_gtlModulusExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlModulusExpression::GALGAS_gtlModulusExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlModulusExpression::GALGAS_gtlModulusExpression (const cPtr_gtlModulusExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlModulusExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlModulusExpression GALGAS_gtlModulusExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                          const GALGAS_gtlExpression & inAttribute_lSon,
                                                                          const GALGAS_gtlExpression & inAttribute_rSon
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlModulusExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlModulusExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlModulusExpression class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlModulusExpression::cPtr_gtlModulusExpression (const GALGAS_location & in_where,
                                                      const GALGAS_gtlExpression & in_lSon,
                                                      const GALGAS_gtlExpression & in_rSon
                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlModulusExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlModulusExpression ;
}

void cPtr_gtlModulusExpression::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@gtlModulusExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlModulusExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlModulusExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlModulusExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlModulusExpression ("gtlModulusExpression",
                                             & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlModulusExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlModulusExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlModulusExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlModulusExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlModulusExpression GALGAS_gtlModulusExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlModulusExpression result ;
  const GALGAS_gtlModulusExpression * p = (const GALGAS_gtlModulusExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlModulusExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlModulusExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlMultiplyExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlMultiplyExpression * p = (const cPtr_gtlMultiplyExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlMultiplyExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlMultiplyExpression::objectCompare (const GALGAS_gtlMultiplyExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMultiplyExpression::GALGAS_gtlMultiplyExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMultiplyExpression::GALGAS_gtlMultiplyExpression (const cPtr_gtlMultiplyExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlMultiplyExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMultiplyExpression GALGAS_gtlMultiplyExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                            const GALGAS_gtlExpression & inAttribute_lSon,
                                                                            const GALGAS_gtlExpression & inAttribute_rSon
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlMultiplyExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlMultiplyExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlMultiplyExpression class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlMultiplyExpression::cPtr_gtlMultiplyExpression (const GALGAS_location & in_where,
                                                        const GALGAS_gtlExpression & in_lSon,
                                                        const GALGAS_gtlExpression & in_rSon
                                                        COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlMultiplyExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMultiplyExpression ;
}

void cPtr_gtlMultiplyExpression::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@gtlMultiplyExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlMultiplyExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlMultiplyExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlMultiplyExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlMultiplyExpression ("gtlMultiplyExpression",
                                              & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlMultiplyExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMultiplyExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlMultiplyExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlMultiplyExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMultiplyExpression GALGAS_gtlMultiplyExpression::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlMultiplyExpression result ;
  const GALGAS_gtlMultiplyExpression * p = (const GALGAS_gtlMultiplyExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlMultiplyExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlMultiplyExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlNotEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlNotEqualExpression * p = (const cPtr_gtlNotEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlNotEqualExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlNotEqualExpression::objectCompare (const GALGAS_gtlNotEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlNotEqualExpression::GALGAS_gtlNotEqualExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlNotEqualExpression::GALGAS_gtlNotEqualExpression (const cPtr_gtlNotEqualExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlNotEqualExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlNotEqualExpression GALGAS_gtlNotEqualExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                            const GALGAS_gtlExpression & inAttribute_lSon,
                                                                            const GALGAS_gtlExpression & inAttribute_rSon
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlNotEqualExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlNotEqualExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlNotEqualExpression class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlNotEqualExpression::cPtr_gtlNotEqualExpression (const GALGAS_location & in_where,
                                                        const GALGAS_gtlExpression & in_lSon,
                                                        const GALGAS_gtlExpression & in_rSon
                                                        COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlNotEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlNotEqualExpression ;
}

void cPtr_gtlNotEqualExpression::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@gtlNotEqualExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlNotEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlNotEqualExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlNotEqualExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlNotEqualExpression ("gtlNotEqualExpression",
                                              & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlNotEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlNotEqualExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlNotEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlNotEqualExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlNotEqualExpression GALGAS_gtlNotEqualExpression::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlNotEqualExpression result ;
  const GALGAS_gtlNotEqualExpression * p = (const GALGAS_gtlNotEqualExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlNotEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlNotEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlOrExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlOrExpression * p = (const cPtr_gtlOrExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlOrExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlOrExpression::objectCompare (const GALGAS_gtlOrExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlOrExpression::GALGAS_gtlOrExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlOrExpression::GALGAS_gtlOrExpression (const cPtr_gtlOrExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlOrExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlOrExpression GALGAS_gtlOrExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                const GALGAS_gtlExpression & inAttribute_lSon,
                                                                const GALGAS_gtlExpression & inAttribute_rSon
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlOrExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlOrExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlOrExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlOrExpression::cPtr_gtlOrExpression (const GALGAS_location & in_where,
                                            const GALGAS_gtlExpression & in_lSon,
                                            const GALGAS_gtlExpression & in_rSon
                                            COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlOrExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlOrExpression ;
}

void cPtr_gtlOrExpression::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@gtlOrExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlOrExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlOrExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @gtlOrExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlOrExpression ("gtlOrExpression",
                                        & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlOrExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlOrExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlOrExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlOrExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlOrExpression GALGAS_gtlOrExpression::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlOrExpression result ;
  const GALGAS_gtlOrExpression * p = (const GALGAS_gtlOrExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlOrExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlOrExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlShiftLeftExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlShiftLeftExpression * p = (const cPtr_gtlShiftLeftExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlShiftLeftExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlShiftLeftExpression::objectCompare (const GALGAS_gtlShiftLeftExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftLeftExpression::GALGAS_gtlShiftLeftExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftLeftExpression::GALGAS_gtlShiftLeftExpression (const cPtr_gtlShiftLeftExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlShiftLeftExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftLeftExpression GALGAS_gtlShiftLeftExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_gtlExpression & inAttribute_lSon,
                                                                              const GALGAS_gtlExpression & inAttribute_rSon
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlShiftLeftExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlShiftLeftExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlShiftLeftExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlShiftLeftExpression::cPtr_gtlShiftLeftExpression (const GALGAS_location & in_where,
                                                          const GALGAS_gtlExpression & in_lSon,
                                                          const GALGAS_gtlExpression & in_rSon
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlShiftLeftExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlShiftLeftExpression ;
}

void cPtr_gtlShiftLeftExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@gtlShiftLeftExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlShiftLeftExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlShiftLeftExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlShiftLeftExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlShiftLeftExpression ("gtlShiftLeftExpression",
                                               & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlShiftLeftExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlShiftLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlShiftLeftExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlShiftLeftExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftLeftExpression GALGAS_gtlShiftLeftExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlShiftLeftExpression result ;
  const GALGAS_gtlShiftLeftExpression * p = (const GALGAS_gtlShiftLeftExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlShiftLeftExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlShiftLeftExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlShiftRightExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlShiftRightExpression * p = (const cPtr_gtlShiftRightExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlShiftRightExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlShiftRightExpression::objectCompare (const GALGAS_gtlShiftRightExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftRightExpression::GALGAS_gtlShiftRightExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftRightExpression::GALGAS_gtlShiftRightExpression (const cPtr_gtlShiftRightExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlShiftRightExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftRightExpression GALGAS_gtlShiftRightExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                const GALGAS_gtlExpression & inAttribute_lSon,
                                                                                const GALGAS_gtlExpression & inAttribute_rSon
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlShiftRightExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlShiftRightExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlShiftRightExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlShiftRightExpression::cPtr_gtlShiftRightExpression (const GALGAS_location & in_where,
                                                            const GALGAS_gtlExpression & in_lSon,
                                                            const GALGAS_gtlExpression & in_rSon
                                                            COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlShiftRightExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlShiftRightExpression ;
}

void cPtr_gtlShiftRightExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@gtlShiftRightExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlShiftRightExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlShiftRightExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlShiftRightExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlShiftRightExpression ("gtlShiftRightExpression",
                                                & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlShiftRightExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlShiftRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlShiftRightExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlShiftRightExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlShiftRightExpression GALGAS_gtlShiftRightExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlShiftRightExpression result ;
  const GALGAS_gtlShiftRightExpression * p = (const GALGAS_gtlShiftRightExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlShiftRightExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlShiftRightExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlSubstractExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlSubstractExpression * p = (const cPtr_gtlSubstractExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlSubstractExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlSubstractExpression::objectCompare (const GALGAS_gtlSubstractExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSubstractExpression::GALGAS_gtlSubstractExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSubstractExpression::GALGAS_gtlSubstractExpression (const cPtr_gtlSubstractExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlSubstractExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSubstractExpression GALGAS_gtlSubstractExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_gtlExpression & inAttribute_lSon,
                                                                              const GALGAS_gtlExpression & inAttribute_rSon
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlSubstractExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlSubstractExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlSubstractExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlSubstractExpression::cPtr_gtlSubstractExpression (const GALGAS_location & in_where,
                                                          const GALGAS_gtlExpression & in_lSon,
                                                          const GALGAS_gtlExpression & in_rSon
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlSubstractExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSubstractExpression ;
}

void cPtr_gtlSubstractExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@gtlSubstractExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlSubstractExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlSubstractExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlSubstractExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSubstractExpression ("gtlSubstractExpression",
                                               & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSubstractExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSubstractExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSubstractExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSubstractExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSubstractExpression GALGAS_gtlSubstractExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlSubstractExpression result ;
  const GALGAS_gtlSubstractExpression * p = (const GALGAS_gtlSubstractExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSubstractExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSubstractExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlXorExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlXorExpression * p = (const cPtr_gtlXorExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlXorExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_lSon.objectCompare (p->mAttribute_lSon) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_rSon.objectCompare (p->mAttribute_rSon) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlXorExpression::objectCompare (const GALGAS_gtlXorExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlXorExpression::GALGAS_gtlXorExpression (void) :
GALGAS_gtlBinaryExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlXorExpression::GALGAS_gtlXorExpression (const cPtr_gtlXorExpression * inSourcePtr) :
GALGAS_gtlBinaryExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlXorExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlXorExpression GALGAS_gtlXorExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_gtlExpression & inAttribute_lSon,
                                                                  const GALGAS_gtlExpression & inAttribute_rSon
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlXorExpression result ;
  if (inAttribute_where.isValid () && inAttribute_lSon.isValid () && inAttribute_rSon.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlXorExpression (inAttribute_where, inAttribute_lSon, inAttribute_rSon COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlXorExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlXorExpression::cPtr_gtlXorExpression (const GALGAS_location & in_where,
                                              const GALGAS_gtlExpression & in_lSon,
                                              const GALGAS_gtlExpression & in_rSon
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlBinaryExpression (in_where, in_lSon, in_rSon COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlXorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlXorExpression ;
}

void cPtr_gtlXorExpression::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@gtlXorExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_lSon.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_rSon.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlXorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlXorExpression (mAttribute_where, mAttribute_lSon, mAttribute_rSon COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlXorExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlXorExpression ("gtlXorExpression",
                                         & kTypeDescriptor_GALGAS_gtlBinaryExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlXorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlXorExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlXorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlXorExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlXorExpression GALGAS_gtlXorExpression::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlXorExpression result ;
  const GALGAS_gtlXorExpression * p = (const GALGAS_gtlXorExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlXorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlXorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlExistsExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlExistsExpression * p = (const cPtr_gtlExistsExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlExistsExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_variable.objectCompare (p->mAttribute_variable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlExistsExpression::objectCompare (const GALGAS_gtlExistsExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsExpression::GALGAS_gtlExistsExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsExpression GALGAS_gtlExistsExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlExistsExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                      GALGAS_gtlVarPath::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsExpression::GALGAS_gtlExistsExpression (const cPtr_gtlExistsExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExistsExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsExpression GALGAS_gtlExistsExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_gtlVarPath & inAttribute_variable
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlExistsExpression result ;
  if (inAttribute_where.isValid () && inAttribute_variable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlExistsExpression (inAttribute_where, inAttribute_variable COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath GALGAS_gtlExistsExpression::getter_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarPath result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExistsExpression * p = (const cPtr_gtlExistsExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExistsExpression) ;
    result = p->mAttribute_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath cPtr_gtlExistsExpression::getter_variable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlExistsExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlExistsExpression::cPtr_gtlExistsExpression (const GALGAS_location & in_where,
                                                    const GALGAS_gtlVarPath & in_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_variable (in_variable) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlExistsExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExistsExpression ;
}

void cPtr_gtlExistsExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlExistsExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_variable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlExistsExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlExistsExpression (mAttribute_where, mAttribute_variable COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlExistsExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExistsExpression ("gtlExistsExpression",
                                            & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExistsExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExistsExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExistsExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExistsExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsExpression GALGAS_gtlExistsExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlExistsExpression result ;
  const GALGAS_gtlExistsExpression * p = (const GALGAS_gtlExistsExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExistsExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExistsExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlExistsDefaultExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlExistsDefaultExpression * p = (const cPtr_gtlExistsDefaultExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlExistsDefaultExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_variable.objectCompare (p->mAttribute_variable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_defaultValue.objectCompare (p->mAttribute_defaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlExistsDefaultExpression::objectCompare (const GALGAS_gtlExistsDefaultExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsDefaultExpression::GALGAS_gtlExistsDefaultExpression (void) :
GALGAS_gtlExistsExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsDefaultExpression::GALGAS_gtlExistsDefaultExpression (const cPtr_gtlExistsDefaultExpression * inSourcePtr) :
GALGAS_gtlExistsExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExistsDefaultExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsDefaultExpression GALGAS_gtlExistsDefaultExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                      const GALGAS_gtlVarPath & inAttribute_variable,
                                                                                      const GALGAS_gtlExpression & inAttribute_defaultValue
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlExistsDefaultExpression result ;
  if (inAttribute_where.isValid () && inAttribute_variable.isValid () && inAttribute_defaultValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlExistsDefaultExpression (inAttribute_where, inAttribute_variable, inAttribute_defaultValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExistsDefaultExpression::getter_defaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExistsDefaultExpression * p = (const cPtr_gtlExistsDefaultExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExistsDefaultExpression) ;
    result = p->mAttribute_defaultValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlExistsDefaultExpression::getter_defaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_defaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @gtlExistsDefaultExpression class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlExistsDefaultExpression::cPtr_gtlExistsDefaultExpression (const GALGAS_location & in_where,
                                                                  const GALGAS_gtlVarPath & in_variable,
                                                                  const GALGAS_gtlExpression & in_defaultValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlExistsExpression (in_where, in_variable COMMA_THERE),
mAttribute_defaultValue (in_defaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlExistsDefaultExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExistsDefaultExpression ;
}

void cPtr_gtlExistsDefaultExpression::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@gtlExistsDefaultExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_variable.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_defaultValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlExistsDefaultExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlExistsDefaultExpression (mAttribute_where, mAttribute_variable, mAttribute_defaultValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlExistsDefaultExpression type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExistsDefaultExpression ("gtlExistsDefaultExpression",
                                                   & kTypeDescriptor_GALGAS_gtlExistsExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExistsDefaultExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExistsDefaultExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExistsDefaultExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExistsDefaultExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExistsDefaultExpression GALGAS_gtlExistsDefaultExpression::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlExistsDefaultExpression result ;
  const GALGAS_gtlExistsDefaultExpression * p = (const GALGAS_gtlExistsDefaultExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExistsDefaultExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExistsDefaultExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlFunctionCallExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlFunctionCallExpression * p = (const cPtr_gtlFunctionCallExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlFunctionCallExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_functionName.objectCompare (p->mAttribute_functionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_functionArguments.objectCompare (p->mAttribute_functionArguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlFunctionCallExpression::objectCompare (const GALGAS_gtlFunctionCallExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunctionCallExpression::GALGAS_gtlFunctionCallExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunctionCallExpression GALGAS_gtlFunctionCallExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlFunctionCallExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_gtlExpressionList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunctionCallExpression::GALGAS_gtlFunctionCallExpression (const cPtr_gtlFunctionCallExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlFunctionCallExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunctionCallExpression GALGAS_gtlFunctionCallExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                    const GALGAS_lstring & inAttribute_functionName,
                                                                                    const GALGAS_gtlExpressionList & inAttribute_functionArguments
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunctionCallExpression result ;
  if (inAttribute_where.isValid () && inAttribute_functionName.isValid () && inAttribute_functionArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlFunctionCallExpression (inAttribute_where, inAttribute_functionName, inAttribute_functionArguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlFunctionCallExpression::getter_functionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlFunctionCallExpression * p = (const cPtr_gtlFunctionCallExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlFunctionCallExpression) ;
    result = p->mAttribute_functionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlFunctionCallExpression::getter_functionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_functionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_gtlFunctionCallExpression::getter_functionArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlFunctionCallExpression * p = (const cPtr_gtlFunctionCallExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlFunctionCallExpression) ;
    result = p->mAttribute_functionArguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_gtlFunctionCallExpression::getter_functionArguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_functionArguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @gtlFunctionCallExpression class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlFunctionCallExpression::cPtr_gtlFunctionCallExpression (const GALGAS_location & in_where,
                                                                const GALGAS_lstring & in_functionName,
                                                                const GALGAS_gtlExpressionList & in_functionArguments
                                                                COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_functionName (in_functionName),
mAttribute_functionArguments (in_functionArguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlFunctionCallExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFunctionCallExpression ;
}

void cPtr_gtlFunctionCallExpression::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@gtlFunctionCallExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_functionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_functionArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlFunctionCallExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlFunctionCallExpression (mAttribute_where, mAttribute_functionName, mAttribute_functionArguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlFunctionCallExpression type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFunctionCallExpression ("gtlFunctionCallExpression",
                                                  & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlFunctionCallExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFunctionCallExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlFunctionCallExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFunctionCallExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunctionCallExpression GALGAS_gtlFunctionCallExpression::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunctionCallExpression result ;
  const GALGAS_gtlFunctionCallExpression * p = (const GALGAS_gtlFunctionCallExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlFunctionCallExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlFunctionCallExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlGetterCallExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlGetterCallExpression * p = (const cPtr_gtlGetterCallExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlGetterCallExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_target.objectCompare (p->mAttribute_target) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_getterName.objectCompare (p->mAttribute_getterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_arguments.objectCompare (p->mAttribute_arguments) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlGetterCallExpression::objectCompare (const GALGAS_gtlGetterCallExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterCallExpression::GALGAS_gtlGetterCallExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterCallExpression::GALGAS_gtlGetterCallExpression (const cPtr_gtlGetterCallExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlGetterCallExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterCallExpression GALGAS_gtlGetterCallExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                const GALGAS_gtlExpression & inAttribute_target,
                                                                                const GALGAS_lstring & inAttribute_getterName,
                                                                                const GALGAS_gtlExpressionList & inAttribute_arguments
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetterCallExpression result ;
  if (inAttribute_where.isValid () && inAttribute_target.isValid () && inAttribute_getterName.isValid () && inAttribute_arguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlGetterCallExpression (inAttribute_where, inAttribute_target, inAttribute_getterName, inAttribute_arguments COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlGetterCallExpression::getter_target (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlGetterCallExpression * p = (const cPtr_gtlGetterCallExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlGetterCallExpression) ;
    result = p->mAttribute_target ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlGetterCallExpression::getter_target (UNUSED_LOCATION_ARGS) const {
  return mAttribute_target ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlGetterCallExpression::getter_getterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlGetterCallExpression * p = (const cPtr_gtlGetterCallExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlGetterCallExpression) ;
    result = p->mAttribute_getterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlGetterCallExpression::getter_getterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_getterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_gtlGetterCallExpression::getter_arguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlGetterCallExpression * p = (const cPtr_gtlGetterCallExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlGetterCallExpression) ;
    result = p->mAttribute_arguments ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_gtlGetterCallExpression::getter_arguments (UNUSED_LOCATION_ARGS) const {
  return mAttribute_arguments ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlGetterCallExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlGetterCallExpression::cPtr_gtlGetterCallExpression (const GALGAS_location & in_where,
                                                            const GALGAS_gtlExpression & in_target,
                                                            const GALGAS_lstring & in_getterName,
                                                            const GALGAS_gtlExpressionList & in_arguments
                                                            COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_target (in_target),
mAttribute_getterName (in_getterName),
mAttribute_arguments (in_arguments) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlGetterCallExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetterCallExpression ;
}

void cPtr_gtlGetterCallExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@gtlGetterCallExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_target.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_getterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_arguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlGetterCallExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlGetterCallExpression (mAttribute_where, mAttribute_target, mAttribute_getterName, mAttribute_arguments COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlGetterCallExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGetterCallExpression ("gtlGetterCallExpression",
                                                & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlGetterCallExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetterCallExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlGetterCallExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGetterCallExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterCallExpression GALGAS_gtlGetterCallExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetterCallExpression result ;
  const GALGAS_gtlGetterCallExpression * p = (const GALGAS_gtlGetterCallExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlGetterCallExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlGetterCallExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlListOfExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlListOfExpression * p = (const cPtr_gtlListOfExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlListOfExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_expression.objectCompare (p->mAttribute_expression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlListOfExpression::objectCompare (const GALGAS_gtlListOfExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListOfExpression::GALGAS_gtlListOfExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListOfExpression::GALGAS_gtlListOfExpression (const cPtr_gtlListOfExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlListOfExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListOfExpression GALGAS_gtlListOfExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_gtlExpression & inAttribute_expression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlListOfExpression result ;
  if (inAttribute_where.isValid () && inAttribute_expression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlListOfExpression (inAttribute_where, inAttribute_expression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlListOfExpression::getter_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlListOfExpression * p = (const cPtr_gtlListOfExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlListOfExpression) ;
    result = p->mAttribute_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlListOfExpression::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlListOfExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlListOfExpression::cPtr_gtlListOfExpression (const GALGAS_location & in_where,
                                                    const GALGAS_gtlExpression & in_expression
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_expression (in_expression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlListOfExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListOfExpression ;
}

void cPtr_gtlListOfExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlListOfExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_expression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlListOfExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlListOfExpression (mAttribute_where, mAttribute_expression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlListOfExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlListOfExpression ("gtlListOfExpression",
                                            & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlListOfExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlListOfExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlListOfExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListOfExpression GALGAS_gtlListOfExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlListOfExpression result ;
  const GALGAS_gtlListOfExpression * p = (const GALGAS_gtlListOfExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlListOfExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlListOfExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLiteralListExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralListExpression * p = (const cPtr_gtlLiteralListExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralListExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLiteralListExpression::objectCompare (const GALGAS_gtlLiteralListExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralListExpression::GALGAS_gtlLiteralListExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralListExpression GALGAS_gtlLiteralListExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralListExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_gtlExpressionList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralListExpression::GALGAS_gtlLiteralListExpression (const cPtr_gtlLiteralListExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralListExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralListExpression GALGAS_gtlLiteralListExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_gtlExpressionList & inAttribute_value
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralListExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralListExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_gtlLiteralListExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralListExpression * p = (const cPtr_gtlLiteralListExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralListExpression) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_gtlLiteralListExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlLiteralListExpression class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLiteralListExpression::cPtr_gtlLiteralListExpression (const GALGAS_location & in_where,
                                                              const GALGAS_gtlExpressionList & in_value
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLiteralListExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralListExpression ;
}

void cPtr_gtlLiteralListExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlLiteralListExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLiteralListExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralListExpression (mAttribute_where, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlLiteralListExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralListExpression ("gtlLiteralListExpression",
                                                 & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLiteralListExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralListExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLiteralListExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralListExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralListExpression GALGAS_gtlLiteralListExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralListExpression result ;
  const GALGAS_gtlLiteralListExpression * p = (const GALGAS_gtlLiteralListExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralListExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralListExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLiteralMapExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralMapExpression * p = (const cPtr_gtlLiteralMapExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralMapExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLiteralMapExpression::objectCompare (const GALGAS_gtlLiteralMapExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralMapExpression::GALGAS_gtlLiteralMapExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralMapExpression GALGAS_gtlLiteralMapExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralMapExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_gtlExpressionMap::constructor_emptyMap (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralMapExpression::GALGAS_gtlLiteralMapExpression (const cPtr_gtlLiteralMapExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralMapExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralMapExpression GALGAS_gtlLiteralMapExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                const GALGAS_gtlExpressionMap & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralMapExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralMapExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap GALGAS_gtlLiteralMapExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralMapExpression * p = (const cPtr_gtlLiteralMapExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralMapExpression) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap cPtr_gtlLiteralMapExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlLiteralMapExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLiteralMapExpression::cPtr_gtlLiteralMapExpression (const GALGAS_location & in_where,
                                                            const GALGAS_gtlExpressionMap & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLiteralMapExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralMapExpression ;
}

void cPtr_gtlLiteralMapExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@gtlLiteralMapExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLiteralMapExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralMapExpression (mAttribute_where, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlLiteralMapExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralMapExpression ("gtlLiteralMapExpression",
                                                & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLiteralMapExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralMapExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLiteralMapExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralMapExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralMapExpression GALGAS_gtlLiteralMapExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralMapExpression result ;
  const GALGAS_gtlLiteralMapExpression * p = (const GALGAS_gtlLiteralMapExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralMapExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralMapExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLiteralSetExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralSetExpression * p = (const cPtr_gtlLiteralSetExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralSetExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLiteralSetExpression::objectCompare (const GALGAS_gtlLiteralSetExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralSetExpression::GALGAS_gtlLiteralSetExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralSetExpression GALGAS_gtlLiteralSetExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralSetExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_gtlExpressionList::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralSetExpression::GALGAS_gtlLiteralSetExpression (const cPtr_gtlLiteralSetExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralSetExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralSetExpression GALGAS_gtlLiteralSetExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                const GALGAS_gtlExpressionList & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralSetExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralSetExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_gtlLiteralSetExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralSetExpression * p = (const cPtr_gtlLiteralSetExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralSetExpression) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_gtlLiteralSetExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlLiteralSetExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLiteralSetExpression::cPtr_gtlLiteralSetExpression (const GALGAS_location & in_where,
                                                            const GALGAS_gtlExpressionList & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLiteralSetExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralSetExpression ;
}

void cPtr_gtlLiteralSetExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@gtlLiteralSetExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLiteralSetExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralSetExpression (mAttribute_where, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlLiteralSetExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralSetExpression ("gtlLiteralSetExpression",
                                                & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLiteralSetExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralSetExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLiteralSetExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralSetExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralSetExpression GALGAS_gtlLiteralSetExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralSetExpression result ;
  const GALGAS_gtlLiteralSetExpression * p = (const GALGAS_gtlLiteralSetExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralSetExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralSetExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLiteralStructExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralStructExpression * p = (const cPtr_gtlLiteralStructExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralStructExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLiteralStructExpression::objectCompare (const GALGAS_gtlLiteralStructExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralStructExpression::GALGAS_gtlLiteralStructExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralStructExpression GALGAS_gtlLiteralStructExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralStructExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_gtlExpressionMap::constructor_emptyMap (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralStructExpression::GALGAS_gtlLiteralStructExpression (const cPtr_gtlLiteralStructExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralStructExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralStructExpression GALGAS_gtlLiteralStructExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                      const GALGAS_gtlExpressionMap & inAttribute_value
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralStructExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralStructExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap GALGAS_gtlLiteralStructExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralStructExpression * p = (const cPtr_gtlLiteralStructExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralStructExpression) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap cPtr_gtlLiteralStructExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @gtlLiteralStructExpression class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLiteralStructExpression::cPtr_gtlLiteralStructExpression (const GALGAS_location & in_where,
                                                                  const GALGAS_gtlExpressionMap & in_value
                                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLiteralStructExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralStructExpression ;
}

void cPtr_gtlLiteralStructExpression::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@gtlLiteralStructExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLiteralStructExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralStructExpression (mAttribute_where, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlLiteralStructExpression type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralStructExpression ("gtlLiteralStructExpression",
                                                   & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLiteralStructExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralStructExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLiteralStructExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralStructExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLiteralStructExpression GALGAS_gtlLiteralStructExpression::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralStructExpression result ;
  const GALGAS_gtlLiteralStructExpression * p = (const GALGAS_gtlLiteralStructExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralStructExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralStructExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlMapOfStructExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlMapOfStructExpression * p = (const cPtr_gtlMapOfStructExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlMapOfStructExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_expression.objectCompare (p->mAttribute_expression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlMapOfStructExpression::objectCompare (const GALGAS_gtlMapOfStructExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfStructExpression::GALGAS_gtlMapOfStructExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfStructExpression::GALGAS_gtlMapOfStructExpression (const cPtr_gtlMapOfStructExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlMapOfStructExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfStructExpression GALGAS_gtlMapOfStructExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_gtlExpression & inAttribute_expression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlMapOfStructExpression result ;
  if (inAttribute_where.isValid () && inAttribute_expression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlMapOfStructExpression (inAttribute_where, inAttribute_expression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlMapOfStructExpression::getter_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlMapOfStructExpression * p = (const cPtr_gtlMapOfStructExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlMapOfStructExpression) ;
    result = p->mAttribute_expression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression cPtr_gtlMapOfStructExpression::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlMapOfStructExpression class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlMapOfStructExpression::cPtr_gtlMapOfStructExpression (const GALGAS_location & in_where,
                                                              const GALGAS_gtlExpression & in_expression
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_expression (in_expression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlMapOfStructExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMapOfStructExpression ;
}

void cPtr_gtlMapOfStructExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlMapOfStructExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_expression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlMapOfStructExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlMapOfStructExpression (mAttribute_where, mAttribute_expression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlMapOfStructExpression type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlMapOfStructExpression ("gtlMapOfStructExpression",
                                                 & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlMapOfStructExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMapOfStructExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlMapOfStructExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlMapOfStructExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfStructExpression GALGAS_gtlMapOfStructExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlMapOfStructExpression result ;
  const GALGAS_gtlMapOfStructExpression * p = (const GALGAS_gtlMapOfStructExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlMapOfStructExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlMapOfStructExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlMapOfListExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlMapOfListExpression * p = (const cPtr_gtlMapOfListExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlMapOfListExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_expression.objectCompare (p->mAttribute_expression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_key.objectCompare (p->mAttribute_key) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlMapOfListExpression::objectCompare (const GALGAS_gtlMapOfListExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfListExpression::GALGAS_gtlMapOfListExpression (void) :
GALGAS_gtlMapOfStructExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfListExpression::GALGAS_gtlMapOfListExpression (const cPtr_gtlMapOfListExpression * inSourcePtr) :
GALGAS_gtlMapOfStructExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlMapOfListExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfListExpression GALGAS_gtlMapOfListExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_gtlExpression & inAttribute_expression,
                                                                              const GALGAS_lstring & inAttribute_key
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlMapOfListExpression result ;
  if (inAttribute_where.isValid () && inAttribute_expression.isValid () && inAttribute_key.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlMapOfListExpression (inAttribute_where, inAttribute_expression, inAttribute_key COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlMapOfListExpression::getter_key (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlMapOfListExpression * p = (const cPtr_gtlMapOfListExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlMapOfListExpression) ;
    result = p->mAttribute_key ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlMapOfListExpression::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlMapOfListExpression class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlMapOfListExpression::cPtr_gtlMapOfListExpression (const GALGAS_location & in_where,
                                                          const GALGAS_gtlExpression & in_expression,
                                                          const GALGAS_lstring & in_key
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlMapOfStructExpression (in_where, in_expression COMMA_THERE),
mAttribute_key (in_key) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlMapOfListExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMapOfListExpression ;
}

void cPtr_gtlMapOfListExpression::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@gtlMapOfListExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_expression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_key.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlMapOfListExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlMapOfListExpression (mAttribute_where, mAttribute_expression, mAttribute_key COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlMapOfListExpression type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlMapOfListExpression ("gtlMapOfListExpression",
                                               & kTypeDescriptor_GALGAS_gtlMapOfStructExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlMapOfListExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMapOfListExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlMapOfListExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlMapOfListExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlMapOfListExpression GALGAS_gtlMapOfListExpression::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlMapOfListExpression result ;
  const GALGAS_gtlMapOfListExpression * p = (const GALGAS_gtlMapOfListExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlMapOfListExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlMapOfListExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlTerminal::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlTerminal * p = (const cPtr_gtlTerminal *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlTerminal) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_value.objectCompare (p->mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlTerminal::objectCompare (const GALGAS_gtlTerminal & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTerminal::GALGAS_gtlTerminal (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTerminal::GALGAS_gtlTerminal (const cPtr_gtlTerminal * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlTerminal) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTerminal GALGAS_gtlTerminal::constructor_new (const GALGAS_location & inAttribute_where,
                                                        const GALGAS_gtlData & inAttribute_value
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlTerminal result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlTerminal (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlTerminal::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlData result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlTerminal * p = (const cPtr_gtlTerminal *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTerminal) ;
    result = p->mAttribute_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData cPtr_gtlTerminal::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @gtlTerminal class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlTerminal::cPtr_gtlTerminal (const GALGAS_location & in_where,
                                    const GALGAS_gtlData & in_value
                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlTerminal::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTerminal ;
}

void cPtr_gtlTerminal::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@gtlTerminal:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlTerminal::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlTerminal (mAttribute_where, mAttribute_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @gtlTerminal type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTerminal ("gtlTerminal",
                                    & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTerminal::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTerminal ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTerminal::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTerminal (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTerminal GALGAS_gtlTerminal::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlTerminal result ;
  const GALGAS_gtlTerminal * p = (const GALGAS_gtlTerminal *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTerminal *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTerminal", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlTypeOfExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlTypeOfExpression * p = (const cPtr_gtlTypeOfExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlTypeOfExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_where.objectCompare (p->mAttribute_where) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_variable.objectCompare (p->mAttribute_variable) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlTypeOfExpression::objectCompare (const GALGAS_gtlTypeOfExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypeOfExpression::GALGAS_gtlTypeOfExpression (void) :
GALGAS_gtlExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypeOfExpression GALGAS_gtlTypeOfExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlTypeOfExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                      GALGAS_gtlVarPath::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypeOfExpression::GALGAS_gtlTypeOfExpression (const cPtr_gtlTypeOfExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlTypeOfExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypeOfExpression GALGAS_gtlTypeOfExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_gtlVarPath & inAttribute_variable
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlTypeOfExpression result ;
  if (inAttribute_where.isValid () && inAttribute_variable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlTypeOfExpression (inAttribute_where, inAttribute_variable COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath GALGAS_gtlTypeOfExpression::getter_variable (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlVarPath result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlTypeOfExpression * p = (const cPtr_gtlTypeOfExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTypeOfExpression) ;
    result = p->mAttribute_variable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath cPtr_gtlTypeOfExpression::getter_variable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_variable ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlTypeOfExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlTypeOfExpression::cPtr_gtlTypeOfExpression (const GALGAS_location & in_where,
                                                    const GALGAS_gtlVarPath & in_variable
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mAttribute_variable (in_variable) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlTypeOfExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTypeOfExpression ;
}

void cPtr_gtlTypeOfExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlTypeOfExpression:" ;
  mAttribute_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_variable.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlTypeOfExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlTypeOfExpression (mAttribute_where, mAttribute_variable COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlTypeOfExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTypeOfExpression ("gtlTypeOfExpression",
                                            & kTypeDescriptor_GALGAS_gtlExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTypeOfExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTypeOfExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTypeOfExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTypeOfExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypeOfExpression GALGAS_gtlTypeOfExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlTypeOfExpression result ;
  const GALGAS_gtlTypeOfExpression * p = (const GALGAS_gtlTypeOfExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTypeOfExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTypeOfExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

