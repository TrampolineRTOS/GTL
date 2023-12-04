//----------------------------------------------------------------------------------------------------------------------
//
//  GALGAS prologue / epilogue handling class
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2010 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include <string.h>

//----------------------------------------------------------------------------------------------------------------------
//
//                 Prologue / Epilogue Action class
//
//----------------------------------------------------------------------------------------------------------------------

static C_PrologueEpilogue * gPrologueEpilogueActionList = nullptr ;

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue::C_PrologueEpilogue (void (* inPrologueAction) (void),
                                        void (* inEpilogueAction) (void)) :
mNextObjectLink (gPrologueEpilogueActionList),
mPrologueAction (inPrologueAction),
mEpilogueAction (inEpilogueAction) {
  gPrologueEpilogueActionList = this ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_PrologueEpilogue::runPrologueActions (void) {
  const C_PrologueEpilogue * p = gPrologueEpilogueActionList ;
  while (p != nullptr) {
    if (p->mPrologueAction != nullptr) {
      p->mPrologueAction () ;
    }
    p = p->mNextObjectLink ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_PrologueEpilogue::runEpilogueActions (void) {
  const C_PrologueEpilogue * p = gPrologueEpilogueActionList ;
  while (p != nullptr) {
    if (p->mEpilogueAction != nullptr) {
      p->mEpilogueAction () ;
    }
    p = p->mNextObjectLink ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
