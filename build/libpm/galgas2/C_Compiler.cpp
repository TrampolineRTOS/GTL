//----------------------------------------------------------------------------------------------------------------------
//
//  'C_Compiler' : the compiler base class ;
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2015 Pierre Molinaro.
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

#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "files/C_TextFileWrite.h"
#include "files/C_FileManager.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "all-predefined-types.h"
#include "utilities/MF_MemoryControl.h"
#include "galgas2/F_verbose_output.h"

//----------------------------------------------------------------------------------------------------------------------
//
//        Syntax error message for 'end of source':
//
//----------------------------------------------------------------------------------------------------------------------

const char * C_Compiler::kEndOfSourceLexicalErrorMessage = "end of source" ;

//----------------------------------------------------------------------------------------------------------------------

bool C_Compiler::performGeneration (void) {
  return (! gOption_galgas_5F_builtin_5F_options_do_5F_not_5F_generate_5F_any_5F_file.mValue)
      && (executionMode () == kExecutionModeNormal) ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_Compiler::performLogFileRead (void) {
  return gOption_galgas_5F_builtin_5F_options_log_5F_file_5F_read.mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructor and destructor
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//        Constructor and destructor
//
//----------------------------------------------------------------------------------------------------------------------

C_Compiler::C_Compiler (C_Compiler * inCallerCompiler
                        COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mCallerCompiler (nullptr),
mIssueArray (),
mSentString (),
mSentStringIsValid (true),
mTemplateString (),
mTemplateStringLocation (),
mSourceText (),
mCurrentLocation (),
mStartLocationForHere (),
mEndLocationForHere (),
mStartLocationForNext (),
mEndLocationForNext () {
  macroAssignSharedObject (mCallerCompiler, inCallerCompiler) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_Compiler::~C_Compiler (void) {
  macroDetachSharedObject (mCallerCompiler) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Compiler::sourceFilePath (void) const {
  return mSourceText.sourceFilePath () ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Issue
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::appendIssue (const cIssueDescriptor & inIssue) {
  if (nullptr == mCallerCompiler) {
    mIssueArray.appendObject (inIssue) ;
  }else{
    mCallerCompiler->appendIssue (inIssue) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::writeIssueJSONFile (const C_String & inFile) {
  if (performGeneration ()) {
    C_String s ("[\n") ;
    bool isFirst = true ;
    for (int32_t i=0 ; i<mIssueArray.count () ; i++) {
      mIssueArray (i COMMA_HERE).appendToJSONstring (s, isFirst) ;
      isFirst = false ;
    }
    s << "\n]\n" ;
    const bool ok = C_FileManager::writeStringToFile (s, inFile) ;
    if (!ok) {
      const C_String message (C_String ("Cannot write to '") + inFile + "'") ;
      fatalError (message, "", 0) ;
    }
  }else{
    ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), C_String ("Need to replace '") + inFile + "'.\n" COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Sent String Management
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string C_Compiler::sentString (void) const {
  GALGAS_string result ;
  if (mSentStringIsValid) {
   result = GALGAS_string (mSentString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Template String Management
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string C_Compiler::retrieveAndResetTemplateString (void) {
  const C_String s = mTemplateString ;
  mTemplateString.setLengthToZero () ;
  return GALGAS_string (s) ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::resetTemplateString (void) {
  mTemplateString.setLengthToZero () ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Scanner configuration
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::resetAndLoadSourceFromText (const C_SourceTextInString & inSourceText) {
  mSourceText = inSourceText ;
  mCurrentLocation.resetWithSourceText (mSourceText) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark On the fly semantic error Message
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::onTheFlySemanticError (const C_String & inErrorMessage
                                        COMMA_LOCATION_ARGS) {
  signalSemanticError (this,
                       sourceText (),
                       C_IssueWithFixIt (mCurrentLocation, mCurrentLocation, TC_Array <C_FixItDescription> ()),
                       inErrorMessage
                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark On the fly semantic Warning Message
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::onTheFlySemanticWarning (const C_String & inWarningMessage
                                          COMMA_LOCATION_ARGS) {
  signalSemanticWarning (this,
                         sourceText (),
                         C_IssueWithFixIt (mCurrentLocation, mCurrentLocation, TC_Array <C_FixItDescription> ()),
                         inWarningMessage
                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Print Message
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::printMessage (const GALGAS_string & inMessage
                               COMMA_LOCATION_ARGS) {
  if (inMessage.isValid ()) {
    ggs_printMessage (inMessage.stringValue () COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::printMessage (const C_String & inMessage
                               COMMA_LOCATION_ARGS) {
  C_String s ;
  s << inMessage ;
  ggs_printMessage (s COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Log File Read
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::logFileRead (const C_String & inFilePath) {
  if (performLogFileRead ()) {
    printf ("Reading '%s' file.\n", inFilePath.cString (HERE)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Loop variant run time error
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::loopRunTimeVariantError (LOCATION_ARGS) {
  onTheFlyRunTimeError ("loop variant run-time error" COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Cast error
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::castError (const C_String & inTargetTypeName,
                            const C_galgas_type_descriptor * inObjectDynamicTypeDescriptor
                            COMMA_LOCATION_ARGS) {
  C_String m ;
  m << "cannot cast an @" << inObjectDynamicTypeDescriptor->mGalgasTypeName << " to an @" << inTargetTypeName ;
  onTheFlyRunTimeError (m COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Error
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::semanticErrorAtLocation (const GALGAS_location & inErrorLocation,
                                          const C_String & inErrorMessage,
                                          const TC_Array <C_FixItDescription> & inFixItArray
                                          COMMA_LOCATION_ARGS) {
  if (inErrorLocation.isValid ()) { // No error raised if not built
    if (!inErrorLocation.sourceText ().isValid ()) {
      onTheFlyRunTimeError (inErrorMessage COMMA_THERE) ;
    }else{
      signalSemanticError (this,
                           inErrorLocation.sourceText (),
                           C_IssueWithFixIt (inErrorLocation.startLocation (), inErrorLocation.endLocation (), inFixItArray),
                           inErrorMessage
                           COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::emitSemanticError (const GALGAS_location & inErrorLocation,
                                    const GALGAS_string & inErrorMessage,
                                    const TC_Array <C_FixItDescription> & inFixItArray
                                    COMMA_LOCATION_ARGS) {
  if (inErrorLocation.isValid () && inErrorMessage.isValid ()) {
    const C_String errorMessage = inErrorMessage.stringValue () ;
    if (!inErrorLocation.sourceText ().isValid ()) {
      onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      signalSemanticError (this,
                           inErrorLocation.sourceText (),
                           C_IssueWithFixIt (inErrorLocation.startLocation (), inErrorLocation.endLocation (), inFixItArray),
                           errorMessage
                           COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::semanticErrorWith_K_message (const GALGAS_lstring & inKey,
                                              TC_UniqueArray <C_String> & ioNearestKeyArray,
                                              const char * in_K_ErrorMessage
                                              COMMA_LOCATION_ARGS) {
  const C_String key = inKey.mProperty_string.stringValue () ;
//--- Build error message
  C_String message ;
  bool perCentFound = false ;
  const C_String searchErrorMessage (in_K_ErrorMessage) ;
  const int32_t errorMessageLength = searchErrorMessage.length () ;
  for (int32_t i=0 ; i<errorMessageLength ; i++) {
    const utf32 c = searchErrorMessage (i COMMA_HERE) ;
    if (perCentFound) {
      if (UNICODE_VALUE (c) == 'K') {
        message << key ;
      }
      perCentFound = false ;
    }else if (UNICODE_VALUE (c) == '%') {
      perCentFound = true ;
    }else{
      message.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
//--- Add nearest keys, if any
  TC_Array <C_FixItDescription> fixItArray ;
  for (int32_t i=0 ; i<ioNearestKeyArray.count () ; i++) {
    fixItArray.appendObject (C_FixItDescription (kFixItReplace, ioNearestKeyArray (i COMMA_HERE))) ;
  }
//--- Emit error message
  const GALGAS_location key_location = inKey.mProperty_location ;
  semanticErrorAtLocation (key_location, message, fixItArray COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::semanticErrorWith_K_L_message (const GALGAS_lstring & inKey,
                                                const char * in_K_L_ErrorMessage,
                                                const GALGAS_location & inExistingKeyLocation
                                                COMMA_LOCATION_ARGS) {
  const C_String key = inKey.mProperty_string.stringValue () ;
//--- Build error message
  C_String message ;
  bool perCentFound = false ;
  const C_String searchErrorMessage (in_K_L_ErrorMessage) ;
  const int32_t errorMessageLength = searchErrorMessage.length () ;
  for (int32_t i=0 ; i<errorMessageLength ; i++) {
    const utf32 c = searchErrorMessage (i COMMA_HERE) ;
    if (perCentFound) {
      if (UNICODE_VALUE (c) == 'K') {
        message << key ;
      }else if (UNICODE_VALUE (c) == 'L') {
        if (!inExistingKeyLocation.isValid ()) {
          message << "<<unknown>>" ;
        }else if (inExistingKeyLocation.getter_isNowhere (HERE).boolEnum () == kBoolTrue) {
          message << "<<unknown>>" ;
        }else{
          message << inExistingKeyLocation.getter_startLocationString (this COMMA_THERE) ;
        }
      }
      perCentFound = false ;
    }else if (UNICODE_VALUE (c) == '%') {
      perCentFound = true ;
    }else{
      message.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
//--- Emit error message
  const GALGAS_location key_location = inKey.mProperty_location ;
  semanticErrorAtLocation (key_location, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::semanticWarningWith_K_L_message (const GALGAS_lstring & inKey,
                                                  const char * in_K_L_ErrorMessage,
                                                  const GALGAS_location & inExistingKeyLocation
                                                  COMMA_LOCATION_ARGS) {
  const C_String key = inKey.mProperty_string.stringValue () ;
//--- Build error message
  C_String message ;
  bool perCentFound = false ;
  const C_String searchErrorMessage (in_K_L_ErrorMessage) ;
  const int32_t errorMessageLength = searchErrorMessage.length () ;
  for (int32_t i=0 ; i<errorMessageLength ; i++) {
    const utf32 c = searchErrorMessage (i COMMA_HERE) ;
    if (perCentFound) {
      if (UNICODE_VALUE (c) == 'K') {
        message << key ;
      }else if (UNICODE_VALUE (c) == 'L') {
        message << inExistingKeyLocation.getter_startLocationString (this COMMA_THERE) ;
      }
      perCentFound = false ;
    }else if (UNICODE_VALUE (c) == '%') {
      perCentFound = true ;
    }else{
      message.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
//--- Emit error message
  const GALGAS_location key_location = inKey.mProperty_location ;
  semanticWarningAtLocation (key_location, message COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Warnings
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::semanticWarningAtLocation (const GALGAS_location & inWarningLocation,
                                            const C_String & inWarningMessage
                                            COMMA_LOCATION_ARGS) {
  if (inWarningLocation.isValid ()) { // No warning raised if not built
    if (!inWarningLocation.sourceText ().isValid ()) {
      signalRunTimeWarning (this, inWarningMessage COMMA_THERE) ;
    }else{
      signalSemanticWarning (this,
                             inWarningLocation.sourceText (),
                             C_IssueWithFixIt (inWarningLocation.startLocation (), inWarningLocation.endLocation (), TC_Array <C_FixItDescription> ()),
                             inWarningMessage
                             COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::emitSemanticWarning (const GALGAS_location & inWarningLocation,
                                      const GALGAS_string & inWarningMessage,
                                      const TC_Array <C_FixItDescription> & inFixItArray
                                      COMMA_LOCATION_ARGS) {
  if (inWarningLocation.isValid () && inWarningMessage.isValid ()) {
    const C_String warningMessage = inWarningMessage.stringValue () ;
    if (!inWarningLocation.sourceText ().isValid ()) {
      signalRunTimeWarning (this, warningMessage COMMA_THERE) ;
    }else{
      signalSemanticWarning (this,
                             inWarningLocation.sourceText (),
                             C_IssueWithFixIt (inWarningLocation.startLocation (), inWarningLocation.endLocation (), inFixItArray),
                             warningMessage
                             COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Run Time Error
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::onTheFlyRunTimeError (const C_String & inRunTimeErrorMessage
                                       COMMA_LOCATION_ARGS) {
  signalRunTimeError (this, inRunTimeErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark here, next
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location C_Compiler::here (void) const {
  return GALGAS_location (mStartLocationForHere, mEndLocationForHere, mSourceText) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location C_Compiler::separator (void) const {
  return GALGAS_location (mEndLocationForHere, mStartLocationForNext, mSourceText) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location C_Compiler::next (void) const {
  return GALGAS_location (mStartLocationForNext, mEndLocationForNext, mSourceText) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Check And Generate File
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//   C H E C K    A N D    G E N E R A T E   F I L E
//
//----------------------------------------------------------------------------------------------------------------------

static const char START_OF_USER_ZONE_1 [] =  "--- START OF USER ZONE 1\n" ;
static const char END_OF_USER_ZONE_1   [] =  "--- END OF USER ZONE 1\n" ;
static const char START_OF_USER_ZONE_2 [] =  "--- START OF USER ZONE 2\n" ;
static const char END_OF_USER_ZONE_2   [] =  "--- END OF USER ZONE 2\n" ;

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::generateFile (const C_String & inLineCommentPrefix,
                               const TC_UniqueArray <C_String> & inDirectoriesToExclude,
                               const C_String & inFileName,
                               const C_String & inHeader,
                               const C_String & inDefaultUserZone1,
                               const C_String & inGeneratedZone2,
                               const C_String & inDefaultUserZone2,
                               const C_String & inGeneratedZone3,
                               const bool inMakeExecutable) {
  generateFileWithPatternFromPathes (sourceFilePath ().stringByDeletingLastPathComponent (),
                          inDirectoriesToExclude,
                          inLineCommentPrefix,
                          inFileName,
                          inHeader,
                          inDefaultUserZone1,
                          inGeneratedZone2,
                          inDefaultUserZone2,
                          inGeneratedZone3,
                          inMakeExecutable) ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::generateFileFromPathes (const C_String & inStartPath,
                                         const TC_UniqueArray <C_String> & inDirectoriesToExclude,
                                         const C_String & inFileName,
                                         const C_String & inContents) {
//--- Verbose option ?
  const bool verboseOptionOn = verboseOutput () ;
//--- Start path : by default, use source file directory
  const C_String startPath = (inStartPath.length () == 0)
   ? sourceFilePath ().stringByDeletingLastPathComponent ()
   : inStartPath ;
//--- Search file in directory
  const C_String fullPathName = C_FileManager::findFileInDirectory (startPath, inFileName, inDirectoriesToExclude) ;
  if (fullPathName.length () == 0) {
  //--- File does not exist : create it
    C_String fileName = startPath ;
    fileName.appendString ("/") ;
    fileName.appendString (inFileName) ;
    const C_String directory = fileName.stringByDeletingLastPathComponent () ;
    C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    if (performGeneration ()) {
      C_TextFileWrite f (fileName) ;
      bool ok = f.isOpened () ;
      if (! ok) {
        C_String message ;
        message << "Cannot open '" << fileName << "' file in write mode." ;
        onTheFlySemanticError (message COMMA_HERE) ;
      }
      f << inContents ;
      if (verboseOptionOn) {
        ggs_printFileOperationSuccess (C_String ("Created '") + fileName + "'.\n") ;
      }
    }else{
      ggs_printWarning (this, C_SourceTextInString(), C_IssueWithFixIt (), C_String ("Need to create '") + fileName + "'.\n" COMMA_HERE) ;
    }
  }else{
    const C_String previousContents = C_FileManager::stringWithContentOfFile (fullPathName) ;
    const bool same = previousContents == inContents ;
    if (! same) {
      if (performGeneration ()) {
        C_TextFileWrite f (fullPathName) ;
        if (! f.isOpened ()) {
          C_String message ;
          message << "Cannot open '" << fullPathName << "' file in write mode." ;
          onTheFlySemanticError (message COMMA_HERE) ;
        }else{
          f << inContents ;
          if (verboseOptionOn) {
            ggs_printFileOperationSuccess (C_String ("Replaced '") + fullPathName + "'.\n") ;
          }
        }
      }else{
        ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), C_String ("Need to replace '") + fullPathName + "'.\n" COMMA_HERE) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_Compiler::generateFileWithPatternFromPathes (
  const C_String & inStartPath,
  const TC_UniqueArray <C_String> & inDirectoriesToExclude,
  const C_String & inLineCommentPrefix,
  const C_String & inFileName,
  const C_String & inHeader,
  const C_String & inDefaultUserZone1,
  const C_String & inGeneratedZone2,
  const C_String & inDefaultUserZone2,
  const C_String & inGeneratedZone3,
  const bool inMakeExecutable
) {
//--- Verbose option ?
  const bool verboseOptionOn = verboseOutput () ;
//--- User zones
  const C_String kSTART_OF_USER_ZONE_1 = C_String (inLineCommentPrefix) + START_OF_USER_ZONE_1 ;
  const C_String kEND_OF_USER_ZONE_1   = C_String (inLineCommentPrefix) + END_OF_USER_ZONE_1 ;
  const C_String kSTART_OF_USER_ZONE_2 = C_String (inLineCommentPrefix) + START_OF_USER_ZONE_2 ;
  const C_String kEND_OF_USER_ZONE_2   = C_String (inLineCommentPrefix) + END_OF_USER_ZONE_2 ;
//--- Start path : by default, use source file directory
  const C_String startPath = (inStartPath.length () == 0)
    ? sourceFilePath ().stringByDeletingLastPathComponent ()
    : inStartPath
  ;
//--- Search file in directory
  const C_String fullPathName = C_FileManager::findFileInDirectory (startPath, inFileName, inDirectoriesToExclude) ;
  if (fullPathName.length () == 0) {
  //--- File does not exist : create it
    C_String fileName = startPath ;
    fileName.appendString ("/") ;
    fileName.appendString (inFileName) ;
    const C_String directory = fileName.stringByDeletingLastPathComponent () ;
    C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    if (performGeneration ()) {
      C_TextFileWrite f (fileName) ;
      bool ok = f.isOpened () ;
      if (! ok) {
        C_String message ;
        message << "Cannot open '" << fileName << "' file in write mode." ;
        onTheFlySemanticError (message COMMA_HERE) ;
      }
      f << inHeader << kSTART_OF_USER_ZONE_1 << inDefaultUserZone1 << kEND_OF_USER_ZONE_1
        << inGeneratedZone2 << kSTART_OF_USER_ZONE_2 << inDefaultUserZone2 << kEND_OF_USER_ZONE_2
        << inGeneratedZone3 ;
      if (verboseOptionOn) {
        ggs_printFileCreationSuccess (C_String ("Created '") + fileName + "'.\n") ;
      }

      f.close () ;
      if (inMakeExecutable) {
        #if COMPILE_FOR_WINDOWS == 0
          struct stat fileStat ;
          ::stat (fileName.cString (HERE), & fileStat) ;
          ::chmod (fileName.cString (HERE), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
        #endif
      }
    }else{
      ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), C_String ("Need to create '") + fileName + "'.\n" COMMA_HERE) ;
    }
  }else{
    C_String firstUserPart ;
    C_String secondUserPart ;
    C_String firstGeneratedPart ;
    C_String secondGeneratedPart ;
    logFileRead (fullPathName) ;
    C_String s = C_FileManager::stringWithContentOfFile (fullPathName) ;
    TC_UniqueArray <C_String> stringArray ;
    s.componentsSeparatedByString (kSTART_OF_USER_ZONE_1, stringArray) ;
    C_String header ;
    bool ok = stringArray.count () == 2 ;
    if (ok) {
      header = stringArray (0 COMMA_HERE) ;
      s = stringArray (1 COMMA_HERE) ;
      s.componentsSeparatedByString (kEND_OF_USER_ZONE_1, stringArray) ;
      ok = stringArray.count () == 2 ;
    }
    if (ok) {
      firstUserPart = stringArray (0 COMMA_HERE) ;
      s = stringArray (1 COMMA_HERE) ;
      s.componentsSeparatedByString (kSTART_OF_USER_ZONE_2, stringArray) ;
      ok = stringArray.count () == 2 ;
    }
    if (ok) {
      firstGeneratedPart = stringArray (0 COMMA_HERE) ;
      s = stringArray (1 COMMA_HERE) ;
      s.componentsSeparatedByString (kEND_OF_USER_ZONE_2, stringArray) ;
      ok = stringArray.count () == 2 ;
    }
    if (ok) {
      secondUserPart = stringArray (0 COMMA_HERE) ;
      secondGeneratedPart = stringArray (1 COMMA_HERE) ;
    }
    if (! ok) {
      ggs_printError (this, C_SourceTextInString (), C_IssueWithFixIt (), C_String ("BAD FILE '") + fullPathName + "'.\n" COMMA_HERE) ;
    }else if ((header == inHeader) && (firstGeneratedPart == inGeneratedZone2) && (secondGeneratedPart == inGeneratedZone3)) {
    }else if (performGeneration ()) {
      C_TextFileWrite f (fullPathName) ;
      ok = f.isOpened () ;
      if (! ok) {
        C_String message ;
        message << "Cannot open '" << fullPathName << "' file in write mode." ;
        onTheFlySemanticError (message COMMA_HERE) ;
      }
      f << inHeader
        << kSTART_OF_USER_ZONE_1 << firstUserPart << kEND_OF_USER_ZONE_1
        << inGeneratedZone2
        << kSTART_OF_USER_ZONE_2 << secondUserPart << kEND_OF_USER_ZONE_2
        << inGeneratedZone3 ;
      if (verboseOptionOn) {
        ggs_printFileOperationSuccess (C_String ("Replaced '") + fullPathName + "'.\n") ;
      }
      f.close () ;
      if (inMakeExecutable) {
        #if COMPILE_FOR_WINDOWS == 0
          struct stat fileStat ;
          ::stat (fullPathName.cString (HERE), & fileStat) ;
          ::chmod (fullPathName.cString (HERE), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
        #endif
      }
    }else{
      ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), C_String ("Need to replace '") + fullPathName + "'.\n" COMMA_HERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
