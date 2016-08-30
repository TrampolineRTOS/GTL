#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Parser class 'gtl_instruction_parser' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_gtl_5F_instruction_5F_parser {
//--- Virtual destructor
  public : virtual ~ cParser_gtl_5F_instruction_5F_parser (void) {}

//--- Non terminal declarations
  protected : virtual void nt_gtl_5F_expression_ (class GALGAS_gtlExpression & outArgument0,
                                                  class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_expression_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_import_ (class GALGAS_gtlContext inArgument0,
                                              class GALGAS_library & ioArgument1,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_import_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_simple_5F_instruction_ (class GALGAS_gtlInstruction & outArgument0,
                                                             class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_simple_5F_instruction_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_sorting_5F_order_ (class GALGAS_lsint & outArgument0,
                                                        class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_sorting_5F_order_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_variable_ (class GALGAS_gtlVarPath & outArgument0,
                                                class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_variable_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_variable_5F_or_5F_here_ (class GALGAS_gtlVarPath & outArgument0,
                                                              class GALGAS_bool & outArgument1,
                                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_variable_5F_or_5F_here_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_ (GALGAS_gtlInstruction & outArgument0,
                                                                                       C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_ (GALGAS_gtlInstruction & outArgument0,
                                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_ (GALGAS_gtlInstruction & outArgument0,
                                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i12_ (GALGAS_lsint & outArgument0,
                                                                                   C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i12_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i13_ (GALGAS_gtlContext inArgument0,
                                                                         GALGAS_library & ioArgument1,
                                                                         C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i13_parse (C_Lexique_gtl_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlErrorStatementInstruction class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlErrorStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlErrorStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlErrorStatementInstruction * ptr (void) const { return (const cPtr_gtlErrorStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlErrorStatementInstruction (const cPtr_gtlErrorStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlErrorStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlErrorStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_gtlVarPath & inOperand2,
                                                                             const class GALGAS_bool & inOperand3,
                                                                             const class GALGAS_gtlExpression & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlErrorStatementInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_errorMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlErrorStatementInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlErrorStatementInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @gtlErrorStatementInstruction class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlErrorStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mAttribute_identifier ;
  public : GALGAS_bool mAttribute_hereInstead ;
  public : GALGAS_gtlExpression mAttribute_errorMessage ;

//--- Constructor
  public : cPtr_gtlErrorStatementInstruction (const GALGAS_location & in_where,
                                              const GALGAS_string & in_signature,
                                              const GALGAS_gtlVarPath & in_identifier,
                                              const GALGAS_bool & in_hereInstead,
                                              const GALGAS_gtlExpression & in_errorMessage
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_errorMessage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlLibrariesInstruction class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlLibrariesInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlLibrariesInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlLibrariesInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlLibrariesInstruction * ptr (void) const { return (const cPtr_gtlLibrariesInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlLibrariesInstruction (const cPtr_gtlLibrariesInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlLibrariesInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlLibrariesInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlLibrariesInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlLibrariesInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLibrariesInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @gtlLibrariesInstruction class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlLibrariesInstruction : public cPtr_gtlInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_gtlLibrariesInstruction (const GALGAS_location & in_where,
                                         const GALGAS_string & in_signature
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlSetterCallInstruction class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlSetterCallInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlSetterCallInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlSetterCallInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlSetterCallInstruction * ptr (void) const { return (const cPtr_gtlSetterCallInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlSetterCallInstruction (const cPtr_gtlSetterCallInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlSetterCallInstruction extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlSetterCallInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_gtlVarPath & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_gtlExpressionList & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlSetterCallInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpressionList getter_arguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_setterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_target (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlSetterCallInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlSetterCallInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @gtlSetterCallInstruction class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlSetterCallInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mAttribute_target ;
  public : GALGAS_lstring mAttribute_setterName ;
  public : GALGAS_gtlExpressionList mAttribute_arguments ;

//--- Constructor
  public : cPtr_gtlSetterCallInstruction (const GALGAS_location & in_where,
                                          const GALGAS_string & in_signature,
                                          const GALGAS_gtlVarPath & in_target,
                                          const GALGAS_lstring & in_setterName,
                                          const GALGAS_gtlExpressionList & in_arguments
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_target (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_setterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpressionList getter_arguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlAbstractSortInstruction class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlAbstractSortInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlAbstractSortInstruction (void) ;

//---
  public : inline const class cPtr_gtlAbstractSortInstruction * ptr (void) const { return (const cPtr_gtlAbstractSortInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlAbstractSortInstruction (const cPtr_gtlAbstractSortInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlAbstractSortInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlAbstractSortInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_variablePath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlAbstractSortInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlAbstractSortInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @gtlAbstractSortInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlAbstractSortInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mAttribute_variablePath ;

//--- Constructor
  public : cPtr_gtlAbstractSortInstruction (const GALGAS_location & in_where,
                                            const GALGAS_string & in_signature,
                                            const GALGAS_gtlVarPath & in_variablePath
                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_variablePath (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlSortStatementInstruction class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlSortStatementInstruction : public GALGAS_gtlAbstractSortInstruction {
//--- Constructor
  public : GALGAS_gtlSortStatementInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlSortStatementInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlSortStatementInstruction * ptr (void) const { return (const cPtr_gtlSortStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlSortStatementInstruction (const cPtr_gtlSortStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlSortStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlSortStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_gtlVarPath & inOperand2,
                                                                            const class GALGAS_lsint & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlSortStatementInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lsint getter_order (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlSortStatementInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlSortStatementInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @gtlSortStatementInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlSortStatementInstruction : public cPtr_gtlAbstractSortInstruction {
//--- Attributes
  public : GALGAS_lsint mAttribute_order ;

//--- Constructor
  public : cPtr_gtlSortStatementInstruction (const GALGAS_location & in_where,
                                             const GALGAS_string & in_signature,
                                             const GALGAS_gtlVarPath & in_variablePath,
                                             const GALGAS_lsint & in_order
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint getter_order (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @gtlSortStatementStructInstruction class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlSortStatementStructInstruction : public GALGAS_gtlAbstractSortInstruction {
//--- Constructor
  public : GALGAS_gtlSortStatementStructInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlSortStatementStructInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlSortStatementStructInstruction * ptr (void) const { return (const cPtr_gtlSortStatementStructInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlSortStatementStructInstruction (const cPtr_gtlSortStatementStructInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlSortStatementStructInstruction extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlSortStatementStructInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_gtlVarPath & inOperand2,
                                                                                  const class GALGAS_sortingKeyList & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlSortStatementStructInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_sortingKeyList getter_sortingKey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlSortStatementStructInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlSortStatementStructInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @gtlSortStatementStructInstruction class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlSortStatementStructInstruction : public cPtr_gtlAbstractSortInstruction {
//--- Attributes
  public : GALGAS_sortingKeyList mAttribute_sortingKey ;

//--- Constructor
  public : cPtr_gtlSortStatementStructInstruction (const GALGAS_location & in_where,
                                                   const GALGAS_string & in_signature,
                                                   const GALGAS_gtlVarPath & in_variablePath,
                                                   const GALGAS_sortingKeyList & in_sortingKey
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_sortingKeyList getter_sortingKey (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlTabStatementInstruction class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTabStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlTabStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlTabStatementInstruction * ptr (void) const { return (const cPtr_gtlTabStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlTabStatementInstruction (const cPtr_gtlTabStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlTabStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlTabStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_gtlExpression & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlTabStatementInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_tabValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlTabStatementInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlTabStatementInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @gtlTabStatementInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlTabStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlExpression mAttribute_tabValue ;

//--- Constructor
  public : cPtr_gtlTabStatementInstruction (const GALGAS_location & in_where,
                                            const GALGAS_string & in_signature,
                                            const GALGAS_gtlExpression & in_tabValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_tabValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @gtlWarningStatementInstruction class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlWarningStatementInstruction : public GALGAS_gtlInstruction {
//--- Constructor
  public : GALGAS_gtlWarningStatementInstruction (void) ;

//---
  public : inline const class cPtr_gtlWarningStatementInstruction * ptr (void) const { return (const cPtr_gtlWarningStatementInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlWarningStatementInstruction (const cPtr_gtlWarningStatementInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlWarningStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlWarningStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_gtlVarPath & inOperand2,
                                                                               const class GALGAS_bool & inOperand3,
                                                                               const class GALGAS_gtlExpression & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlWarningStatementInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlExpression getter_warningMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlWarningStatementInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWarningStatementInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @gtlWarningStatementInstruction class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlWarningStatementInstruction : public cPtr_gtlInstruction {
//--- Attributes
  public : GALGAS_gtlVarPath mAttribute_identifier ;
  public : GALGAS_bool mAttribute_hereInstead ;
  public : GALGAS_gtlExpression mAttribute_warningMessage ;

//--- Constructor
  public : cPtr_gtlWarningStatementInstruction (const GALGAS_location & in_where,
                                                const GALGAS_string & in_signature,
                                                const GALGAS_gtlVarPath & in_identifier,
                                                const GALGAS_bool & in_hereInstead,
                                                const GALGAS_gtlExpression & in_warningMessage
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_identifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_hereInstead (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_warningMessage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library hasImport'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_library_hasImport) (const class cPtr_library * inObject,
                                                                     const class GALGAS_string & constinArgument0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasImport (const int32_t inClassIndex,
                                     enterExtensionGetter_library_hasImport inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_hasImport (const cPtr_library * inObject,
                                                 const GALGAS_string & constin_importPath,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@string stringByAppendingPath' (as function)                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_stringByAppendingPath (const class GALGAS_string & inObject,
                                                           const class GALGAS_string & constinArgument0,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Parser class 'gtl_module_parser' declaration                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_gtl_5F_module_5F_parser {
//--- Virtual destructor
  public : virtual ~ cParser_gtl_5F_module_5F_parser (void) {}

//--- Non terminal declarations
  protected : virtual void nt_gtl_5F_argument_5F_list_ (class GALGAS_gtlArgumentList & outArgument0,
                                                        class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_argument_5F_list_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_expression_ (class GALGAS_gtlExpression & outArgument0,
                                                  class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_expression_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_function_ (class GALGAS_gtlFunction & outArgument0,
                                                class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_function_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_getter_ (class GALGAS_gtlGetter & outArgument0,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_getter_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_import_ (class GALGAS_gtlContext inArgument0,
                                              class GALGAS_library & ioArgument1,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_import_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_ (class GALGAS_gtlInstruction & outArgument0,
                                                   class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_5F_list_ (class GALGAS_gtlInstructionList & outArgument0,
                                                           class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_instruction_5F_list_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_module_5F_start_5F_symbol_ (class GALGAS_gtlContext inArgument0,
                                                                 class GALGAS_library & ioArgument1,
                                                                 class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_module_5F_start_5F_symbol_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_setter_ (class GALGAS_gtlSetter & outArgument0,
                                              class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_setter_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_simple_5F_instruction_ (class GALGAS_gtlInstruction & outArgument0,
                                                             class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_gtl_5F_simple_5F_instruction_parse (class C_Lexique_gtl_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_ (GALGAS_gtlInstructionList & outArgument0,
                                                                                C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_ (GALGAS_gtlContext inArgument0,
                                                                                      GALGAS_library & ioArgument1,
                                                                                      C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_ (GALGAS_gtlFunction & outArgument0,
                                                                     C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_ (GALGAS_gtlGetter & outArgument0,
                                                                   C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_ (GALGAS_gtlSetter & outArgument0,
                                                                   C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_parse (C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_ (GALGAS_gtlInstruction & outArgument0,
                                                                        C_Lexique_gtl_5F_scanner * inLexique) ;

  protected : void rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_parse (C_Lexique_gtl_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_gtl_5F_module_5F_parser_0 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_1 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_2 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_3 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_4 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_5 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_6 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_7 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_8 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_9 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_10 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_11 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_12 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_13 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_14 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_15 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_16 (C_Lexique_gtl_5F_scanner *) = 0 ;

  protected : virtual int32_t select_gtl_5F_module_5F_parser_17 (C_Lexique_gtl_5F_scanner *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR gtl_module_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_gtl_5F_module_5F_grammar : public cParser_gtl_5F_module_5F_parser,
                                          public cParser_gtl_5F_instruction_5F_parser,
                                          public cParser_gtl_5F_expression_5F_parser {
//------------------------------------- 'gtl_argument_list' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_argument_5F_list_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_expression' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_expression_ (GALGAS_gtlExpression & outArgument0,
                                               C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_factor' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_factor_ (GALGAS_gtlExpression & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_function' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_function_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_function_ (GALGAS_gtlFunction & outArgument0,
                                             C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_getter' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_getter_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_getter_ (GALGAS_gtlGetter & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_import' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_import_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_import_ (GALGAS_gtlContext inArgument0,
                                           GALGAS_library & ioArgument1,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_instruction_ (GALGAS_gtlInstruction & outArgument0,
                                                C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_instruction_5F_list_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_instruction_5F_list_ (GALGAS_gtlInstructionList & outArgument0,
                                                        C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_module_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_module_5F_start_5F_symbol_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_module_5F_start_5F_symbol_ (GALGAS_gtlContext inArgument0,
                                                              GALGAS_library & ioArgument1,
                                                              C_Lexique_gtl_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_gtlContext inArgument0,
                                                   GALGAS_library & ioArgument1
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_gtlContext inArgument0,
                                                     GALGAS_library & ioArgument1
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'gtl_relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & outArgument0,
                                                       C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_setter' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_setter_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_setter_ (GALGAS_gtlSetter & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & outArgument0,
                                                         C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_simple_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_simple_5F_instruction_ (GALGAS_gtlInstruction & outArgument0,
                                                          C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_sorting_order' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_sorting_5F_order_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_sorting_5F_order_ (GALGAS_lsint & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_term' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_term_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_term_ (GALGAS_gtlExpression & outArgument0,
                                         C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_variable' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_variable_ (GALGAS_gtlVarPath & outArgument0,
                                             C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_variable_or_here' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_8 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_9 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_10 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_11 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_12 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_13 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_14 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_15 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_16 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_module_5F_parser_17 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_24 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_25 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_26 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_27 (C_Lexique_gtl_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library doImport'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_library_doImport) (class cPtr_library * inObject,
                                                           const class GALGAS_string constinArgument0,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_doImport (const int32_t inClassIndex,
                                    extensionSetterSignature_library_doImport inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_doImport (class cPtr_library * inObject,
                                   const GALGAS_string constin_importPath,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @gtlGetter class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlGetter : public cPtr_gtlFunction {
//--- Attributes
  public : GALGAS_type mAttribute_targetType ;

//--- Constructor
  public : cPtr_gtlGetter (const GALGAS_location & in_where,
                           const GALGAS_lstring & in_name,
                           const GALGAS_gtlArgumentList & in_formalArguments,
                           const GALGAS_gtlInstructionList & in_instructions,
                           const GALGAS_lstring & in_returnVariable,
                           const GALGAS_type & in_targetType
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_type getter_targetType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @gtlSetter class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlSetter : public cPtr_gtlExecutableEntity {
//--- Attributes
  public : GALGAS_type mAttribute_targetType ;

//--- Constructor
  public : cPtr_gtlSetter (const GALGAS_location & in_where,
                           const GALGAS_lstring & in_name,
                           const GALGAS_gtlArgumentList & in_formalArguments,
                           const GALGAS_gtlInstructionList & in_instructions,
                           const GALGAS_type & in_targetType
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_type getter_targetType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlGetter typedName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_lstring (*enterExtensionGetter_gtlGetter_typedName) (const class cPtr_gtlGetter * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlGetter_typedName inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlGetter * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlSetter typedName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_lstring (*enterExtensionGetter_gtlSetter_typedName) (const class cPtr_gtlSetter * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlSetter_typedName inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlSetter * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@library putFunction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_library_putFunction) (class cPtr_library * inObject,
                                                              const class GALGAS_lstring constinArgument0,
                                                              const class GALGAS_gtlFunction constinArgument1,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putFunction (const int32_t inClassIndex,
                                       extensionSetterSignature_library_putFunction inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putFunction (class cPtr_library * inObject,
                                      const GALGAS_lstring constin_name,
                                      const GALGAS_gtlFunction constin_aFunction,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library putGetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_library_putGetter) (class cPtr_library * inObject,
                                                            const class GALGAS_lstring constinArgument0,
                                                            const class GALGAS_gtlGetter constinArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putGetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putGetter inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putGetter (class cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlGetter constin_aGetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library putSetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_library_putSetter) (class cPtr_library * inObject,
                                                            const class GALGAS_lstring constinArgument0,
                                                            const class GALGAS_gtlSetter constinArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putSetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putSetter inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putSetter (class cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlSetter constin_aSetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR gtl_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_gtl_5F_grammar : public cParser_gtl_5F_parser,
                                public cParser_gtl_5F_expression_5F_parser,
                                public cParser_gtl_5F_instruction_5F_parser {
//------------------------------------- 'gtl_argument_list' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_argument_5F_list_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_expression' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_expression_ (GALGAS_gtlExpression & outArgument0,
                                               C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_factor' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_factor_ (GALGAS_gtlExpression & outArgument0,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_file_name' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_file_5F_name_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_file_5F_name_ (GALGAS_gtlExpression & outArgument0,
                                                 C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_import' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_import_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_import_ (GALGAS_gtlContext inArgument0,
                                           GALGAS_library & ioArgument1,
                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & outArgument0,
                                                       C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & outArgument0,
                                                         C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_simple_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_simple_5F_instruction_ (GALGAS_gtlInstruction & outArgument0,
                                                          C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_sorting_order' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_sorting_5F_order_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_sorting_5F_order_ (GALGAS_lsint & outArgument0,
                                                     C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_start_5F_symbol_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_start_5F_symbol_ (GALGAS_gtlContext inArgument0,
                                                    GALGAS_library & ioArgument1,
                                                    GALGAS_gtlInstructionList & outArgument2,
                                                    C_Lexique_gtl_5F_scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_gtlContext inArgument0,
                                                   GALGAS_library & ioArgument1,
                                                   GALGAS_gtlInstructionList & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_gtlContext inArgument0,
                                                     GALGAS_library & ioArgument1,
                                                     GALGAS_gtlInstructionList & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'gtl_template_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_template_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_template_5F_instruction_ (GALGAS_gtlInstruction & outArgument0,
                                                            C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_template_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_template_5F_instruction_5F_list_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_template_5F_instruction_5F_list_ (GALGAS_gtlInstructionList & outArgument0,
                                                                    C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_term' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_term_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_term_ (GALGAS_gtlExpression & outArgument0,
                                         C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_variable' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_variable_ (GALGAS_gtlVarPath & outArgument0,
                                             C_Lexique_gtl_5F_scanner * inCompiler) ;

//------------------------------------- 'gtl_variable_or_here' non terminal
//--- 'parse' label
  public : virtual void nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           C_Lexique_gtl_5F_scanner * inCompiler) ;

  public : virtual int32_t select_gtl_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_8 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_9 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_10 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_11 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_12 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_13 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_14 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_15 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_16 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_17 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_18 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_19 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_20 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_21 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_22 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_23 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_24 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_parser_25 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_24 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_25 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_26 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_expression_5F_parser_27 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner *) ;

  public : virtual int32_t select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'invokeGTL'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_invokeGTL (class GALGAS_gtlString inArgument0,
                                        class GALGAS_gtlContext inArgument1,
                                        class GALGAS_gtlData inArgument2,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'emptyLib'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_library function_emptyLib (class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension method '@gtlInstruction execute'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlInstruction_execute) (const class cPtr_gtlInstruction * inObject,
                                                                 class GALGAS_gtlContext & ioArgument0,
                                                                 class GALGAS_gtlData & ioArgument1,
                                                                 class GALGAS_library & ioArgument2,
                                                                 class GALGAS_string & ioArgument3,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_execute (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlInstruction_execute inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_execute (const class cPtr_gtlInstruction * inObject,
                                  GALGAS_gtlContext & io_context,
                                  GALGAS_gtlData & io_vars,
                                  GALGAS_library & io_lib,
                                  GALGAS_string & io_outputString,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'emptyVarContainer'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData function_emptyVarContainer (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'lstringToGtlString'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlString function_lstringToGtlString (class GALGAS_lstring inArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'stringToGtlString'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlString function_stringToGtlString (class GALGAS_string inArgument0,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'emptyContext'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlContext function_emptyContext (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'defaultDebugSettings'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_debuggerContext function_defaultDebugSettings (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'pathWithExtension'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_pathWithExtension (class GALGAS_gtlContext inArgument0,
                                                class GALGAS_string inArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'noArgument'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_noArgument (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'intArgument'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_intArgument (class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'charArgument'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_charArgument (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'charCharArguments'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_charCharArguments (class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'charIntArguments'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_charIntArguments (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'floatArgument'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_floatArgument (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'stringArgument'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_stringArgument (class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'stringStringArgument'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_stringStringArgument (class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'boolIntArguments'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_boolIntArguments (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'intIntArguments'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_intIntArguments (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'intAnyArguments'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_intAnyArguments (class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'anyArgument'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlTypedArgumentList function_anyArgument (class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'argumentsCheck'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_argumentsCheck (const class GALGAS_lstring constinArgument0,
                             class GALGAS_gtlTypedArgumentList inArgument1,
                             class GALGAS_gtlDataList inArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@gtlData location'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*enterExtensionGetter_gtlData_location) (const class cPtr_gtlData * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlData_location inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callExtensionGetter_location (const cPtr_gtlData * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@type typeName' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_typeName (const class GALGAS_type & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'lstring'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_lstring (class GALGAS_string inArgument0,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'trueFalse'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_trueFalse (const class GALGAS_bool & constinArgument0,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'TrueFalse'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_TrueFalse (const class GALGAS_bool & constinArgument0,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'yesNo'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_yesNo (const class GALGAS_bool & constinArgument0,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'TRUEFALSE'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_TRUEFALSE (const class GALGAS_bool & constinArgument0,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'listOfSize'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_list function_listOfSize (class GALGAS_bigint inArgument0,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'version'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_version (class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'majorVersion'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_majorVersion (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'minorVersion'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_minorVersion (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'revision'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_revision (class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'currentDir'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_currentDir (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'homeDir'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_homeDir (class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'currentDateTime'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_currentDateTime (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max8bitsUnsignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_38_bitsUnsignedInt (class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max8bitsSignedInt'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_38_bitsSignedInt (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min8bitsSignedInt'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_min_38_bitsSignedInt (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max16bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_31__36_bitsUnsignedInt (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max16bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_31__36_bitsSignedInt (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min16bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_min_31__36_bitsSignedInt (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max32bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_33__32_bitsUnsignedInt (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max32bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_33__32_bitsSignedInt (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min32bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_min_33__32_bitsSignedInt (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max64bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_36__34_bitsUnsignedInt (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max64bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_max_36__34_bitsSignedInt (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min64bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint function_min_36__34_bitsSignedInt (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    Function 'pi'                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_double function_pi (class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'wantGtlStruct'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData function_wantGtlStruct (class GALGAS_gtlData inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'wantGtlMap'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData function_wantGtlMap (class GALGAS_gtlData inArgument0,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'wantGtlList'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData function_wantGtlList (class GALGAS_gtlData inArgument0,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkArgumentError'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkArgumentError (const class GALGAS_lstring constinArgument0,
                                 const class GALGAS_type constinArgument1,
                                 const class GALGAS_gtlData constinArgument2,
                                 const class GALGAS_uint constinArgument3,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Abstract extension getter '@gtlData embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_type (*enterExtensionGetter_gtlData_embeddedType) (const class cPtr_gtlData * inObject,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_embeddedType (const int32_t inClassIndex,
                                        enterExtensionGetter_gtlData_embeddedType inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_type callExtensionGetter_embeddedType (const class cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'validateReturnValue'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData function_validateReturnValue (const class GALGAS_lstring & constinArgument0,
                                                   const class GALGAS_object & constinArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Function 'bold'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_bold (class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'underline'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_underline (class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'blink'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_blink (class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'black'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_black (class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Function 'red'                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_red (class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'green'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_green (class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'yellow'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_yellow (class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Function 'blue'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_blue (class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'magenta'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_magenta (class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Function 'cyan'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_cyan (class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'darkred'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_darkred (class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'darkgreen'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_darkgreen (class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'darkyellow'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_darkyellow (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'darkblue'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_darkblue (class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'darkmagenta'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_darkmagenta (class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'darkcyan'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_darkcyan (class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'white'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_white (class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

#endif
