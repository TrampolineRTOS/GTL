#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@string loadCommandFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_loadCommandFile (const class GALGAS_string inObject,
                                      class GALGAS_gtlContext & io_context,
                                      class GALGAS_gtlData & io_vars,
                                      class GALGAS_library & io_lib,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@gtlInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_display (class cPtr_gtlInstruction * inObject,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlBreakpoint  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlBreakpoint : public AC_GALGAS_value_class {
//--------------------------------- Default constructor
  public: GALGAS_gtlBreakpoint (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlBreakpoint constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlBreakpoint * ptr (void) const {
    return (const cPtr_gtlBreakpoint *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlBreakpoint (const cPtr_gtlBreakpoint * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_fileName (void) const ;

  public: class GALGAS_uint readProperty_lineNum (void) const ;

  public: class GALGAS_string readProperty_signature (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlBreakpoint extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlBreakpoint constructor_new (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_uint & inOperand1,
                                                             const class GALGAS_string & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlBreakpoint & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setFileName (class GALGAS_string inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setLineNum (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setSignature (class GALGAS_string inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlBreakpoint class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlBreakpoint ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlBreakpoint class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlBreakpoint : public acPtr_class {


//--- Properties
  public: GALGAS_string mProperty_fileName ;
  public: GALGAS_uint mProperty_lineNum ;
  public: GALGAS_string mProperty_signature ;

//--- Constructor
  public: cPtr_gtlBreakpoint (const GALGAS_string & in_fileName,
                              const GALGAS_uint & in_lineNum,
                              const GALGAS_string & in_signature
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_fileName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setFileName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_lineNum (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setLineNum (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_signature (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setSignature (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlBreakpointList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlBreakpointList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_gtlBreakpoint mProperty_breakpoint ;
  public: inline GALGAS_gtlBreakpoint readProperty_breakpoint (void) const {
    return mProperty_breakpoint ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlBreakpointList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_gtlBreakpointList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBreakpoint (const GALGAS_gtlBreakpoint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_breakpoint = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_gtlBreakpointList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_gtlBreakpointList_2D_element (const GALGAS_gtlBreakpoint & in_breakpoint) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlBreakpointList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlBreakpointList_2D_element constructor_new (const class GALGAS_gtlBreakpoint & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlBreakpointList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlBreakpointList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlInstructionListContextStack_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlInstructionListContextStack_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_nextInstructionIndex ;
  public: inline GALGAS_uint readProperty_nextInstructionIndex (void) const {
    return mProperty_nextInstructionIndex ;
  }

  public: GALGAS_gtlInstructionList mProperty_instructionList ;
  public: inline GALGAS_gtlInstructionList readProperty_instructionList (void) const {
    return mProperty_instructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlInstructionListContextStack_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_gtlInstructionListContextStack_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setNextInstructionIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nextInstructionIndex = inValue ;
  }

  public: inline void setter_setInstructionList (const GALGAS_gtlInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_gtlInstructionListContextStack_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_gtlInstructionListContextStack_2D_element (const GALGAS_uint & in_nextInstructionIndex,
                                                            const GALGAS_gtlInstructionList & in_instructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlInstructionListContextStack_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlInstructionListContextStack_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                         const class GALGAS_gtlInstructionList & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlInstructionListContextStack_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlInstructionListContextStack_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlVarPath stringRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_stringRepresentation (const class GALGAS_gtlVarPath & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlVarItem stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_stringRepresentation (const class cPtr_gtlVarItem * inObject,
                                                              const class GALGAS_string constin_concatString,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlExpressionList stringRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_stringRepresentation (const class GALGAS_gtlExpressionList & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_stringRepresentation (const class cPtr_gtlExpression * inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlExpressionMap mapRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mapRepresentation (const class GALGAS_gtlExpressionMap & inObject,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlExpressionMap structRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_structRepresentation (const class GALGAS_gtlExpressionMap & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlArgumentList stringRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_stringRepresentation (const class GALGAS_gtlArgumentList & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@type typeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typeName (const class GALGAS_type & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@sortingKeyList stringRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_stringRepresentation (const class GALGAS_sortingKeyList & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lsint stringRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_stringRepresentation (const class GALGAS_lsint & inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlInstruction shortLocation'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_shortLocation (const cPtr_gtlInstruction * inObject,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlInstruction displayWithLocation'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_displayWithLocation (class cPtr_gtlInstruction * inObject,
                                              const class GALGAS_debuggerContext constin_context,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlDoInstInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlDoInstInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlDoInstInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlDoInstInstruction * ptr (void) const {
    return (const cPtr_gtlDoInstInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlDoInstInstruction (const cPtr_gtlDoInstInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_gtlInstruction readProperty_instructionToDo (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlDoInstInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlDoInstInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_gtlInstruction & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlDoInstInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setInstructionToDo (class GALGAS_gtlInstruction inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlDoInstInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlDoInstInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlDoInstInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlDoInstInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_gtlInstruction mProperty_instructionToDo ;

//--- Constructor
  public: cPtr_gtlDoInstInstruction (const GALGAS_location & in_where,
                                     const GALGAS_string & in_signature,
                                     const GALGAS_gtlInstruction & in_instructionToDo
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_gtlInstruction getter_instructionToDo (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setInstructionToDo (GALGAS_gtlInstruction inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlDoNotAllInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlDoNotAllInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlDoNotAllInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlDoNotAllInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlDoNotAllInstruction * ptr (void) const {
    return (const cPtr_gtlDoNotAllInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlDoNotAllInstruction (const cPtr_gtlDoNotAllInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlDoNotAllInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlDoNotAllInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlDoNotAllInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlDoNotAllInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlDoNotAllInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlDoNotAllInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlDoNotAllInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlDoNotAllInstruction (const GALGAS_location & in_where,
                                       const GALGAS_string & in_signature
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlDoInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlDoInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlDoInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlDoInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlDoInstruction * ptr (void) const {
    return (const cPtr_gtlDoInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlDoInstruction (const cPtr_gtlDoInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlDoInstruction extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlDoInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_string & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlDoInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlDoInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlDoInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlDoInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlDoInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlDoInstruction (const GALGAS_location & in_where,
                                 const GALGAS_string & in_signature
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlContinueInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlContinueInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlContinueInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlContinueInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlContinueInstruction * ptr (void) const {
    return (const cPtr_gtlContinueInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlContinueInstruction (const cPtr_gtlContinueInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlContinueInstruction extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlContinueInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlContinueInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlContinueInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlContinueInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlContinueInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlContinueInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlContinueInstruction (const GALGAS_location & in_where,
                                       const GALGAS_string & in_signature
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlBreakpointInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlBreakpointInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlBreakpointInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlBreakpointInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlBreakpointInstruction * ptr (void) const {
    return (const cPtr_gtlBreakpointInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlBreakpointInstruction (const cPtr_gtlBreakpointInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_fileName (void) const ;

  public: class GALGAS_uint readProperty_lineNum (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlBreakpointInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlBreakpointInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_uint & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlBreakpointInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setFileName (class GALGAS_string inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setLineNum (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlBreakpointInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlBreakpointInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlBreakpointInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlBreakpointInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_string mProperty_fileName ;
  public: GALGAS_uint mProperty_lineNum ;

//--- Constructor
  public: cPtr_gtlBreakpointInstruction (const GALGAS_location & in_where,
                                         const GALGAS_string & in_signature,
                                         const GALGAS_string & in_fileName,
                                         const GALGAS_uint & in_lineNum
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_fileName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setFileName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_lineNum (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setLineNum (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlBreakpointListInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlBreakpointListInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlBreakpointListInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlBreakpointListInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlBreakpointListInstruction * ptr (void) const {
    return (const cPtr_gtlBreakpointListInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlBreakpointListInstruction (const cPtr_gtlBreakpointListInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlBreakpointListInstruction extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlBreakpointListInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlBreakpointListInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlBreakpointListInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlBreakpointListInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlBreakpointListInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlBreakpointListInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlBreakpointListInstruction (const GALGAS_location & in_where,
                                             const GALGAS_string & in_signature
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlBreakpointDeleteInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlBreakpointDeleteInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlBreakpointDeleteInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlBreakpointDeleteInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlBreakpointDeleteInstruction * ptr (void) const {
    return (const cPtr_gtlBreakpointDeleteInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlBreakpointDeleteInstruction (const cPtr_gtlBreakpointDeleteInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_numToDelete (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlBreakpointDeleteInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlBreakpointDeleteInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_lbigint & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlBreakpointDeleteInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setNumToDelete (class GALGAS_lbigint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlBreakpointDeleteInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlBreakpointDeleteInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlBreakpointDeleteInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_lbigint mProperty_numToDelete ;

//--- Constructor
  public: cPtr_gtlBreakpointDeleteInstruction (const GALGAS_location & in_where,
                                               const GALGAS_string & in_signature,
                                               const GALGAS_lbigint & in_numToDelete
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lbigint getter_numToDelete (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setNumToDelete (GALGAS_lbigint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlBreakpointDeleteAllInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlBreakpointDeleteAllInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlBreakpointDeleteAllInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlBreakpointDeleteAllInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlBreakpointDeleteAllInstruction * ptr (void) const {
    return (const cPtr_gtlBreakpointDeleteAllInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlBreakpointDeleteAllInstruction (const cPtr_gtlBreakpointDeleteAllInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlBreakpointDeleteAllInstruction extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlBreakpointDeleteAllInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlBreakpointDeleteAllInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlBreakpointDeleteAllInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlBreakpointDeleteAllInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlBreakpointDeleteAllInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlBreakpointDeleteAllInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlWatchpointListInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlWatchpointListInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlWatchpointListInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlWatchpointListInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlWatchpointListInstruction * ptr (void) const {
    return (const cPtr_gtlWatchpointListInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlWatchpointListInstruction (const cPtr_gtlWatchpointListInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlWatchpointListInstruction extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlWatchpointListInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlWatchpointListInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlWatchpointListInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWatchpointListInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlWatchpointListInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlWatchpointListInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlWatchpointListInstruction (const GALGAS_location & in_where,
                                             const GALGAS_string & in_signature
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlWatchpointDeleteInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlWatchpointDeleteInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlWatchpointDeleteInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlWatchpointDeleteInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlWatchpointDeleteInstruction * ptr (void) const {
    return (const cPtr_gtlWatchpointDeleteInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlWatchpointDeleteInstruction (const cPtr_gtlWatchpointDeleteInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_numToDelete (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlWatchpointDeleteInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlWatchpointDeleteInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_lbigint & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlWatchpointDeleteInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setNumToDelete (class GALGAS_lbigint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlWatchpointDeleteInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlWatchpointDeleteInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlWatchpointDeleteInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_lbigint mProperty_numToDelete ;

//--- Constructor
  public: cPtr_gtlWatchpointDeleteInstruction (const GALGAS_location & in_where,
                                               const GALGAS_string & in_signature,
                                               const GALGAS_lbigint & in_numToDelete
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lbigint getter_numToDelete (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setNumToDelete (GALGAS_lbigint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlWatchpointDeleteAllInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlWatchpointDeleteAllInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlWatchpointDeleteAllInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlWatchpointDeleteAllInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlWatchpointDeleteAllInstruction * ptr (void) const {
    return (const cPtr_gtlWatchpointDeleteAllInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlWatchpointDeleteAllInstruction (const cPtr_gtlWatchpointDeleteAllInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlWatchpointDeleteAllInstruction extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlWatchpointDeleteAllInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlWatchpointDeleteAllInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlWatchpointDeleteAllInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlWatchpointDeleteAllInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlWatchpointDeleteAllInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlWatchpointDeleteAllInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlListInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlListInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlListInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlListInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlListInstruction * ptr (void) const {
    return (const cPtr_gtlListInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlListInstruction (const cPtr_gtlListInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_window (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlListInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlListInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_uint & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlListInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setWindow (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlListInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlListInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlListInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlListInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_uint mProperty_window ;

//--- Constructor
  public: cPtr_gtlListInstruction (const GALGAS_location & in_where,
                                   const GALGAS_string & in_signature,
                                   const GALGAS_uint & in_window
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_window (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setWindow (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlHistoryInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlHistoryInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlHistoryInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlHistoryInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlHistoryInstruction * ptr (void) const {
    return (const cPtr_gtlHistoryInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlHistoryInstruction (const cPtr_gtlHistoryInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlHistoryInstruction extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlHistoryInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlHistoryInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlHistoryInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlHistoryInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlHistoryInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlHistoryInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlHistoryInstruction (const GALGAS_location & in_where,
                                      const GALGAS_string & in_signature
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLoadInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLoadInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLoadInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlLoadInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLoadInstruction * ptr (void) const {
    return (const cPtr_gtlLoadInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLoadInstruction (const cPtr_gtlLoadInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_fileName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLoadInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLoadInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_string & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLoadInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setFileName (class GALGAS_string inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLoadInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLoadInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLoadInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLoadInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_string mProperty_fileName ;

//--- Constructor
  public: cPtr_gtlLoadInstruction (const GALGAS_location & in_where,
                                   const GALGAS_string & in_signature,
                                   const GALGAS_string & in_fileName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_fileName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setFileName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlHelpInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlHelpInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlHelpInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlHelpInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlHelpInstruction * ptr (void) const {
    return (const cPtr_gtlHelpInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlHelpInstruction (const cPtr_gtlHelpInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlHelpInstruction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlHelpInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_string & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlHelpInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlHelpInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlHelpInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlHelpInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlHelpInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlHelpInstruction (const GALGAS_location & in_where,
                                   const GALGAS_string & in_signature
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debugCommandInput getCommand'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_debugCommandInput_getCommand) (class cPtr_debugCommandInput * inObject,
                                                                       class GALGAS_string & outArgument0,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_debugCommandInput_getCommand inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_getCommand (class cPtr_debugCommandInput * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debugCommandInput listHistory'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listHistory (class cPtr_debugCommandInput * inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlDoNotInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlDoNotInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlDoNotInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlDoNotInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlDoNotInstruction * ptr (void) const {
    return (const cPtr_gtlDoNotInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlDoNotInstruction (const cPtr_gtlDoNotInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_numToDelete (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlDoNotInstruction extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlDoNotInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_lbigint & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlDoNotInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setNumToDelete (class GALGAS_lbigint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlDoNotInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlDoNotInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlDoNotInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlDoNotInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_lbigint mProperty_numToDelete ;

//--- Constructor
  public: cPtr_gtlDoNotInstruction (const GALGAS_location & in_where,
                                    const GALGAS_string & in_signature,
                                    const GALGAS_lbigint & in_numToDelete
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lbigint getter_numToDelete (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setNumToDelete (GALGAS_lbigint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetUnconstructedInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetUnconstructedInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetUnconstructedInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlLetUnconstructedInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetUnconstructedInstruction * ptr (void) const {
    return (const cPtr_gtlLetUnconstructedInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetUnconstructedInstruction (const cPtr_gtlLetUnconstructedInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_gtlVarPath readProperty_lValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetUnconstructedInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetUnconstructedInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_gtlVarPath & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetUnconstructedInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setLValue (class GALGAS_gtlVarPath inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetUnconstructedInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetUnconstructedInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetUnconstructedInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_gtlVarPath mProperty_lValue ;

//--- Constructor
  public: cPtr_gtlLetUnconstructedInstruction (const GALGAS_location & in_where,
                                               const GALGAS_string & in_signature,
                                               const GALGAS_gtlVarPath & in_lValue
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_gtlVarPath getter_lValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setLValue (GALGAS_gtlVarPath inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlAssignInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlAssignInstruction : public GALGAS_gtlLetUnconstructedInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlAssignInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlAssignInstruction * ptr (void) const {
    return (const cPtr_gtlAssignInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlAssignInstruction (const cPtr_gtlAssignInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_gtlExpression readProperty_rValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlAssignInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlAssignInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setRValue (class GALGAS_gtlExpression inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlAssignInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlAssignInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlAssignInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlAssignInstruction : public cPtr_gtlLetUnconstructedInstruction {


//--- Properties
  public: GALGAS_gtlExpression mProperty_rValue ;

//--- Constructor
  public: cPtr_gtlAssignInstruction (const GALGAS_location & in_where,
                                     const GALGAS_string & in_signature,
                                     const GALGAS_gtlVarPath & in_lValue,
                                     const GALGAS_gtlExpression & in_rValue
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_rValue (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setRValue (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetAddInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetAddInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetAddInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetAddInstruction * ptr (void) const {
    return (const cPtr_gtlLetAddInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetAddInstruction (const cPtr_gtlLetAddInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetAddInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetAddInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_gtlVarPath & inOperand2,
                                                                    const class GALGAS_gtlExpression & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetAddInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetAddInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetAddInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetAddInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetAddInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetAddInstruction (const GALGAS_location & in_where,
                                     const GALGAS_string & in_signature,
                                     const GALGAS_gtlVarPath & in_lValue,
                                     const GALGAS_gtlExpression & in_rValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetAndInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetAndInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetAndInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetAndInstruction * ptr (void) const {
    return (const cPtr_gtlLetAndInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetAndInstruction (const cPtr_gtlLetAndInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetAndInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetAndInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_gtlVarPath & inOperand2,
                                                                    const class GALGAS_gtlExpression & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetAndInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetAndInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetAndInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetAndInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetAndInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetAndInstruction (const GALGAS_location & in_where,
                                     const GALGAS_string & in_signature,
                                     const GALGAS_gtlVarPath & in_lValue,
                                     const GALGAS_gtlExpression & in_rValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetDivideInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetDivideInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetDivideInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetDivideInstruction * ptr (void) const {
    return (const cPtr_gtlLetDivideInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetDivideInstruction (const cPtr_gtlLetDivideInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetDivideInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetDivideInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_gtlVarPath & inOperand2,
                                                                       const class GALGAS_gtlExpression & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetDivideInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetDivideInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetDivideInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetDivideInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetDivideInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetDivideInstruction (const GALGAS_location & in_where,
                                        const GALGAS_string & in_signature,
                                        const GALGAS_gtlVarPath & in_lValue,
                                        const GALGAS_gtlExpression & in_rValue
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetInstruction * ptr (void) const {
    return (const cPtr_gtlLetInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetInstruction (const cPtr_gtlLetInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetInstruction extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_string & inOperand1,
                                                                 const class GALGAS_gtlVarPath & inOperand2,
                                                                 const class GALGAS_gtlExpression & inOperand3
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetInstruction (const GALGAS_location & in_where,
                                  const GALGAS_string & in_signature,
                                  const GALGAS_gtlVarPath & in_lValue,
                                  const GALGAS_gtlExpression & in_rValue
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetModuloInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetModuloInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetModuloInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetModuloInstruction * ptr (void) const {
    return (const cPtr_gtlLetModuloInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetModuloInstruction (const cPtr_gtlLetModuloInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetModuloInstruction extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetModuloInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_gtlVarPath & inOperand2,
                                                                       const class GALGAS_gtlExpression & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetModuloInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetModuloInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetModuloInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetModuloInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetModuloInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetModuloInstruction (const GALGAS_location & in_where,
                                        const GALGAS_string & in_signature,
                                        const GALGAS_gtlVarPath & in_lValue,
                                        const GALGAS_gtlExpression & in_rValue
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetMultiplyInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetMultiplyInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetMultiplyInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetMultiplyInstruction * ptr (void) const {
    return (const cPtr_gtlLetMultiplyInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetMultiplyInstruction (const cPtr_gtlLetMultiplyInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetMultiplyInstruction extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetMultiplyInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_gtlVarPath & inOperand2,
                                                                         const class GALGAS_gtlExpression & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetMultiplyInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetMultiplyInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetMultiplyInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetMultiplyInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetMultiplyInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetMultiplyInstruction (const GALGAS_location & in_where,
                                          const GALGAS_string & in_signature,
                                          const GALGAS_gtlVarPath & in_lValue,
                                          const GALGAS_gtlExpression & in_rValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetOrInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetOrInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetOrInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetOrInstruction * ptr (void) const {
    return (const cPtr_gtlLetOrInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetOrInstruction (const cPtr_gtlLetOrInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetOrInstruction extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetOrInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_gtlVarPath & inOperand2,
                                                                   const class GALGAS_gtlExpression & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetOrInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetOrInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetOrInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetOrInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetOrInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetOrInstruction (const GALGAS_location & in_where,
                                    const GALGAS_string & in_signature,
                                    const GALGAS_gtlVarPath & in_lValue,
                                    const GALGAS_gtlExpression & in_rValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetShiftLeftInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetShiftLeftInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetShiftLeftInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetShiftLeftInstruction * ptr (void) const {
    return (const cPtr_gtlLetShiftLeftInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetShiftLeftInstruction (const cPtr_gtlLetShiftLeftInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetShiftLeftInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetShiftLeftInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_gtlVarPath & inOperand2,
                                                                          const class GALGAS_gtlExpression & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetShiftLeftInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetShiftLeftInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetShiftLeftInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetShiftLeftInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetShiftLeftInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetShiftLeftInstruction (const GALGAS_location & in_where,
                                           const GALGAS_string & in_signature,
                                           const GALGAS_gtlVarPath & in_lValue,
                                           const GALGAS_gtlExpression & in_rValue
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetShiftRightInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetShiftRightInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetShiftRightInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetShiftRightInstruction * ptr (void) const {
    return (const cPtr_gtlLetShiftRightInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetShiftRightInstruction (const cPtr_gtlLetShiftRightInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetShiftRightInstruction extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetShiftRightInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_gtlVarPath & inOperand2,
                                                                           const class GALGAS_gtlExpression & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetShiftRightInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetShiftRightInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetShiftRightInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetShiftRightInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetShiftRightInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetShiftRightInstruction (const GALGAS_location & in_where,
                                            const GALGAS_string & in_signature,
                                            const GALGAS_gtlVarPath & in_lValue,
                                            const GALGAS_gtlExpression & in_rValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetSubstractInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetSubstractInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetSubstractInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetSubstractInstruction * ptr (void) const {
    return (const cPtr_gtlLetSubstractInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetSubstractInstruction (const cPtr_gtlLetSubstractInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetSubstractInstruction extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetSubstractInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_gtlVarPath & inOperand2,
                                                                          const class GALGAS_gtlExpression & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetSubstractInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetSubstractInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetSubstractInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetSubstractInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetSubstractInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetSubstractInstruction (const GALGAS_location & in_where,
                                           const GALGAS_string & in_signature,
                                           const GALGAS_gtlVarPath & in_lValue,
                                           const GALGAS_gtlExpression & in_rValue
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlLetXorInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlLetXorInstruction : public GALGAS_gtlAssignInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlLetXorInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlLetXorInstruction * ptr (void) const {
    return (const cPtr_gtlLetXorInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlLetXorInstruction (const cPtr_gtlLetXorInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlLetXorInstruction extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlLetXorInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_string & inOperand1,
                                                                    const class GALGAS_gtlVarPath & inOperand2,
                                                                    const class GALGAS_gtlExpression & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlLetXorInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlLetXorInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlLetXorInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlLetXorInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlLetXorInstruction : public cPtr_gtlAssignInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlLetXorInstruction (const GALGAS_location & in_where,
                                     const GALGAS_string & in_signature,
                                     const GALGAS_gtlVarPath & in_lValue,
                                     const GALGAS_gtlExpression & in_rValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlPrintStatementInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlPrintStatementInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlPrintStatementInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlPrintStatementInstruction * ptr (void) const {
    return (const cPtr_gtlPrintStatementInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlPrintStatementInstruction (const cPtr_gtlPrintStatementInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_carriageReturn (void) const ;

  public: class GALGAS_gtlExpression readProperty_messageToPrint (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlPrintStatementInstruction extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlPrintStatementInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_gtlExpression & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlPrintStatementInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setCarriageReturn (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMessageToPrint (class GALGAS_gtlExpression inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlPrintStatementInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlPrintStatementInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlPrintStatementInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlPrintStatementInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_bool mProperty_carriageReturn ;
  public: GALGAS_gtlExpression mProperty_messageToPrint ;

//--- Constructor
  public: cPtr_gtlPrintStatementInstruction (const GALGAS_location & in_where,
                                             const GALGAS_string & in_signature,
                                             const GALGAS_bool & in_carriageReturn,
                                             const GALGAS_gtlExpression & in_messageToPrint
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_carriageReturn (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setCarriageReturn (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_messageToPrint (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMessageToPrint (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlUnletInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlUnletInstruction : public GALGAS_gtlLetUnconstructedInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlUnletInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gtlUnletInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlUnletInstruction * ptr (void) const {
    return (const cPtr_gtlUnletInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlUnletInstruction (const cPtr_gtlUnletInstruction * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlUnletInstruction extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlUnletInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_gtlVarPath & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlUnletInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlUnletInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlUnletInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlUnletInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlUnletInstruction : public cPtr_gtlLetUnconstructedInstruction {

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties

//--- Constructor
  public: cPtr_gtlUnletInstruction (const GALGAS_location & in_where,
                                    const GALGAS_string & in_signature,
                                    const GALGAS_gtlVarPath & in_lValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gtlWatchpointInstruction  value class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlWatchpointInstruction : public GALGAS_gtlInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gtlWatchpointInstruction (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_gtlWatchpointInstruction * ptr (void) const {
    return (const cPtr_gtlWatchpointInstruction *) mObjectPtr ;
  }

//--------------------------------- Constructor from pointer
  public: GALGAS_gtlWatchpointInstruction (const cPtr_gtlWatchpointInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_gtlExpression readProperty_watchExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_gtlWatchpointInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gtlWatchpointInstruction constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_gtlExpression & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gtlWatchpointInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setWatchExpression (class GALGAS_gtlExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_gtlWatchpointInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlWatchpointInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlWatchpointInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlWatchpointInstruction : public cPtr_gtlInstruction {

//--- Extension method display
  public: virtual void method_display (C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method execute
  public: virtual void method_execute (class GALGAS_gtlContext & context,
           class GALGAS_gtlData & vars,
           class GALGAS_library & lib,
           class GALGAS_string & outputString,
           C_Compiler * COMMA_LOCATION_ARGS) override ;


//--- Properties
  public: GALGAS_gtlExpression mProperty_watchExpression ;

//--- Constructor
  public: cPtr_gtlWatchpointInstruction (const GALGAS_location & in_where,
                                         const GALGAS_string & in_signature,
                                         const GALGAS_gtlExpression & in_watchExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_gtlExpression getter_watchExpression (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setWatchExpression (GALGAS_gtlExpression inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'signature'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_signature (class GALGAS_location inArgument0,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlTemplate execute'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_execute (class cPtr_gtlTemplate * inObject,
                                  class GALGAS_gtlContext & io_context,
                                  class GALGAS_gtlData & io_vars,
                                  class GALGAS_library & io_lib,
                                  class GALGAS_string & io_outputString,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library functionExists'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_functionExists (const cPtr_library * inObject,
                                                      const class GALGAS_lstring constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getFunction'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlFunction callExtensionGetter_getFunction (const cPtr_library * inObject,
                                                          const class GALGAS_lstring constin_name,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library putFunction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_library_putFunction) (class cPtr_library * inObject,
                                                              const class GALGAS_lstring constinArgument0,
                                                              const class GALGAS_gtlFunction constinArgument1,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_putFunction (const int32_t inClassIndex,
                                       extensionSetterSignature_library_putFunction inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_putFunction (class cPtr_library * inObject,
                                      const GALGAS_lstring constin_name,
                                      const GALGAS_gtlFunction constin_aFunction,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getterExists'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_getterExists (const cPtr_library * inObject,
                                                    const class GALGAS_string constin_type,
                                                    const class GALGAS_lstring constin_name,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getGetter'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlGetter callExtensionGetter_getGetter (const cPtr_library * inObject,
                                                      const class GALGAS_string constin_type,
                                                      const class GALGAS_lstring constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlGetter class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlGetter : public cPtr_gtlFunction {

//--- Extension getter callGetter
  public: virtual class GALGAS_gtlData getter_callGetter (const class GALGAS_location fromLocation,
           const class GALGAS_gtlContext context,
           const class GALGAS_library lib,
           const class GALGAS_gtlData target,
           const class GALGAS_gtlDataList actualArguments,
           C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter typedName
  public: virtual class GALGAS_lstring getter_typedName (C_Compiler * COMMA_LOCATION_ARGS) const ;


//--- Properties
  public: GALGAS_type mProperty_targetType ;

//--- Constructor
  public: cPtr_gtlGetter (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_name,
                          const GALGAS_gtlArgumentList & in_formalArguments,
                          const GALGAS_gtlInstructionList & in_instructions,
                          const GALGAS_lstring & in_returnVariable,
                          const GALGAS_type & in_targetType
                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_type getter_targetType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setTargetType (GALGAS_type inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library putGetter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_library_putGetter) (class cPtr_library * inObject,
                                                            const class GALGAS_lstring constinArgument0,
                                                            const class GALGAS_gtlGetter constinArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_putGetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putGetter inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_putGetter (class cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlGetter constin_aGetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library setterExists'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_setterExists (const cPtr_library * inObject,
                                                    const class GALGAS_string constin_type,
                                                    const class GALGAS_lstring constin_name,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getSetter'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlSetter callExtensionGetter_getSetter (const cPtr_library * inObject,
                                                      const class GALGAS_string constin_type,
                                                      const class GALGAS_lstring constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gtlSetter class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gtlSetter : public cPtr_gtlExecutableEntity {

//--- Extension getter typedName
  public: virtual class GALGAS_lstring getter_typedName (C_Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method callSetter
  public: virtual void method_callSetter (const class GALGAS_location fromLocation,
           class GALGAS_gtlContext context,
           class GALGAS_library lib,
           class GALGAS_gtlData & target,
           const class GALGAS_gtlDataList actualArguments,
           C_Compiler * COMMA_LOCATION_ARGS) ;


//--- Properties
  public: GALGAS_type mProperty_targetType ;

//--- Constructor
  public: cPtr_gtlSetter (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_name,
                          const GALGAS_gtlArgumentList & in_formalArguments,
                          const GALGAS_gtlInstructionList & in_instructions,
                          const GALGAS_type & in_targetType
                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_type getter_targetType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setTargetType (GALGAS_type inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library putSetter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_library_putSetter) (class cPtr_library * inObject,
                                                            const class GALGAS_lstring constinArgument0,
                                                            const class GALGAS_gtlSetter constinArgument1,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_putSetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putSetter inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_putSetter (class cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlSetter constin_aSetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library hasImport'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_hasImport (const cPtr_library * inObject,
                                                 const class GALGAS_string constin_importPath,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library doImport'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_library_doImport) (class cPtr_library * inObject,
                                                           const class GALGAS_string constinArgument0,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_doImport (const int32_t inClassIndex,
                                    extensionSetterSignature_library_doImport inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_doImport (class cPtr_library * inObject,
                                   const GALGAS_string constin_importPath,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library getTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_library_getTemplate) (class cPtr_library * inObject,
                                                              const class GALGAS_gtlContext constinArgument0,
                                                              class GALGAS_lstring inArgument1,
                                                              class GALGAS_bool inArgument2,
                                                              class GALGAS_library & ioArgument3,
                                                              class GALGAS_bool & outArgument4,
                                                              class GALGAS_gtlTemplate & outArgument5,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getTemplate (const int32_t inClassIndex,
                                       extensionSetterSignature_library_getTemplate inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_getTemplate (class cPtr_library * inObject,
                                      const GALGAS_gtlContext constin_context,
                                      GALGAS_lstring in_path,
                                      GALGAS_bool in_ifExists,
                                      GALGAS_library & io_lib,
                                      GALGAS_bool & out_found,
                                      GALGAS_gtlTemplate & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData string'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_string (const class cPtr_gtlData * inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData lstring'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring callExtensionGetter_lstring (const class cPtr_gtlData * inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData int'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bigint callExtensionGetter_int (const class cPtr_gtlData * inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData float'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_double callExtensionGetter_float (const class cPtr_gtlData * inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_plusOp (const class cPtr_gtlData * inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_minusOp (const class cPtr_gtlData * inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData notOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_notOp (const class cPtr_gtlData * inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData addOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_addOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData subOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_subOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_mulOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData divOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_divOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData modOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_modOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData andOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_andOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData orOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_orOp (const class cPtr_gtlData * inObject,
                                               const class GALGAS_gtlData constin_right,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_xorOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData slOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_slOp (const class cPtr_gtlData * inObject,
                                               const class GALGAS_gtlData constin_right,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData srOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_srOp (const class cPtr_gtlData * inObject,
                                               const class GALGAS_gtlData constin_right,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_neqOp (const class cPtr_gtlData * inObject,
                                                const class GALGAS_gtlData constin_right,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_eqOp (const class cPtr_gtlData * inObject,
                                               const class GALGAS_gtlData constin_right,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData leOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_leOp (const class cPtr_gtlData * inObject,
                                               const class GALGAS_gtlData constin_right,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData geOp'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_geOp (const class cPtr_gtlData * inObject,
                                               const class GALGAS_gtlData constin_right,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_type callExtensionGetter_embeddedType (const class cPtr_gtlData * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@gtlData addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addMyValue (class cPtr_gtlData * inObject,
                                     class GALGAS_objectlist & io_objectList,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_performGetter (const class cPtr_gtlData * inObject,
                                                        const class GALGAS_lstring constin_methodName,
                                                        const class GALGAS_gtlDataList constin_arguments,
                                                        const class GALGAS_gtlContext constin_context,
                                                        const class GALGAS_library constin_lib,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension setter '@gtlData performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_performSetter) (class cPtr_gtlData * inObject,
                                                                const class GALGAS_lstring constinArgument0,
                                                                const class GALGAS_gtlDataList constinArgument1,
                                                                const class GALGAS_gtlContext constinArgument2,
                                                                const class GALGAS_library constinArgument3,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_performSetter (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_performSetter inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_performSetter (class cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_methodName,
                                        const GALGAS_gtlDataList constin_arguments,
                                        const GALGAS_gtlContext constin_context,
                                        const GALGAS_library constin_lib,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlData structField'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_structField (class cPtr_gtlData * inObject,
                                      const class GALGAS_lstring constin_name,
                                      class GALGAS_gtlData & out_result,
                                      class GALGAS_bool & out_found,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData resultField'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlData callExtensionGetter_resultField (const cPtr_gtlData * inObject,
                                                      const class GALGAS_lstring constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setStructField'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_setStructField) (class cPtr_gtlData * inObject,
                                                                 const class GALGAS_lstring constinArgument0,
                                                                 const class GALGAS_gtlData constinArgument1,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setStructField (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setStructField inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setStructField (class cPtr_gtlData * inObject,
                                         const GALGAS_lstring constin_name,
                                         const GALGAS_gtlData constin_data,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setStructFieldAtLevel'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_setStructFieldAtLevel) (class cPtr_gtlData * inObject,
                                                                        const class GALGAS_lstring constinArgument0,
                                                                        const class GALGAS_gtlData constinArgument1,
                                                                        const class GALGAS_uint constinArgument2,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setStructFieldAtLevel (const int32_t inClassIndex,
                                                 extensionSetterSignature_gtlData_setStructFieldAtLevel inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setStructFieldAtLevel (class cPtr_gtlData * inObject,
                                                const GALGAS_lstring constin_name,
                                                const GALGAS_gtlData constin_data,
                                                const GALGAS_uint constin_level,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData deleteStructField'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_deleteStructField) (class cPtr_gtlData * inObject,
                                                                    const class GALGAS_lstring constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteStructField (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteStructField inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteStructField (class cPtr_gtlData * inObject,
                                            const GALGAS_lstring constin_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData hasStructField'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_hasStructField (const cPtr_gtlData * inObject,
                                                      const class GALGAS_lstring constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData overrideMap'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlStruct callExtensionGetter_overrideMap (const cPtr_gtlData * inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData overriddenMap'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gtlStruct callExtensionGetter_overriddenMap (const cPtr_gtlData * inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlData mapItem'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_mapItem (class cPtr_gtlData * inObject,
                                  const class GALGAS_lstring constin_name,
                                  class GALGAS_gtlData & out_result,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData hasMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_hasMapItem (const cPtr_gtlData * inObject,
                                                  const class GALGAS_lstring constin_name,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_setMapItem) (class cPtr_gtlData * inObject,
                                                             const class GALGAS_lstring constinArgument0,
                                                             const class GALGAS_gtlData constinArgument1,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setMapItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_setMapItem inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setMapItem (class cPtr_gtlData * inObject,
                                     const GALGAS_lstring constin_name,
                                     const GALGAS_gtlData constin_data,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData deleteMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_deleteMapItem) (class cPtr_gtlData * inObject,
                                                                const class GALGAS_lstring constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteMapItem (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_deleteMapItem inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteMapItem (class cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_name,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlData itemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_itemAtIndex (class cPtr_gtlData * inObject,
                                      class GALGAS_gtlData & out_result,
                                      const class GALGAS_gtlInt constin_index,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData hasItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_hasItemAtIndex (const cPtr_gtlData * inObject,
                                                      const class GALGAS_gtlInt constin_index,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_setItemAtIndex) (class cPtr_gtlData * inObject,
                                                                 const class GALGAS_gtlData constinArgument0,
                                                                 const class GALGAS_gtlInt constinArgument1,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setItemAtIndex (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setItemAtIndex inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setItemAtIndex (class cPtr_gtlData * inObject,
                                         const GALGAS_gtlData constin_data,
                                         const GALGAS_gtlInt constin_index,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData deleteItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_deleteItemAtIndex) (class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlInt constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteItemAtIndex (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteItemAtIndex inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteItemAtIndex (class cPtr_gtlData * inObject,
                                            const GALGAS_gtlInt constin_index,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData appendItem'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionSetterSignature_gtlData_appendItem) (class cPtr_gtlData * inObject,
                                                             const class GALGAS_gtlData constinArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_appendItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_appendItem inModifier) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_appendItem (class cPtr_gtlData * inObject,
                                     const GALGAS_gtlData constin_item,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

