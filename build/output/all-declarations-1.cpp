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

static const int16_t gProductions_gtl_grammar [] = {
// At index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
  NONTERMINAL (10) // <gtl_relation_term>
, NONTERMINAL (42) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 3 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 667
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 7 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 702
, NONTERMINAL (66) // <select_gtl_5F_expression_5F_parser_24>
, END_PRODUCTION
// At index 9 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 367
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_import) // $import$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_let) // $let$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (70) // <select_gtl_5F_instruction_5F_parser_0>
, END_PRODUCTION
// At index 16 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_unlet) // $unlet$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 19 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_error) // $error$
, NONTERMINAL (2) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 24 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_warning) // $warning$
, NONTERMINAL (2) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 29 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_print) // $print$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 32 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_println) // $println$
, NONTERMINAL (71) // <select_gtl_5F_instruction_5F_parser_1>
, END_PRODUCTION
// At index 35 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_display) // $display$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 38 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 255
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_sort) // $sort$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (72) // <select_gtl_5F_instruction_5F_parser_2>
, END_PRODUCTION
// At index 42 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 288
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_tab) // $tab$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 45 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 302
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 47 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 314
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_libraries) // $libraries$
, END_PRODUCTION
// At index 49 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 325
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B__21_) // $[!$
, NONTERMINAL (1) // <gtl_variable>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (74) // <select_gtl_5F_instruction_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 55 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 716
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (67) // <select_gtl_5F_expression_5F_parser_25>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 59 : <gtl_start_symbol>, in file 'gtl_parser.ggs', line 50
, NONTERMINAL (16) // <select_gtl_5F_parser_0>
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 62 : <gtl_template_instruction_list>, in file 'gtl_parser.ggs', line 63
, NONTERMINAL (17) // <select_gtl_5F_parser_1>
, END_PRODUCTION
// At index 64 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 90
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21_) // $!$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 67 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 108
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_write) // $write$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_to) // $to$
, NONTERMINAL (18) // <select_gtl_5F_parser_2>
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_write) // $write$
, END_PRODUCTION
// At index 76 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 128
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_template) // $template$
, NONTERMINAL (19) // <select_gtl_5F_parser_3>
, NONTERMINAL (22) // <select_gtl_5F_parser_6>
, END_PRODUCTION
// At index 80 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 183
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3F_) // $?$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 83 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 196
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (26) // <select_gtl_5F_parser_10>
, NONTERMINAL (27) // <select_gtl_5F_parser_11>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, END_PRODUCTION
// At index 92 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 228
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_foreach) // $foreach$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (28) // <select_gtl_5F_parser_12>
, NONTERMINAL (29) // <select_gtl_5F_parser_13>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (31) // <select_gtl_5F_parser_15>
, NONTERMINAL (32) // <select_gtl_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_foreach) // $foreach$
, END_PRODUCTION
// At index 106 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 289
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_for) // $for$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_parser_17>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (34) // <select_gtl_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_for) // $for$
, END_PRODUCTION
// At index 117 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 331
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_loop) // $loop$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_from) // $from$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (35) // <select_gtl_5F_parser_19>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_to) // $to$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (36) // <select_gtl_5F_parser_20>
, NONTERMINAL (37) // <select_gtl_5F_parser_21>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (38) // <select_gtl_5F_parser_22>
, NONTERMINAL (39) // <select_gtl_5F_parser_23>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_loop) // $loop$
, END_PRODUCTION
// At index 133 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 397
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_repeat) // $repeat$
, NONTERMINAL (40) // <select_gtl_5F_parser_24>
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_while) // $while$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_repeat) // $repeat$
, END_PRODUCTION
// At index 143 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 430
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_input) // $input$
, NONTERMINAL (5) // <gtl_argument_list>
, END_PRODUCTION
// At index 146 : <gtl_file_name>, in file 'gtl_parser.ggs', line 443
, NONTERMINAL (41) // <select_gtl_5F_parser_25>
, END_PRODUCTION
// At index 148 : <gtl_relation_term>, in file 'gtl_expression_parser.ggs', line 53
, NONTERMINAL (11) // <gtl_relation_factor>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 151 : <gtl_relation_factor>, in file 'gtl_expression_parser.ggs', line 69
, NONTERMINAL (12) // <gtl_simple_expression>
, NONTERMINAL (44) // <select_gtl_5F_expression_5F_parser_2>
, END_PRODUCTION
// At index 154 : <gtl_simple_expression>, in file 'gtl_expression_parser.ggs', line 117
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 157 : <gtl_term>, in file 'gtl_expression_parser.ggs', line 162
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 160 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 192
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 164 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 208
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_not) // $not$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 167 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 220
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 170 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 232
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 173 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 244
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 176 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 256
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_yes) // $yes$
, END_PRODUCTION
// At index 178 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 269
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_no) // $no$
, END_PRODUCTION
// At index 180 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 282
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 182 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 295
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_double) // $literal_double$
, END_PRODUCTION
// At index 184 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 308
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 186 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 321
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_char) // $literal_char$
, END_PRODUCTION
// At index 188 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 335
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_5>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 194 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 369
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (49) // <select_gtl_5F_expression_5F_parser_7>
, END_PRODUCTION
// At index 197 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 401
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (52) // <select_gtl_5F_expression_5F_parser_10>
, END_PRODUCTION
// At index 201 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 420
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_typeof) // $typeof$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 204 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 429
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 206 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 445
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 208 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 461
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum) // $literal_enum$
, END_PRODUCTION
// At index 210 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 477
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 213 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 514
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_emptylist) // $emptylist$
, END_PRODUCTION
// At index 215 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 533
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_emptymap) // $emptymap$
, END_PRODUCTION
// At index 217 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 552
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mapof) // $mapof$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (53) // <select_gtl_5F_expression_5F_parser_11>
, END_PRODUCTION
// At index 221 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 576
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_listof) // $listof$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 225 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 587
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__28_) // $@($
, NONTERMINAL (54) // <select_gtl_5F_expression_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 229 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 606
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__5B_) // $@[$
, NONTERMINAL (56) // <select_gtl_5F_expression_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 233 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 627
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__7B_) // $@{$
, NONTERMINAL (58) // <select_gtl_5F_expression_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 237 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 648
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__21_) // $@!$
, NONTERMINAL (60) // <select_gtl_5F_expression_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21_) // $!$
, END_PRODUCTION
// At index 241 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 354
, NONTERMINAL (76) // <select_gtl_5F_instruction_5F_parser_6>
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 243 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
, END_PRODUCTION
// At index 244 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
, NONTERMINAL (3) // <gtl_import>
, NONTERMINAL (16) // <select_gtl_5F_parser_0>
, END_PRODUCTION
// At index 247 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
, END_PRODUCTION
// At index 248 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
, NONTERMINAL (8) // <gtl_template_instruction>
, NONTERMINAL (17) // <select_gtl_5F_parser_1>
, END_PRODUCTION
// At index 251 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
, NONTERMINAL (4) // <gtl_simple_instruction>
, NONTERMINAL (17) // <select_gtl_5F_parser_1>
, END_PRODUCTION
// At index 254 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_executable) // $executable$
, END_PRODUCTION
// At index 256 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
, END_PRODUCTION
// At index 257 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (20) // <select_gtl_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 261 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
, END_PRODUCTION
// At index 262 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (21) // <select_gtl_5F_parser_5>
, END_PRODUCTION
// At index 265 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
, END_PRODUCTION
// At index 266 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
, END_PRODUCTION
// At index 267 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (21) // <select_gtl_5F_parser_5>
, END_PRODUCTION
// At index 271 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (9) // <gtl_file_name>
, NONTERMINAL (23) // <select_gtl_5F_parser_7>
, NONTERMINAL (24) // <select_gtl_5F_parser_8>
, END_PRODUCTION
// At index 277 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
, NONTERMINAL (9) // <gtl_file_name>
, NONTERMINAL (25) // <select_gtl_5F_parser_9>
, END_PRODUCTION
// At index 280 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 283 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
, END_PRODUCTION
// At index 284 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_or) // $or$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_template) // $template$
, END_PRODUCTION
// At index 289 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
, END_PRODUCTION
// At index 290 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 293 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
, END_PRODUCTION
// At index 294 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
, END_PRODUCTION
// At index 295 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_elsif) // $elsif$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (26) // <select_gtl_5F_parser_10>
, END_PRODUCTION
// At index 301 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_else) // $else$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 304 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
, END_PRODUCTION
// At index 305 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 308 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
, END_PRODUCTION
// At index 309 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 313 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
, END_PRODUCTION
// At index 314 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 317 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
, END_PRODUCTION
// At index 318 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 321 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
, END_PRODUCTION
// At index 322 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 325 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
, END_PRODUCTION
// At index 326 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
, END_PRODUCTION
// At index 327 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_parser_17>
, END_PRODUCTION
// At index 331 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 334 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
, END_PRODUCTION
// At index 335 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
, END_PRODUCTION
// At index 336 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_up) // $up$
, END_PRODUCTION
// At index 338 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_down) // $down$
, END_PRODUCTION
// At index 340 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_step) // $step$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 343 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
, END_PRODUCTION
// At index 344 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 347 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
, END_PRODUCTION
// At index 348 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 351 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
, END_PRODUCTION
// At index 352 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 355 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
, END_PRODUCTION
// At index 356 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 360 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
, END_PRODUCTION
// At index 361 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 363 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_from) // $from$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 366 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, END_PRODUCTION
// At index 367 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (10) // <gtl_relation_term>
, NONTERMINAL (42) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 371 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (10) // <gtl_relation_term>
, NONTERMINAL (42) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 375 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, END_PRODUCTION
// At index 376 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (11) // <gtl_relation_factor>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 380 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, END_PRODUCTION
// At index 381 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3D__3D_) // $==$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 384 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21__3D_) // $!=$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 387 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3D_) // $<=$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 390 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3D_) // $>=$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 393 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 396 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 399 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, END_PRODUCTION
// At index 400 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C_) // $<<$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 404 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E_) // $>>$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 408 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 412 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2E_) // $.$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 416 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 420 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, END_PRODUCTION
// At index 421 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 425 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F_) // $/$
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 429 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod) // $mod$
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 433 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, END_PRODUCTION
// At index 434 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (48) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 438 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, END_PRODUCTION
// At index 439 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (48) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 443 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, END_PRODUCTION
// At index 444 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (50) // <select_gtl_5F_expression_5F_parser_8>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 448 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (51) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 451 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, END_PRODUCTION
// At index 452 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, END_PRODUCTION
// At index 453 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (51) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 457 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_default) // $default$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 462 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, END_PRODUCTION
// At index 463 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 466 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 468 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (55) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 471 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, END_PRODUCTION
// At index 472 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, END_PRODUCTION
// At index 473 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (55) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 477 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (57) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 482 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, END_PRODUCTION
// At index 483 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, END_PRODUCTION
// At index 484 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (57) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 490 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (59) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 495 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, END_PRODUCTION
// At index 496 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, END_PRODUCTION
// At index 497 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (59) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 503 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (61) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 506 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, END_PRODUCTION
// At index 507 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, END_PRODUCTION
// At index 508 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (61) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 512 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
, END_PRODUCTION
// At index 513 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3A_) // $::$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 518 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (64) // <select_gtl_5F_expression_5F_parser_22>
, END_PRODUCTION
// At index 523 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
, END_PRODUCTION
// At index 524 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (65) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 529 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
, END_PRODUCTION
// At index 530 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
, END_PRODUCTION
// At index 531 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (65) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 536 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_here) // $here$
, END_PRODUCTION
// At index 538 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 540 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (68) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 544 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
, END_PRODUCTION
// At index 545 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
, END_PRODUCTION
// At index 546 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (68) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 551 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 555 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
, END_PRODUCTION
// At index 556 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 559 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B__3D_) // $+=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 562 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D__3D_) // $-=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 565 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A__3D_) // $*=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 568 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F__3D_) // $/=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 571 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod_3D_) // $mod=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 574 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_) // $<<=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 577 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_) // $>>=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 580 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26__3D_) // $&=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 583 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C__3D_) // $|=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 586 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E__3D_) // $^=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 589 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, END_PRODUCTION
// At index 590 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 592 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, END_PRODUCTION
// At index 593 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <gtl_sorting_order>
, NONTERMINAL (73) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 598 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
, NONTERMINAL (15) // <gtl_sorting_order>
, END_PRODUCTION
// At index 600 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
, END_PRODUCTION
// At index 601 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <gtl_sorting_order>
, NONTERMINAL (73) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 606 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
, END_PRODUCTION
// At index 607 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (75) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 611 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
, END_PRODUCTION
// At index 612 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (75) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 616 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, END_PRODUCTION
// At index 618 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, END_PRODUCTION
// At index 620 : <>, in file '.ggs', line 0
, NONTERMINAL (6) // <gtl_start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_gtl_grammar [209] = {
 {"<gtl_expression>", "gtl_expression_parser", 0}, // at index 0
 {"<gtl_variable>", "gtl_expression_parser", 3}, // at index 1
 {"<gtl_variable_or_here>", "gtl_expression_parser", 7}, // at index 2
 {"<gtl_import>", "gtl_instruction_parser", 9}, // at index 3
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 12}, // at index 4
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 16}, // at index 5
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 19}, // at index 6
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 24}, // at index 7
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 29}, // at index 8
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 32}, // at index 9
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 35}, // at index 10
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 38}, // at index 11
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 42}, // at index 12
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 45}, // at index 13
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 47}, // at index 14
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 49}, // at index 15
 {"<gtl_argument_list>", "gtl_expression_parser", 55}, // at index 16
 {"<gtl_start_symbol>", "gtl_parser", 59}, // at index 17
 {"<gtl_template_instruction_list>", "gtl_parser", 62}, // at index 18
 {"<gtl_template_instruction>", "gtl_parser", 64}, // at index 19
 {"<gtl_template_instruction>", "gtl_parser", 67}, // at index 20
 {"<gtl_template_instruction>", "gtl_parser", 76}, // at index 21
 {"<gtl_template_instruction>", "gtl_parser", 80}, // at index 22
 {"<gtl_template_instruction>", "gtl_parser", 83}, // at index 23
 {"<gtl_template_instruction>", "gtl_parser", 92}, // at index 24
 {"<gtl_template_instruction>", "gtl_parser", 106}, // at index 25
 {"<gtl_template_instruction>", "gtl_parser", 117}, // at index 26
 {"<gtl_template_instruction>", "gtl_parser", 133}, // at index 27
 {"<gtl_template_instruction>", "gtl_parser", 143}, // at index 28
 {"<gtl_file_name>", "gtl_parser", 146}, // at index 29
 {"<gtl_relation_term>", "gtl_expression_parser", 148}, // at index 30
 {"<gtl_relation_factor>", "gtl_expression_parser", 151}, // at index 31
 {"<gtl_simple_expression>", "gtl_expression_parser", 154}, // at index 32
 {"<gtl_term>", "gtl_expression_parser", 157}, // at index 33
 {"<gtl_factor>", "gtl_expression_parser", 160}, // at index 34
 {"<gtl_factor>", "gtl_expression_parser", 164}, // at index 35
 {"<gtl_factor>", "gtl_expression_parser", 167}, // at index 36
 {"<gtl_factor>", "gtl_expression_parser", 170}, // at index 37
 {"<gtl_factor>", "gtl_expression_parser", 173}, // at index 38
 {"<gtl_factor>", "gtl_expression_parser", 176}, // at index 39
 {"<gtl_factor>", "gtl_expression_parser", 178}, // at index 40
 {"<gtl_factor>", "gtl_expression_parser", 180}, // at index 41
 {"<gtl_factor>", "gtl_expression_parser", 182}, // at index 42
 {"<gtl_factor>", "gtl_expression_parser", 184}, // at index 43
 {"<gtl_factor>", "gtl_expression_parser", 186}, // at index 44
 {"<gtl_factor>", "gtl_expression_parser", 188}, // at index 45
 {"<gtl_factor>", "gtl_expression_parser", 194}, // at index 46
 {"<gtl_factor>", "gtl_expression_parser", 197}, // at index 47
 {"<gtl_factor>", "gtl_expression_parser", 201}, // at index 48
 {"<gtl_factor>", "gtl_expression_parser", 204}, // at index 49
 {"<gtl_factor>", "gtl_expression_parser", 206}, // at index 50
 {"<gtl_factor>", "gtl_expression_parser", 208}, // at index 51
 {"<gtl_factor>", "gtl_expression_parser", 210}, // at index 52
 {"<gtl_factor>", "gtl_expression_parser", 213}, // at index 53
 {"<gtl_factor>", "gtl_expression_parser", 215}, // at index 54
 {"<gtl_factor>", "gtl_expression_parser", 217}, // at index 55
 {"<gtl_factor>", "gtl_expression_parser", 221}, // at index 56
 {"<gtl_factor>", "gtl_expression_parser", 225}, // at index 57
 {"<gtl_factor>", "gtl_expression_parser", 229}, // at index 58
 {"<gtl_factor>", "gtl_expression_parser", 233}, // at index 59
 {"<gtl_factor>", "gtl_expression_parser", 237}, // at index 60
 {"<gtl_sorting_order>", "gtl_instruction_parser", 241}, // at index 61
 {"<select_gtl_5F_parser_0>", "gtl_parser", 243}, // at index 62
 {"<select_gtl_5F_parser_0>", "gtl_parser", 244}, // at index 63
 {"<select_gtl_5F_parser_1>", "gtl_parser", 247}, // at index 64
 {"<select_gtl_5F_parser_1>", "gtl_parser", 248}, // at index 65
 {"<select_gtl_5F_parser_1>", "gtl_parser", 251}, // at index 66
 {"<select_gtl_5F_parser_2>", "gtl_parser", 254}, // at index 67
 {"<select_gtl_5F_parser_2>", "gtl_parser", 256}, // at index 68
 {"<select_gtl_5F_parser_3>", "gtl_parser", 257}, // at index 69
 {"<select_gtl_5F_parser_3>", "gtl_parser", 261}, // at index 70
 {"<select_gtl_5F_parser_4>", "gtl_parser", 262}, // at index 71
 {"<select_gtl_5F_parser_4>", "gtl_parser", 265}, // at index 72
 {"<select_gtl_5F_parser_5>", "gtl_parser", 266}, // at index 73
 {"<select_gtl_5F_parser_5>", "gtl_parser", 267}, // at index 74
 {"<select_gtl_5F_parser_6>", "gtl_parser", 271}, // at index 75
 {"<select_gtl_5F_parser_6>", "gtl_parser", 277}, // at index 76
 {"<select_gtl_5F_parser_7>", "gtl_parser", 280}, // at index 77
 {"<select_gtl_5F_parser_7>", "gtl_parser", 283}, // at index 78
 {"<select_gtl_5F_parser_8>", "gtl_parser", 284}, // at index 79
 {"<select_gtl_5F_parser_8>", "gtl_parser", 289}, // at index 80
 {"<select_gtl_5F_parser_9>", "gtl_parser", 290}, // at index 81
 {"<select_gtl_5F_parser_9>", "gtl_parser", 293}, // at index 82
 {"<select_gtl_5F_parser_10>", "gtl_parser", 294}, // at index 83
 {"<select_gtl_5F_parser_10>", "gtl_parser", 295}, // at index 84
 {"<select_gtl_5F_parser_11>", "gtl_parser", 301}, // at index 85
 {"<select_gtl_5F_parser_11>", "gtl_parser", 304}, // at index 86
 {"<select_gtl_5F_parser_12>", "gtl_parser", 305}, // at index 87
 {"<select_gtl_5F_parser_12>", "gtl_parser", 308}, // at index 88
 {"<select_gtl_5F_parser_13>", "gtl_parser", 309}, // at index 89
 {"<select_gtl_5F_parser_13>", "gtl_parser", 313}, // at index 90
 {"<select_gtl_5F_parser_14>", "gtl_parser", 314}, // at index 91
 {"<select_gtl_5F_parser_14>", "gtl_parser", 317}, // at index 92
 {"<select_gtl_5F_parser_15>", "gtl_parser", 318}, // at index 93
 {"<select_gtl_5F_parser_15>", "gtl_parser", 321}, // at index 94
 {"<select_gtl_5F_parser_16>", "gtl_parser", 322}, // at index 95
 {"<select_gtl_5F_parser_16>", "gtl_parser", 325}, // at index 96
 {"<select_gtl_5F_parser_17>", "gtl_parser", 326}, // at index 97
 {"<select_gtl_5F_parser_17>", "gtl_parser", 327}, // at index 98
 {"<select_gtl_5F_parser_18>", "gtl_parser", 331}, // at index 99
 {"<select_gtl_5F_parser_18>", "gtl_parser", 334}, // at index 100
 {"<select_gtl_5F_parser_19>", "gtl_parser", 335}, // at index 101
 {"<select_gtl_5F_parser_19>", "gtl_parser", 336}, // at index 102
 {"<select_gtl_5F_parser_19>", "gtl_parser", 338}, // at index 103
 {"<select_gtl_5F_parser_20>", "gtl_parser", 340}, // at index 104
 {"<select_gtl_5F_parser_20>", "gtl_parser", 343}, // at index 105
 {"<select_gtl_5F_parser_21>", "gtl_parser", 344}, // at index 106
 {"<select_gtl_5F_parser_21>", "gtl_parser", 347}, // at index 107
 {"<select_gtl_5F_parser_22>", "gtl_parser", 348}, // at index 108
 {"<select_gtl_5F_parser_22>", "gtl_parser", 351}, // at index 109
 {"<select_gtl_5F_parser_23>", "gtl_parser", 352}, // at index 110
 {"<select_gtl_5F_parser_23>", "gtl_parser", 355}, // at index 111
 {"<select_gtl_5F_parser_24>", "gtl_parser", 356}, // at index 112
 {"<select_gtl_5F_parser_24>", "gtl_parser", 360}, // at index 113
 {"<select_gtl_5F_parser_25>", "gtl_parser", 361}, // at index 114
 {"<select_gtl_5F_parser_25>", "gtl_parser", 363}, // at index 115
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 366}, // at index 116
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 367}, // at index 117
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 371}, // at index 118
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 375}, // at index 119
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 376}, // at index 120
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 380}, // at index 121
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 381}, // at index 122
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 384}, // at index 123
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 387}, // at index 124
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 390}, // at index 125
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 393}, // at index 126
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 396}, // at index 127
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 399}, // at index 128
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 400}, // at index 129
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 404}, // at index 130
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 408}, // at index 131
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 412}, // at index 132
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 416}, // at index 133
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 420}, // at index 134
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 421}, // at index 135
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 425}, // at index 136
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 429}, // at index 137
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 433}, // at index 138
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 434}, // at index 139
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 438}, // at index 140
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 439}, // at index 141
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 443}, // at index 142
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 444}, // at index 143
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 448}, // at index 144
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 451}, // at index 145
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 452}, // at index 146
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 453}, // at index 147
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 457}, // at index 148
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 462}, // at index 149
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 463}, // at index 150
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 466}, // at index 151
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 468}, // at index 152
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 471}, // at index 153
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 472}, // at index 154
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 473}, // at index 155
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 477}, // at index 156
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 482}, // at index 157
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 483}, // at index 158
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 484}, // at index 159
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 490}, // at index 160
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 495}, // at index 161
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 496}, // at index 162
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 497}, // at index 163
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 503}, // at index 164
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 506}, // at index 165
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 507}, // at index 166
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 508}, // at index 167
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 512}, // at index 168
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 513}, // at index 169
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 518}, // at index 170
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 523}, // at index 171
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 524}, // at index 172
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 529}, // at index 173
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 530}, // at index 174
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 531}, // at index 175
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 536}, // at index 176
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 538}, // at index 177
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 540}, // at index 178
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 544}, // at index 179
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 545}, // at index 180
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 546}, // at index 181
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 551}, // at index 182
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 555}, // at index 183
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 556}, // at index 184
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 559}, // at index 185
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 562}, // at index 186
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 565}, // at index 187
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 568}, // at index 188
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 571}, // at index 189
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 574}, // at index 190
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 577}, // at index 191
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 580}, // at index 192
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 583}, // at index 193
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 586}, // at index 194
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 589}, // at index 195
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 590}, // at index 196
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 592}, // at index 197
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 593}, // at index 198
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 598}, // at index 199
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 600}, // at index 200
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 601}, // at index 201
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 606}, // at index 202
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 607}, // at index 203
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 611}, // at index 204
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 612}, // at index 205
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 616}, // at index 206
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 618}, // at index 207
 {"<>", "", 620} // at index 208
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_gtl_grammar [209] = {
0, // index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
3, // index 1 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 667
7, // index 2 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 702
9, // index 3 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 367
12, // index 4 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
16, // index 5 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
19, // index 6 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
24, // index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
29, // index 8 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
32, // index 9 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
35, // index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
38, // index 11 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 255
42, // index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 288
45, // index 13 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 302
47, // index 14 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 314
49, // index 15 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 325
55, // index 16 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 716
59, // index 17 : <gtl_start_symbol>, in file 'gtl_parser.ggs', line 50
62, // index 18 : <gtl_template_instruction_list>, in file 'gtl_parser.ggs', line 63
64, // index 19 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 90
67, // index 20 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 108
76, // index 21 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 128
80, // index 22 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 183
83, // index 23 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 196
92, // index 24 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 228
106, // index 25 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 289
117, // index 26 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 331
133, // index 27 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 397
143, // index 28 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 430
146, // index 29 : <gtl_file_name>, in file 'gtl_parser.ggs', line 443
148, // index 30 : <gtl_relation_term>, in file 'gtl_expression_parser.ggs', line 53
151, // index 31 : <gtl_relation_factor>, in file 'gtl_expression_parser.ggs', line 69
154, // index 32 : <gtl_simple_expression>, in file 'gtl_expression_parser.ggs', line 117
157, // index 33 : <gtl_term>, in file 'gtl_expression_parser.ggs', line 162
160, // index 34 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 192
164, // index 35 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 208
167, // index 36 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 220
170, // index 37 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 232
173, // index 38 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 244
176, // index 39 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 256
178, // index 40 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 269
180, // index 41 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 282
182, // index 42 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 295
184, // index 43 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 308
186, // index 44 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 321
188, // index 45 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 335
194, // index 46 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 369
197, // index 47 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 401
201, // index 48 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 420
204, // index 49 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 429
206, // index 50 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 445
208, // index 51 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 461
210, // index 52 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 477
213, // index 53 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 514
215, // index 54 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 533
217, // index 55 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 552
221, // index 56 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 576
225, // index 57 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 587
229, // index 58 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 606
233, // index 59 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 627
237, // index 60 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 648
241, // index 61 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 354
243, // index 62 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
244, // index 63 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
247, // index 64 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
248, // index 65 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
251, // index 66 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
254, // index 67 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
256, // index 68 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
257, // index 69 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
261, // index 70 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
262, // index 71 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
265, // index 72 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
266, // index 73 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
267, // index 74 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
271, // index 75 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
277, // index 76 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
280, // index 77 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
283, // index 78 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
284, // index 79 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
289, // index 80 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
290, // index 81 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
293, // index 82 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
294, // index 83 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
295, // index 84 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
301, // index 85 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
304, // index 86 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
305, // index 87 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
308, // index 88 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
309, // index 89 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
313, // index 90 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
314, // index 91 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
317, // index 92 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
318, // index 93 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
321, // index 94 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
322, // index 95 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
325, // index 96 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
326, // index 97 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
327, // index 98 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
331, // index 99 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
334, // index 100 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
335, // index 101 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
336, // index 102 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
338, // index 103 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
340, // index 104 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
343, // index 105 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
344, // index 106 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
347, // index 107 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
348, // index 108 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
351, // index 109 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
352, // index 110 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
355, // index 111 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
356, // index 112 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
360, // index 113 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
361, // index 114 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
363, // index 115 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
366, // index 116 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
367, // index 117 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
371, // index 118 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
375, // index 119 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
376, // index 120 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
380, // index 121 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
381, // index 122 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
384, // index 123 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
387, // index 124 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
390, // index 125 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
393, // index 126 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
396, // index 127 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
399, // index 128 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
400, // index 129 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
404, // index 130 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
408, // index 131 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
412, // index 132 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
416, // index 133 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
420, // index 134 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
421, // index 135 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
425, // index 136 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
429, // index 137 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
433, // index 138 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
434, // index 139 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
438, // index 140 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
439, // index 141 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
443, // index 142 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
444, // index 143 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
448, // index 144 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
451, // index 145 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
452, // index 146 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
453, // index 147 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
457, // index 148 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
462, // index 149 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
463, // index 150 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
466, // index 151 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
468, // index 152 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
471, // index 153 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
472, // index 154 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
473, // index 155 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
477, // index 156 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
482, // index 157 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
483, // index 158 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
484, // index 159 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
490, // index 160 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
495, // index 161 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
496, // index 162 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
497, // index 163 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
503, // index 164 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
506, // index 165 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
507, // index 166 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
508, // index 167 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
512, // index 168 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
513, // index 169 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 671
518, // index 170 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
523, // index 171 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 673
524, // index 172 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
529, // index 173 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 678
530, // index 174 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
531, // index 175 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 683
536, // index 176 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
538, // index 177 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 706
540, // index 178 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
544, // index 179 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 721
545, // index 180 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
546, // index 181 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 722
551, // index 182 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
555, // index 183 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 724
556, // index 184 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
559, // index 185 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
562, // index 186 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
565, // index 187 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
568, // index 188 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
571, // index 189 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
574, // index 190 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
577, // index 191 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
580, // index 192 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
583, // index 193 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
586, // index 194 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
589, // index 195 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
590, // index 196 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
592, // index 197 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
593, // index 198 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
598, // index 199 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
600, // index 200 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
601, // index 201 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
606, // index 202 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
607, // index 203 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
611, // index 204 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
612, // index 205 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
616, // index 206 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
618, // index 207 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
620 // index 208 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_gtl_grammar [79] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_variable_or_here>
3, // at 3 : <gtl_import>
4, // at 4 : <gtl_simple_instruction>
16, // at 5 : <gtl_argument_list>
17, // at 6 : <gtl_start_symbol>
18, // at 7 : <gtl_template_instruction_list>
19, // at 8 : <gtl_template_instruction>
29, // at 9 : <gtl_file_name>
30, // at 10 : <gtl_relation_term>
31, // at 11 : <gtl_relation_factor>
32, // at 12 : <gtl_simple_expression>
33, // at 13 : <gtl_term>
34, // at 14 : <gtl_factor>
61, // at 15 : <gtl_sorting_order>
62, // at 16 : <select_gtl_5F_parser_0>
64, // at 17 : <select_gtl_5F_parser_1>
67, // at 18 : <select_gtl_5F_parser_2>
69, // at 19 : <select_gtl_5F_parser_3>
71, // at 20 : <select_gtl_5F_parser_4>
73, // at 21 : <select_gtl_5F_parser_5>
75, // at 22 : <select_gtl_5F_parser_6>
77, // at 23 : <select_gtl_5F_parser_7>
79, // at 24 : <select_gtl_5F_parser_8>
81, // at 25 : <select_gtl_5F_parser_9>
83, // at 26 : <select_gtl_5F_parser_10>
85, // at 27 : <select_gtl_5F_parser_11>
87, // at 28 : <select_gtl_5F_parser_12>
89, // at 29 : <select_gtl_5F_parser_13>
91, // at 30 : <select_gtl_5F_parser_14>
93, // at 31 : <select_gtl_5F_parser_15>
95, // at 32 : <select_gtl_5F_parser_16>
97, // at 33 : <select_gtl_5F_parser_17>
99, // at 34 : <select_gtl_5F_parser_18>
101, // at 35 : <select_gtl_5F_parser_19>
104, // at 36 : <select_gtl_5F_parser_20>
106, // at 37 : <select_gtl_5F_parser_21>
108, // at 38 : <select_gtl_5F_parser_22>
110, // at 39 : <select_gtl_5F_parser_23>
112, // at 40 : <select_gtl_5F_parser_24>
114, // at 41 : <select_gtl_5F_parser_25>
116, // at 42 : <select_gtl_5F_expression_5F_parser_0>
119, // at 43 : <select_gtl_5F_expression_5F_parser_1>
121, // at 44 : <select_gtl_5F_expression_5F_parser_2>
128, // at 45 : <select_gtl_5F_expression_5F_parser_3>
134, // at 46 : <select_gtl_5F_expression_5F_parser_4>
138, // at 47 : <select_gtl_5F_expression_5F_parser_5>
140, // at 48 : <select_gtl_5F_expression_5F_parser_6>
142, // at 49 : <select_gtl_5F_expression_5F_parser_7>
144, // at 50 : <select_gtl_5F_expression_5F_parser_8>
146, // at 51 : <select_gtl_5F_expression_5F_parser_9>
148, // at 52 : <select_gtl_5F_expression_5F_parser_10>
150, // at 53 : <select_gtl_5F_expression_5F_parser_11>
152, // at 54 : <select_gtl_5F_expression_5F_parser_12>
154, // at 55 : <select_gtl_5F_expression_5F_parser_13>
156, // at 56 : <select_gtl_5F_expression_5F_parser_14>
158, // at 57 : <select_gtl_5F_expression_5F_parser_15>
160, // at 58 : <select_gtl_5F_expression_5F_parser_16>
162, // at 59 : <select_gtl_5F_expression_5F_parser_17>
164, // at 60 : <select_gtl_5F_expression_5F_parser_18>
166, // at 61 : <select_gtl_5F_expression_5F_parser_19>
168, // at 62 : <select_gtl_5F_expression_5F_parser_20>
170, // at 63 : <select_gtl_5F_expression_5F_parser_21>
172, // at 64 : <select_gtl_5F_expression_5F_parser_22>
174, // at 65 : <select_gtl_5F_expression_5F_parser_23>
176, // at 66 : <select_gtl_5F_expression_5F_parser_24>
178, // at 67 : <select_gtl_5F_expression_5F_parser_25>
180, // at 68 : <select_gtl_5F_expression_5F_parser_26>
182, // at 69 : <select_gtl_5F_expression_5F_parser_27>
184, // at 70 : <select_gtl_5F_instruction_5F_parser_0>
196, // at 71 : <select_gtl_5F_instruction_5F_parser_1>
198, // at 72 : <select_gtl_5F_instruction_5F_parser_2>
200, // at 73 : <select_gtl_5F_instruction_5F_parser_3>
202, // at 74 : <select_gtl_5F_instruction_5F_parser_4>
204, // at 75 : <select_gtl_5F_instruction_5F_parser_5>
206, // at 76 : <select_gtl_5F_instruction_5F_parser_6>
208, // at 77 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_gtl_grammar [] = {
// At index 0 : <gtl_expression> only one production, no choice
  -1,
// At index 1 : <gtl_variable> only one production, no choice
  -1,
// At index 2 : <gtl_variable_or_here> only one production, no choice
  -1,
// At index 3 : <gtl_import> only one production, no choice
  -1,
// At index 4 : <gtl_simple_instruction>
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
// At index 29 : <gtl_argument_list> only one production, no choice
  -1,
// At index 30 : <gtl_start_symbol> only one production, no choice
  -1,
// At index 31 : <gtl_template_instruction_list> only one production, no choice
  -1,
// At index 32 : <gtl_template_instruction>
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_write, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_template, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken_if, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_foreach, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken_for, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken_loop, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken_repeat, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken_input, -1, // Choice 10
  -1,
// At index 53 : <gtl_file_name> only one production, no choice
  -1,
// At index 54 : <gtl_relation_term> only one production, no choice
  -1,
// At index 55 : <gtl_relation_factor> only one production, no choice
  -1,
// At index 56 : <gtl_simple_expression> only one production, no choice
  -1,
// At index 57 : <gtl_term> only one production, no choice
  -1,
// At index 58 : <gtl_factor>
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
// At index 113 : <gtl_sorting_order> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 114 : <select_gtl_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_import, -1, // Choice 2
  -1,
// At index 141 : <select_gtl_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_input, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 3
  -1,
// At index 175 : <select_gtl_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_executable, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 2
  -1,
// At index 206 : <select_gtl_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_from, -1, // Choice 2
  -1,
// At index 213 : <select_gtl_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 244 : <select_gtl_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 249 : <select_gtl_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken_if, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_from, -1, // Choice 2
  -1,
// At index 255 : <select_gtl_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 290 : <select_gtl_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken_or, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 324 : <select_gtl_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 358 : <select_gtl_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_elsif, -1, // Choice 2
  -1,
// At index 364 : <select_gtl_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 369 : <select_gtl_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 375 : <select_gtl_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 380 : <select_gtl_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 385 : <select_gtl_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 391 : <select_gtl_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 396 : <select_gtl_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 401 : <select_gtl_5F_parser_18>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 406 : <select_gtl_5F_parser_19>
C_Lexique_gtl_5F_scanner::kToken_to, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_up, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_down, -1, // Choice 3
  -1,
// At index 413 : <select_gtl_5F_parser_20>
C_Lexique_gtl_5F_scanner::kToken_step, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 419 : <select_gtl_5F_parser_21>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 424 : <select_gtl_5F_parser_22>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 430 : <select_gtl_5F_parser_23>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 435 : <select_gtl_5F_parser_24>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 2
  -1,
// At index 462 : <select_gtl_5F_parser_25>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_from, -1, // Choice 2
  -1,
// At index 467 : <select_gtl_5F_expression_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__5E_, -1, // Choice 3
  -1,
// At index 518 : <select_gtl_5F_expression_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 569 : <select_gtl_5F_expression_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3D__3D_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__21__3D_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__3C__3D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__3E__3D_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 7
  -1,
// At index 631 : <select_gtl_5F_expression_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C__3C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__3E__3E_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2B_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2E_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__2D_, -1, // Choice 6
  -1,
// At index 697 : <select_gtl_5F_expression_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__2F_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_mod, -1, // Choice 4
  -1,
// At index 764 : <select_gtl_5F_expression_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 769 : <select_gtl_5F_expression_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 774 : <select_gtl_5F_expression_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 840 : <select_gtl_5F_expression_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 871 : <select_gtl_5F_expression_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 876 : <select_gtl_5F_expression_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_default, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 942 : <select_gtl_5F_expression_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 947 : <select_gtl_5F_expression_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 978 : <select_gtl_5F_expression_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 983 : <select_gtl_5F_expression_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 2
  -1,
// At index 988 : <select_gtl_5F_expression_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 993 : <select_gtl_5F_expression_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 2
  -1,
// At index 998 : <select_gtl_5F_expression_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1003 : <select_gtl_5F_expression_5F_parser_18>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 1034 : <select_gtl_5F_expression_5F_parser_19>
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1039 : <select_gtl_5F_expression_5F_parser_20>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1118 : <select_gtl_5F_expression_5F_parser_21>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1198 : <select_gtl_5F_expression_5F_parser_22>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1278 : <select_gtl_5F_expression_5F_parser_23>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 2
  -1,
// At index 1358 : <select_gtl_5F_expression_5F_parser_24>
C_Lexique_gtl_5F_scanner::kToken_here, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 1363 : <select_gtl_5F_expression_5F_parser_25>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1368 : <select_gtl_5F_expression_5F_parser_26>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1373 : <select_gtl_5F_expression_5F_parser_27>
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1379 : <select_gtl_5F_instruction_5F_parser_0>
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
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 12
  -1,
// At index 1433 : <select_gtl_5F_instruction_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1493 : <select_gtl_5F_instruction_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 1499 : <select_gtl_5F_instruction_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1533 : <select_gtl_5F_instruction_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 1538 : <select_gtl_5F_instruction_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1543 : <select_gtl_5F_instruction_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 1548 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_gtl_grammar [79] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_variable_or_here>
3, // at 3 : <gtl_import>
4, // at 4 : <gtl_simple_instruction>
29, // at 5 : <gtl_argument_list>
30, // at 6 : <gtl_start_symbol>
31, // at 7 : <gtl_template_instruction_list>
32, // at 8 : <gtl_template_instruction>
53, // at 9 : <gtl_file_name>
54, // at 10 : <gtl_relation_term>
55, // at 11 : <gtl_relation_factor>
56, // at 12 : <gtl_simple_expression>
57, // at 13 : <gtl_term>
58, // at 14 : <gtl_factor>
113, // at 15 : <gtl_sorting_order>
114, // at 16 : <select_gtl_5F_parser_0>
141, // at 17 : <select_gtl_5F_parser_1>
175, // at 18 : <select_gtl_5F_parser_2>
206, // at 19 : <select_gtl_5F_parser_3>
213, // at 20 : <select_gtl_5F_parser_4>
244, // at 21 : <select_gtl_5F_parser_5>
249, // at 22 : <select_gtl_5F_parser_6>
255, // at 23 : <select_gtl_5F_parser_7>
290, // at 24 : <select_gtl_5F_parser_8>
324, // at 25 : <select_gtl_5F_parser_9>
358, // at 26 : <select_gtl_5F_parser_10>
364, // at 27 : <select_gtl_5F_parser_11>
369, // at 28 : <select_gtl_5F_parser_12>
375, // at 29 : <select_gtl_5F_parser_13>
380, // at 30 : <select_gtl_5F_parser_14>
385, // at 31 : <select_gtl_5F_parser_15>
391, // at 32 : <select_gtl_5F_parser_16>
396, // at 33 : <select_gtl_5F_parser_17>
401, // at 34 : <select_gtl_5F_parser_18>
406, // at 35 : <select_gtl_5F_parser_19>
413, // at 36 : <select_gtl_5F_parser_20>
419, // at 37 : <select_gtl_5F_parser_21>
424, // at 38 : <select_gtl_5F_parser_22>
430, // at 39 : <select_gtl_5F_parser_23>
435, // at 40 : <select_gtl_5F_parser_24>
462, // at 41 : <select_gtl_5F_parser_25>
467, // at 42 : <select_gtl_5F_expression_5F_parser_0>
518, // at 43 : <select_gtl_5F_expression_5F_parser_1>
569, // at 44 : <select_gtl_5F_expression_5F_parser_2>
631, // at 45 : <select_gtl_5F_expression_5F_parser_3>
697, // at 46 : <select_gtl_5F_expression_5F_parser_4>
764, // at 47 : <select_gtl_5F_expression_5F_parser_5>
769, // at 48 : <select_gtl_5F_expression_5F_parser_6>
774, // at 49 : <select_gtl_5F_expression_5F_parser_7>
840, // at 50 : <select_gtl_5F_expression_5F_parser_8>
871, // at 51 : <select_gtl_5F_expression_5F_parser_9>
876, // at 52 : <select_gtl_5F_expression_5F_parser_10>
942, // at 53 : <select_gtl_5F_expression_5F_parser_11>
947, // at 54 : <select_gtl_5F_expression_5F_parser_12>
978, // at 55 : <select_gtl_5F_expression_5F_parser_13>
983, // at 56 : <select_gtl_5F_expression_5F_parser_14>
988, // at 57 : <select_gtl_5F_expression_5F_parser_15>
993, // at 58 : <select_gtl_5F_expression_5F_parser_16>
998, // at 59 : <select_gtl_5F_expression_5F_parser_17>
1003, // at 60 : <select_gtl_5F_expression_5F_parser_18>
1034, // at 61 : <select_gtl_5F_expression_5F_parser_19>
1039, // at 62 : <select_gtl_5F_expression_5F_parser_20>
1118, // at 63 : <select_gtl_5F_expression_5F_parser_21>
1198, // at 64 : <select_gtl_5F_expression_5F_parser_22>
1278, // at 65 : <select_gtl_5F_expression_5F_parser_23>
1358, // at 66 : <select_gtl_5F_expression_5F_parser_24>
1363, // at 67 : <select_gtl_5F_expression_5F_parser_25>
1368, // at 68 : <select_gtl_5F_expression_5F_parser_26>
1373, // at 69 : <select_gtl_5F_expression_5F_parser_27>
1379, // at 70 : <select_gtl_5F_instruction_5F_parser_0>
1433, // at 71 : <select_gtl_5F_instruction_5F_parser_1>
1493, // at 72 : <select_gtl_5F_instruction_5F_parser_2>
1499, // at 73 : <select_gtl_5F_instruction_5F_parser_3>
1533, // at 74 : <select_gtl_5F_instruction_5F_parser_4>
1538, // at 75 : <select_gtl_5F_instruction_5F_parser_5>
1543, // at 76 : <select_gtl_5F_instruction_5F_parser_6>
1548, // at 77 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_expression' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_expression_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_expression_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'gtl_variable' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i32_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_ (GALGAS_gtlVarPath & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i32_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_variable_or_here' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i33_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & parameter_1,
                                GALGAS_bool & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i33_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_import' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_import_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i13_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_import_ (GALGAS_gtlContext parameter_1,
                                GALGAS_library & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i13_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_instruction' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inLexique) {
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

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_instruction_ (GALGAS_gtlInstruction & parameter_1,
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
//                                  'gtl_argument_list' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_argument_5F_list_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i34_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i34_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'gtl_start_symbol' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_start_5F_symbol_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_start_5F_symbol_ (GALGAS_gtlContext parameter_1,
                                GALGAS_library & parameter_2,
                                GALGAS_gtlInstructionList & parameter_3,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_start_5F_symbol_i0_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

void cGrammar_gtl_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_gtl_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_gtl_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performTopDownParsing (gProductions_gtl_grammar, gProductionNames_gtl_grammar, gProductionIndexes_gtl_grammar,
                                    gFirstProductionIndexes_gtl_grammar, gDecision_gtl_grammar, gDecisionIndexes_gtl_grammar, 620) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_gtlContext  parameter_1,
                                GALGAS_library &  parameter_2,
                                GALGAS_gtlInstructionList &  parameter_3
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
      const bool ok = scanner->performTopDownParsing (gProductions_gtl_grammar, gProductionNames_gtl_grammar, gProductionIndexes_gtl_grammar,
                                                      gFirstProductionIndexes_gtl_grammar, gDecision_gtl_grammar, gDecisionIndexes_gtl_grammar, 620) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_gtl_5F_grammar grammar ;
        grammar.nt_gtl_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
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

void cGrammar_gtl_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_gtlContext  parameter_1,
                                GALGAS_library &  parameter_2,
                                GALGAS_gtlInstructionList &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_gtl_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_gtl_grammar, gProductionNames_gtl_grammar, gProductionIndexes_gtl_grammar,
                                                    gFirstProductionIndexes_gtl_grammar, gDecision_gtl_grammar, gDecisionIndexes_gtl_grammar, 620) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_gtl_5F_grammar grammar ;
      grammar.nt_gtl_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'gtl_template_instruction_list' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_5F_list_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_template_5F_instruction_5F_list_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_5F_list_ (GALGAS_gtlInstructionList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_template_5F_instruction_5F_list_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'gtl_template_instruction' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i2_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i3_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i4_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i5_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i6_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i7_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i8_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i9_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i10_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i11_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i2_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i3_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i4_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i5_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i6_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i7_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i8_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i9_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i10_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i11_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_file_name' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_file_5F_name_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_file_5F_name_i12_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_file_5F_name_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_file_5F_name_i12_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_relation_term' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_relation_factor' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_expression' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'gtl_term' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_term_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_term_i4_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_term_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_factor' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_scanner * inLexique) {
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

void cGrammar_gtl_5F_grammar::nt_gtl_5F_factor_ (GALGAS_gtlExpression & parameter_1,
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
//                                  'gtl_sorting_order' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_sorting_5F_order_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i12_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_sorting_5F_order_ (GALGAS_lsint & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i12_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_0' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_1' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_2' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_3' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_4' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_5' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_6' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_7' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_8' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_8 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_9' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_9 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_10' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_10 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_11' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_11 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_12' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_12 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_13' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_13 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_14' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_14 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_15' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_15 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_16' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_16 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_17' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_17 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_18' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_18 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_19' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_19 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_20' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_20 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_21' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_21 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_22' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_22 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_23' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_23 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_24' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_24 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_25' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_25 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_0' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_1' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_2' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_3' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_4' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_5' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_6' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_7' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_8' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_9' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_10' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_11' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_12' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_13' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_14' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_15' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_16' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_17' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_18' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_19' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_20' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_21' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_22' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_23' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_24' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_24 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_25' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_25 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_26' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_26 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_27' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_27 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_0' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_1' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_2' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_3' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_4' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_5' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_6' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
// At index 29 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 255
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_sort) // $sort$
, NONTERMINAL (10) // <gtl_variable>
, NONTERMINAL (38) // <select_gtl_5F_instruction_5F_parser_2>
, END_PRODUCTION
// At index 33 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 288
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_tab) // $tab$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 36 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 302
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 38 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 314
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_libraries) // $libraries$
, END_PRODUCTION
// At index 40 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 325
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B__21_) // $[!$
, NONTERMINAL (10) // <gtl_variable>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (40) // <select_gtl_5F_instruction_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 46 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 367
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
// At index 108 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 262
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
// At index 119 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 302
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
// At index 135 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 362
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
// At index 151 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 354
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
// At index 299 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 276
, END_PRODUCTION
// At index 300 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 276
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (28) // <select_gtl_5F_module_5F_parser_10>
, END_PRODUCTION
// At index 304 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 286
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 307 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 286
, END_PRODUCTION
// At index 308 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 319
, END_PRODUCTION
// At index 309 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 319
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_up) // $up$
, END_PRODUCTION
// At index 311 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 319
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_down) // $down$
, END_PRODUCTION
// At index 313 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 327
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_step) // $step$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 316 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 327
, END_PRODUCTION
// At index 317 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 332
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 320 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 332
, END_PRODUCTION
// At index 321 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 340
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 324 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 340
, END_PRODUCTION
// At index 325 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 345
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (4) // <gtl_instruction_list>
, END_PRODUCTION
// At index 328 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 345
, END_PRODUCTION
// At index 329 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 368
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 333 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 368
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
// At index 368 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 370 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, END_PRODUCTION
// At index 371 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <gtl_sorting_order>
, NONTERMINAL (39) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 376 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
, NONTERMINAL (12) // <gtl_sorting_order>
, END_PRODUCTION
// At index 378 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
, END_PRODUCTION
// At index 379 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (12) // <gtl_sorting_order>
, NONTERMINAL (39) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 384 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
, END_PRODUCTION
// At index 385 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 389 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
, END_PRODUCTION
// At index 390 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_instruction_5F_parser_5>
, END_PRODUCTION
// At index 394 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, END_PRODUCTION
// At index 396 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
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
7, // index 2 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
10, // index 3 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
15, // index 4 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
20, // index 5 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
23, // index 6 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
26, // index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
29, // index 8 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 255
33, // index 9 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 288
36, // index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 302
38, // index 11 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 314
40, // index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 325
46, // index 13 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 367
49, // index 14 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 716
53, // index 15 : <gtl_instruction_list>, in file 'gtl_module_parser.ggs', line 45
55, // index 16 : <gtl_module_start_symbol>, in file 'gtl_module_parser.ggs', line 73
58, // index 17 : <gtl_function>, in file 'gtl_module_parser.ggs', line 98
66, // index 18 : <gtl_getter>, in file 'gtl_module_parser.ggs', line 117
76, // index 19 : <gtl_setter>, in file 'gtl_module_parser.ggs', line 142
85, // index 20 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 165
94, // index 21 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 198
108, // index 22 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 262
119, // index 23 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 302
135, // index 24 : <gtl_instruction>, in file 'gtl_module_parser.ggs', line 362
145, // index 25 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 667
149, // index 26 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 702
151, // index 27 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 354
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
299, // index 82 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 276
300, // index 83 : <select_gtl_5F_module_5F_parser_10>, in file 'gtl_module_parser.ggs', line 276
304, // index 84 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 286
307, // index 85 : <select_gtl_5F_module_5F_parser_11>, in file 'gtl_module_parser.ggs', line 286
308, // index 86 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 319
309, // index 87 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 319
311, // index 88 : <select_gtl_5F_module_5F_parser_12>, in file 'gtl_module_parser.ggs', line 319
313, // index 89 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 327
316, // index 90 : <select_gtl_5F_module_5F_parser_13>, in file 'gtl_module_parser.ggs', line 327
317, // index 91 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 332
320, // index 92 : <select_gtl_5F_module_5F_parser_14>, in file 'gtl_module_parser.ggs', line 332
321, // index 93 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 340
324, // index 94 : <select_gtl_5F_module_5F_parser_15>, in file 'gtl_module_parser.ggs', line 340
325, // index 95 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 345
328, // index 96 : <select_gtl_5F_module_5F_parser_16>, in file 'gtl_module_parser.ggs', line 345
329, // index 97 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 368
333, // index 98 : <select_gtl_5F_module_5F_parser_17>, in file 'gtl_module_parser.ggs', line 368
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
368, // index 111 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
370, // index 112 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
371, // index 113 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
376, // index 114 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 260
378, // index 115 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
379, // index 116 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 263
384, // index 117 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
385, // index 118 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 333
389, // index 119 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
390, // index 120 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 336
394, // index 121 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
396, // index 122 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 357
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
  {
  inArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_1096 = (cPtr_gtlContext *) inArgument_context.ptr () ;
  callExtensionSetter_setDebugger ((cPtr_gtlContext *) ptr_1096, GALGAS_bool (gOption_gtl_5F_options_debug.getter_value ()), inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 37)) ;
  }
  {
  inArgument_context.insulate (HERE) ;
  cPtr_gtlContext * ptr_1156 = (cPtr_gtlContext *) inArgument_context.ptr () ;
  callExtensionSetter_setBreakOnNext ((cPtr_gtlContext *) ptr_1156, inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 38)) ;
  }
  GALGAS_gtlTemplateInstruction var_rootTemplateInstruction_1256 = GALGAS_gtlTemplateInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_interface.galgas", 42)), GALGAS_string::makeEmptyString (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 44)), GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_interface.galgas", 46)), inArgument_rootTemplateFileName  COMMA_SOURCE_FILE ("gtl_interface.galgas", 45)), GALGAS_bool (false), GALGAS_bool (true), GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_interface.galgas", 51)), GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_interface.galgas", 52))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 41)) ;
  GALGAS_library var_lib_1649 = function_emptyLib (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 56)) ;
  callExtensionMethod_execute ((const cPtr_gtlTemplateInstruction *) var_rootTemplateInstruction_1256.ptr (), inArgument_context, inArgument_vars, var_lib_1649, result_result, inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 58)) ;
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
  result_result = GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_interface.galgas", 72)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 72)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_interface.galgas", 72))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 72)) ;
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
  result_output = GALGAS_gtlString::constructor_new (inArgument_input.getter_location (SOURCE_FILE ("gtl_interface.galgas", 82)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 82)), inArgument_input.getter_string (SOURCE_FILE ("gtl_interface.galgas", 82))  COMMA_SOURCE_FILE ("gtl_interface.galgas", 82)) ;
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
  result_output = GALGAS_gtlString::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("gtl_interface.galgas", 92)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_interface.galgas", 92)), inArgument_input  COMMA_SOURCE_FILE ("gtl_interface.galgas", 92)) ;
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
  result_context = GALGAS_gtlContext::constructor_new (function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 44)), GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString (), GALGAS_string ("gtl"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_types.galgas", 48)), GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_types.galgas", 49)), function_defaultDebugSettings (inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 50))  COMMA_SOURCE_FILE ("gtl_types.galgas", 43)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_path.getter_pathExtension (SOURCE_FILE ("gtl_types.galgas", 92)).objectCompare (inArgument_context.getter_templateExtension (SOURCE_FILE ("gtl_types.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_extendedPath = inArgument_path.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 93)).add_operation (inArgument_context.getter_templateExtension (SOURCE_FILE ("gtl_types.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 93)) ;
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
  result_result = GALGAS_library::constructor_new (GALGAS_gtlFuncMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 279)), GALGAS_gtlGetterMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 279)), GALGAS_gtlSetterMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 279)), GALGAS_gtlTemplateMap::constructor_emptyMap (SOURCE_FILE ("gtl_types.galgas", 279)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("gtl_types.galgas", 279))  COMMA_SOURCE_FILE ("gtl_types.galgas", 279)) ;
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
                                                          const GALGAS_location & /* inErrorLocation */
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
                                                          const GALGAS_location & /* inErrorLocation */
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
                                                      const GALGAS_location & /* inErrorLocation */
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
                                                          const GALGAS_location & /* inErrorLocation */
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
                                                           const GALGAS_location & /* inErrorLocation */
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
                                                              const GALGAS_location & /* inErrorLocation */
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
                                                           const GALGAS_location & /* inErrorLocation */
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
                                                            const GALGAS_location & /* inErrorLocation */
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_formalType.objectCompare (callExtensionGetter_embeddedType ((const cPtr_gtlData *) constinArgument_actualArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1191)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1192)), extensionGetter_typeName (constinArgument_formalType, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1192)).add_operation (GALGAS_string (" expected for argument "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1192)).add_operation (constinArgument_argumentNum.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1192)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1192)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)).add_operation (extensionGetter_typeName (constinArgument_actualArgument.getter_dynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1193)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1193)), fixItArray1  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1192)) ;
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
  GALGAS_type var_returnedType_36172 = constinArgument_returnedValue.getter_objectDynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1203)) ;
  GALGAS_location var_loc_36224 = constinArgument_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1204)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_returnedType_36172.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bigint))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_gtlInt::constructor_new (var_loc_36224, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1206)), GALGAS_bigint::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1206))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1206)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_returnedType_36172.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_double))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result = GALGAS_gtlFloat::constructor_new (var_loc_36224, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1208)), GALGAS_double::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1208))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1208)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_returnedType_36172.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_string))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result_result = GALGAS_gtlString::constructor_new (var_loc_36224, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1210)), GALGAS_string::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1210))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1210)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_returnedType_36172.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_bool))).boolEnum () ;
        if (kBoolTrue == test_6) {
          result_result = GALGAS_gtlBool::constructor_new (var_loc_36224, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1212)), GALGAS_bool::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1212))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1212)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_returnedType_36172.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_list))).boolEnum () ;
          if (kBoolTrue == test_8) {
            result_result = GALGAS_gtlList::constructor_new (var_loc_36224, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1214)), GALGAS_list::extractObject (constinArgument_returnedValue, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1214))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1214)) ;
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (constinArgument_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1216)), GALGAS_string ("this function does not return a compatible type"), fixItArray10  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1216)) ;
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
                                                                    const GALGAS_location & /* inErrorLocation */
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
//                                                                                                                     *
//                                                Function 'signature'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_signature (GALGAS_location inArgument_loc,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (gOption_gtl_5F_options_debug.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_signatureString_789 = inArgument_loc.getter_file (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 33)).getter_lastPathComponent (SOURCE_FILE ("gtl_debugger.galgas", 33)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 33)).add_operation (inArgument_loc.getter_line (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 35)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 34)) ;
    result_result = var_signatureString_789.getter_md_35_ (SOURCE_FILE ("gtl_debugger.galgas", 37)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string::makeEmptyString () ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_signature [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_signature (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_signature (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_signature ("signature",
                                                           functionWithGenericHeader_signature,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_signature) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'bold'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_bold (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_bold ; // Returned variable
  result_bold = GALGAS_string ("\x1B""[1m") ;
//---
  return result_bold ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_bold = false ;
static GALGAS_string gOnceFunctionResult_bold ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_bold (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_bold) {
    gOnceFunctionResult_bold = onceFunction_bold (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_bold = true ;
  }
  return gOnceFunctionResult_bold ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_bold (void) {
  gOnceFunctionResult_bold.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_bold (NULL,
                                                  releaseOnceFunctionResult_bold) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_bold [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_bold (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_bold (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_bold ("bold",
                                                      functionWithGenericHeader_bold,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_bold) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Once function 'underline'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_underline (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_underline ; // Returned variable
  result_underline = GALGAS_string ("\x1B""[4m") ;
//---
  return result_underline ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_underline = false ;
static GALGAS_string gOnceFunctionResult_underline ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_underline (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_underline) {
    gOnceFunctionResult_underline = onceFunction_underline (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_underline = true ;
  }
  return gOnceFunctionResult_underline ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_underline (void) {
  gOnceFunctionResult_underline.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_underline (NULL,
                                                       releaseOnceFunctionResult_underline) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_underline [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_underline (C_Compiler * inCompiler,
                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_underline (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_underline ("underline",
                                                           functionWithGenericHeader_underline,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           0,
                                                           functionArgs_underline) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'blink'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_blink (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_blink ; // Returned variable
  result_blink = GALGAS_string ("\x1B""[5m") ;
//---
  return result_blink ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_blink = false ;
static GALGAS_string gOnceFunctionResult_blink ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_blink (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_blink) {
    gOnceFunctionResult_blink = onceFunction_blink (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_blink = true ;
  }
  return gOnceFunctionResult_blink ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_blink (void) {
  gOnceFunctionResult_blink.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_blink (NULL,
                                                   releaseOnceFunctionResult_blink) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_blink [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_blink (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_blink (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_blink ("blink",
                                                       functionWithGenericHeader_blink,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_blink) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'black'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_black (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_black ; // Returned variable
  result_black = GALGAS_string ("\x1B""[90m") ;
//---
  return result_black ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_black = false ;
static GALGAS_string gOnceFunctionResult_black ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_black (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_black) {
    gOnceFunctionResult_black = onceFunction_black (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_black = true ;
  }
  return gOnceFunctionResult_black ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_black (void) {
  gOnceFunctionResult_black.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_black (NULL,
                                                   releaseOnceFunctionResult_black) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_black [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_black (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_black (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_black ("black",
                                                       functionWithGenericHeader_black,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_black) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Once function 'red'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_red (C_Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_red ; // Returned variable
  result_red = GALGAS_string ("\x1B""[91m") ;
//---
  return result_red ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_red = false ;
static GALGAS_string gOnceFunctionResult_red ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_red (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_red) {
    gOnceFunctionResult_red = onceFunction_red (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_red = true ;
  }
  return gOnceFunctionResult_red ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_red (void) {
  gOnceFunctionResult_red.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_red (NULL,
                                                 releaseOnceFunctionResult_red) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_red [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_red (C_Compiler * inCompiler,
                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                    const GALGAS_location & /* inErrorLocation */
                                                    COMMA_LOCATION_ARGS) {
  return function_red (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_red ("red",
                                                     functionWithGenericHeader_red,
                                                     & kTypeDescriptor_GALGAS_string,
                                                     0,
                                                     functionArgs_red) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'green'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_green (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_green ; // Returned variable
  result_green = GALGAS_string ("\x1B""[92m") ;
//---
  return result_green ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_green = false ;
static GALGAS_string gOnceFunctionResult_green ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_green (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_green) {
    gOnceFunctionResult_green = onceFunction_green (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_green = true ;
  }
  return gOnceFunctionResult_green ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_green (void) {
  gOnceFunctionResult_green.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_green (NULL,
                                                   releaseOnceFunctionResult_green) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_green [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_green (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_green (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_green ("green",
                                                       functionWithGenericHeader_green,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_green) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Once function 'yellow'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_yellow (C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_yellow ; // Returned variable
  result_yellow = GALGAS_string ("\x1B""[93m") ;
//---
  return result_yellow ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_yellow = false ;
static GALGAS_string gOnceFunctionResult_yellow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_yellow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_yellow) {
    gOnceFunctionResult_yellow = onceFunction_yellow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_yellow = true ;
  }
  return gOnceFunctionResult_yellow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_yellow (void) {
  gOnceFunctionResult_yellow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_yellow (NULL,
                                                    releaseOnceFunctionResult_yellow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_yellow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_yellow (C_Compiler * inCompiler,
                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                       const GALGAS_location & /* inErrorLocation */
                                                       COMMA_LOCATION_ARGS) {
  return function_yellow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_yellow ("yellow",
                                                        functionWithGenericHeader_yellow,
                                                        & kTypeDescriptor_GALGAS_string,
                                                        0,
                                                        functionArgs_yellow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'blue'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_blue (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_blue ; // Returned variable
  result_blue = GALGAS_string ("\x1B""[94m") ;
//---
  return result_blue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_blue = false ;
static GALGAS_string gOnceFunctionResult_blue ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_blue (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_blue) {
    gOnceFunctionResult_blue = onceFunction_blue (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_blue = true ;
  }
  return gOnceFunctionResult_blue ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_blue (void) {
  gOnceFunctionResult_blue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_blue (NULL,
                                                  releaseOnceFunctionResult_blue) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_blue [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_blue (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_blue (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_blue ("blue",
                                                      functionWithGenericHeader_blue,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_blue) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Once function 'magenta'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_magenta (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_magenta ; // Returned variable
  result_magenta = GALGAS_string ("\x1B""[95m") ;
//---
  return result_magenta ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_magenta = false ;
static GALGAS_string gOnceFunctionResult_magenta ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_magenta (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_magenta) {
    gOnceFunctionResult_magenta = onceFunction_magenta (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_magenta = true ;
  }
  return gOnceFunctionResult_magenta ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_magenta (void) {
  gOnceFunctionResult_magenta.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_magenta (NULL,
                                                     releaseOnceFunctionResult_magenta) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_magenta [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_magenta (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_magenta (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_magenta ("magenta",
                                                         functionWithGenericHeader_magenta,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_magenta) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'cyan'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_cyan (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_cyan ; // Returned variable
  result_cyan = GALGAS_string ("\x1B""[96m") ;
//---
  return result_cyan ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_cyan = false ;
static GALGAS_string gOnceFunctionResult_cyan ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_cyan (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_cyan) {
    gOnceFunctionResult_cyan = onceFunction_cyan (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_cyan = true ;
  }
  return gOnceFunctionResult_cyan ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_cyan (void) {
  gOnceFunctionResult_cyan.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_cyan (NULL,
                                                  releaseOnceFunctionResult_cyan) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_cyan [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_cyan (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_cyan (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_cyan ("cyan",
                                                      functionWithGenericHeader_cyan,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_cyan) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Once function 'darkred'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_darkred (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_red ; // Returned variable
  result_red = GALGAS_string ("\x1B""[31m") ;
//---
  return result_red ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_darkred = false ;
static GALGAS_string gOnceFunctionResult_darkred ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_darkred (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkred) {
    gOnceFunctionResult_darkred = onceFunction_darkred (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkred = true ;
  }
  return gOnceFunctionResult_darkred ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_darkred (void) {
  gOnceFunctionResult_darkred.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_darkred (NULL,
                                                     releaseOnceFunctionResult_darkred) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_darkred [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_darkred (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_darkred (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_darkred ("darkred",
                                                         functionWithGenericHeader_darkred,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_darkred) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Once function 'darkgreen'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_darkgreen (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_green ; // Returned variable
  result_green = GALGAS_string ("\x1B""[32m") ;
//---
  return result_green ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_darkgreen = false ;
static GALGAS_string gOnceFunctionResult_darkgreen ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_darkgreen (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkgreen) {
    gOnceFunctionResult_darkgreen = onceFunction_darkgreen (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkgreen = true ;
  }
  return gOnceFunctionResult_darkgreen ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_darkgreen (void) {
  gOnceFunctionResult_darkgreen.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_darkgreen (NULL,
                                                       releaseOnceFunctionResult_darkgreen) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_darkgreen [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_darkgreen (C_Compiler * inCompiler,
                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  return function_darkgreen (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_darkgreen ("darkgreen",
                                                           functionWithGenericHeader_darkgreen,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           0,
                                                           functionArgs_darkgreen) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Once function 'darkyellow'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_darkyellow (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_yellow ; // Returned variable
  result_yellow = GALGAS_string ("\x1B""[33m") ;
//---
  return result_yellow ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_darkyellow = false ;
static GALGAS_string gOnceFunctionResult_darkyellow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_darkyellow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkyellow) {
    gOnceFunctionResult_darkyellow = onceFunction_darkyellow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkyellow = true ;
  }
  return gOnceFunctionResult_darkyellow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_darkyellow (void) {
  gOnceFunctionResult_darkyellow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_darkyellow (NULL,
                                                        releaseOnceFunctionResult_darkyellow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_darkyellow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_darkyellow (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_darkyellow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_darkyellow ("darkyellow",
                                                            functionWithGenericHeader_darkyellow,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_darkyellow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Once function 'darkblue'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_darkblue (C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_blue ; // Returned variable
  result_blue = GALGAS_string ("\x1B""[34m") ;
//---
  return result_blue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_darkblue = false ;
static GALGAS_string gOnceFunctionResult_darkblue ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_darkblue (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkblue) {
    gOnceFunctionResult_darkblue = onceFunction_darkblue (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkblue = true ;
  }
  return gOnceFunctionResult_darkblue ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_darkblue (void) {
  gOnceFunctionResult_darkblue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_darkblue (NULL,
                                                      releaseOnceFunctionResult_darkblue) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_darkblue [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_darkblue (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_darkblue (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_darkblue ("darkblue",
                                                          functionWithGenericHeader_darkblue,
                                                          & kTypeDescriptor_GALGAS_string,
                                                          0,
                                                          functionArgs_darkblue) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Once function 'darkmagenta'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_darkmagenta (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_magenta ; // Returned variable
  result_magenta = GALGAS_string ("\x1B""[35m") ;
//---
  return result_magenta ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_darkmagenta = false ;
static GALGAS_string gOnceFunctionResult_darkmagenta ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_darkmagenta (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkmagenta) {
    gOnceFunctionResult_darkmagenta = onceFunction_darkmagenta (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkmagenta = true ;
  }
  return gOnceFunctionResult_darkmagenta ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_darkmagenta (void) {
  gOnceFunctionResult_darkmagenta.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_darkmagenta (NULL,
                                                         releaseOnceFunctionResult_darkmagenta) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_darkmagenta [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_darkmagenta (C_Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_darkmagenta (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_darkmagenta ("darkmagenta",
                                                             functionWithGenericHeader_darkmagenta,
                                                             & kTypeDescriptor_GALGAS_string,
                                                             0,
                                                             functionArgs_darkmagenta) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Once function 'darkcyan'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_darkcyan (C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_cyan ; // Returned variable
  result_cyan = GALGAS_string ("\x1B""[36m") ;
//---
  return result_cyan ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_darkcyan = false ;
static GALGAS_string gOnceFunctionResult_darkcyan ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_darkcyan (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_darkcyan) {
    gOnceFunctionResult_darkcyan = onceFunction_darkcyan (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_darkcyan = true ;
  }
  return gOnceFunctionResult_darkcyan ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_darkcyan (void) {
  gOnceFunctionResult_darkcyan.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_darkcyan (NULL,
                                                      releaseOnceFunctionResult_darkcyan) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_darkcyan [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_darkcyan (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_darkcyan (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_darkcyan ("darkcyan",
                                                          functionWithGenericHeader_darkcyan,
                                                          & kTypeDescriptor_GALGAS_string,
                                                          0,
                                                          functionArgs_darkcyan) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'white'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_white (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_white ; // Returned variable
  result_white = GALGAS_string ("\x1B""[97m") ;
//---
  return result_white ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_white = false ;
static GALGAS_string gOnceFunctionResult_white ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_white (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_white) {
    gOnceFunctionResult_white = onceFunction_white (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_white = true ;
  }
  return gOnceFunctionResult_white ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_white (void) {
  gOnceFunctionResult_white.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_white (NULL,
                                                   releaseOnceFunctionResult_white) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_white [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_white (C_Compiler * inCompiler,
                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  return function_white (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_white ("white",
                                                       functionWithGenericHeader_white,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       0,
                                                       functionArgs_white) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Once function 'endc'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_endc (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_endc ; // Returned variable
  result_endc = GALGAS_string ("\x1B""[0m") ;
//---
  return result_endc ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_endc = false ;
static GALGAS_string gOnceFunctionResult_endc ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_endc (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_endc) {
    gOnceFunctionResult_endc = onceFunction_endc (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_endc = true ;
  }
  return gOnceFunctionResult_endc ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_endc (void) {
  gOnceFunctionResult_endc.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_endc (NULL,
                                                  releaseOnceFunctionResult_endc) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_endc [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_endc (C_Compiler * inCompiler,
                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                     const GALGAS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  return function_endc (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_endc ("endc",
                                                      functionWithGenericHeader_endc,
                                                      & kTypeDescriptor_GALGAS_string,
                                                      0,
                                                      functionArgs_endc) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'defaultDebugSettings'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext function_defaultDebugSettings (C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_debuggerContext result_debugSettings ; // Returned variable
  result_debugSettings = GALGAS_debuggerContext::constructor_new (GALGAS_bool (false), GALGAS_bool (false), function_red (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 91)), GALGAS_string::makeEmptyString (), function_blue (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 93)), function_bold (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 94)), function_darkgreen (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95)), GALGAS_string::makeEmptyString (), GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 97))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 88)) ;
//---
  return result_debugSettings ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_defaultDebugSettings [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_defaultDebugSettings (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_defaultDebugSettings (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_defaultDebugSettings ("defaultDebugSettings",
                                                                      functionWithGenericHeader_defaultDebugSettings,
                                                                      & kTypeDescriptor_GALGAS_debuggerContext,
                                                                      0,
                                                                      functionArgs_defaultDebugSettings) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_debuggerContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_debuggerContext) ;
  if (kOperandEqual == result) {
    result = mAttribute_debugActive.objectCompare (p->mAttribute_debugActive) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_breakOnNext.objectCompare (p->mAttribute_breakOnNext) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_promptColor.objectCompare (p->mAttribute_promptColor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_promptFace.objectCompare (p->mAttribute_promptFace) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructionColor.objectCompare (p->mAttribute_instructionColor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_instructionFace.objectCompare (p->mAttribute_instructionFace) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_outputColor.objectCompare (p->mAttribute_outputColor) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_outputFace.objectCompare (p->mAttribute_outputFace) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_doList.objectCompare (p->mAttribute_doList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_debuggerContext::objectCompare (const GALGAS_debuggerContext & inOperand) const {
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

GALGAS_debuggerContext::GALGAS_debuggerContext (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext GALGAS_debuggerContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_debuggerContext::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_gtlInstructionList::constructor_emptyList (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext::GALGAS_debuggerContext (const cPtr_debuggerContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_debuggerContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext GALGAS_debuggerContext::constructor_new (const GALGAS_bool & inAttribute_debugActive,
                                                                const GALGAS_bool & inAttribute_breakOnNext,
                                                                const GALGAS_string & inAttribute_promptColor,
                                                                const GALGAS_string & inAttribute_promptFace,
                                                                const GALGAS_string & inAttribute_instructionColor,
                                                                const GALGAS_string & inAttribute_instructionFace,
                                                                const GALGAS_string & inAttribute_outputColor,
                                                                const GALGAS_string & inAttribute_outputFace,
                                                                const GALGAS_gtlInstructionList & inAttribute_doList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_debuggerContext result ;
  if (inAttribute_debugActive.isValid () && inAttribute_breakOnNext.isValid () && inAttribute_promptColor.isValid () && inAttribute_promptFace.isValid () && inAttribute_instructionColor.isValid () && inAttribute_instructionFace.isValid () && inAttribute_outputColor.isValid () && inAttribute_outputFace.isValid () && inAttribute_doList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_debuggerContext (inAttribute_debugActive, inAttribute_breakOnNext, inAttribute_promptColor, inAttribute_promptFace, inAttribute_instructionColor, inAttribute_instructionFace, inAttribute_outputColor, inAttribute_outputFace, inAttribute_doList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_debuggerContext::getter_debugActive (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_debugActive ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_debuggerContext::getter_debugActive (UNUSED_LOCATION_ARGS) const {
  return mAttribute_debugActive ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_debuggerContext::getter_breakOnNext (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_breakOnNext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_debuggerContext::getter_breakOnNext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_breakOnNext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_promptColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_promptColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_promptColor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_promptColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_promptFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_promptFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_promptFace (UNUSED_LOCATION_ARGS) const {
  return mAttribute_promptFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_instructionColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_instructionColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_instructionColor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instructionColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_instructionFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_instructionFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_instructionFace (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instructionFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_outputColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_outputColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_outputColor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_outputColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_outputFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_outputFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_outputFace (UNUSED_LOCATION_ARGS) const {
  return mAttribute_outputFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_debuggerContext::getter_doList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mAttribute_doList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_debuggerContext::getter_doList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_doList ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setDebugActive (GALGAS_bool inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_debugActive = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setDebugActive (GALGAS_bool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_debugActive = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setBreakOnNext (GALGAS_bool inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_breakOnNext = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setBreakOnNext (GALGAS_bool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_breakOnNext = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setPromptColor (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_promptColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setPromptColor (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_promptColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setPromptFace (GALGAS_string inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_promptFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setPromptFace (GALGAS_string inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_promptFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setInstructionColor (GALGAS_string inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_instructionColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setInstructionColor (GALGAS_string inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_instructionColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setInstructionFace (GALGAS_string inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_instructionFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setInstructionFace (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_instructionFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setOutputColor (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_outputColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setOutputColor (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_outputColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setOutputFace (GALGAS_string inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mAttribute_outputFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setOutputFace (GALGAS_string inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mAttribute_outputFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @debuggerContext class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_debuggerContext::cPtr_debuggerContext (const GALGAS_bool & in_debugActive,
                                            const GALGAS_bool & in_breakOnNext,
                                            const GALGAS_string & in_promptColor,
                                            const GALGAS_string & in_promptFace,
                                            const GALGAS_string & in_instructionColor,
                                            const GALGAS_string & in_instructionFace,
                                            const GALGAS_string & in_outputColor,
                                            const GALGAS_string & in_outputFace,
                                            const GALGAS_gtlInstructionList & in_doList
                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_debugActive (in_debugActive),
mAttribute_breakOnNext (in_breakOnNext),
mAttribute_promptColor (in_promptColor),
mAttribute_promptFace (in_promptFace),
mAttribute_instructionColor (in_instructionColor),
mAttribute_instructionFace (in_instructionFace),
mAttribute_outputColor (in_outputColor),
mAttribute_outputFace (in_outputFace),
mAttribute_doList (in_doList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_debuggerContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debuggerContext ;
}

void cPtr_debuggerContext::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@debuggerContext:" ;
  mAttribute_debugActive.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_breakOnNext.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_promptColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_promptFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructionColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_instructionFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_outputColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_outputFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_doList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_debuggerContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_debuggerContext (mAttribute_debugActive, mAttribute_breakOnNext, mAttribute_promptColor, mAttribute_promptFace, mAttribute_instructionColor, mAttribute_instructionFace, mAttribute_outputColor, mAttribute_outputFace, mAttribute_doList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @debuggerContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_debuggerContext ("debuggerContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_debuggerContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debuggerContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_debuggerContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_debuggerContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext GALGAS_debuggerContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_debuggerContext result ;
  const GALGAS_debuggerContext * p = (const GALGAS_debuggerContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_debuggerContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("debuggerContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
  if (kOperandEqual == result) {
    result = mAttribute_debuggerContext.objectCompare (p->mAttribute_debuggerContext) ;
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
                                             GALGAS_gtlDataList::constructor_emptyList (HERE),
                                             GALGAS_debuggerContext::constructor_default (HERE)
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
                                                      const GALGAS_gtlDataList & inAttribute_inputVars,
                                                      const GALGAS_debuggerContext & inAttribute_debuggerContext
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlContext result ;
  if (inAttribute_prefix.isValid () && inAttribute_path.isValid () && inAttribute_templateDirectory.isValid () && inAttribute_templateExtension.isValid () && inAttribute_importPath.isValid () && inAttribute_inputVars.isValid () && inAttribute_debuggerContext.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlContext (inAttribute_prefix, inAttribute_path, inAttribute_templateDirectory, inAttribute_templateExtension, inAttribute_importPath, inAttribute_inputVars, inAttribute_debuggerContext COMMA_THERE)) ;
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

GALGAS_debuggerContext GALGAS_gtlContext::getter_debuggerContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_debuggerContext result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mAttribute_debuggerContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext cPtr_gtlContext::getter_debuggerContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_debuggerContext ;
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
                                  const GALGAS_gtlDataList & in_inputVars,
                                  const GALGAS_debuggerContext & in_debuggerContext
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_prefix (in_prefix),
mAttribute_path (in_path),
mAttribute_templateDirectory (in_templateDirectory),
mAttribute_templateExtension (in_templateExtension),
mAttribute_importPath (in_importPath),
mAttribute_inputVars (in_inputVars),
mAttribute_debuggerContext (in_debuggerContext) {
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
  ioString << ", " ;
  mAttribute_debuggerContext.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlContext (mAttribute_prefix, mAttribute_path, mAttribute_templateDirectory, mAttribute_templateExtension, mAttribute_importPath, mAttribute_inputVars, mAttribute_debuggerContext COMMA_THERE)) ;
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

