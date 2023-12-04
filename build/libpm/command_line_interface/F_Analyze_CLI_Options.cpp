//----------------------------------------------------------------------------------------------------------------------
//
//  Routine 'F_Analyze_CLI_Options' : a way for automatic command line options analysis for MacOS, Win32 and Unix.     *
//
//  This file is part of libpm library
//
//  Copyright (C) 2001, ..., 2017 Pierre Molinaro.
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
#include "command_line_interface/C_BoolCommandLineOption.h"
#include "command_line_interface/C_UIntCommandLineOption.h"
#include "command_line_interface/C_StringCommandLineOption.h"
#include "command_line_interface/C_StringListCommandLineOption.h"
#include "command_line_interface/C_builtin_CLI_Options.h"
#include "streams/C_ConsoleOut.h"
#include "files/C_FileManager.h"

//----------------------------------------------------------------------------------------------------------------------

#include <string.h>
#include <ctype.h>

//----------------------------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//----------------------------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 1
  #include <windows.h>
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//                        C O C O A   O U T P U T
//
//----------------------------------------------------------------------------------------------------------------------

static bool gCocoaOutput = false ;

//----------------------------------------------------------------------------------------------------------------------

bool cocoaOutput (void) {
  return gCocoaOutput ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * galgasVersionString (void) {
  return "3.6.3" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     print_usage
//
//----------------------------------------------------------------------------------------------------------------------

static void print_usage (int argv, const char * argc []) {
  co.setForeColor (kMagentaForeColor) ;
  co.setTextAttribute (kBoldTextAttribute) ;
  co << "Usage:\n" ;
  co.setTextAttribute (kAllAttributesOff) ;
  if (argv > 0) {
    co << argc [0] ;
  }
  C_BoolCommandLineOption::printUsageOfBoolOptions () ;
  C_UIntCommandLineOption::printUsageOfUIntOptions () ;
  C_StringCommandLineOption::printUsageOfStringOptions () ;
  C_StringListCommandLineOption::printUsageOfStringOptions () ;
  co << " file...\n" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     print_options
//
//----------------------------------------------------------------------------------------------------------------------

static void print_option_list (void) {
  printf ("*** Available command line options:\n") ;
  C_BoolCommandLineOption::printBoolOptions () ;
  C_UIntCommandLineOption::printUIntOptions () ;
  C_StringCommandLineOption::printStringOptions () ;
  C_StringListCommandLineOption::printStringOptions () ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     print_help
//
//----------------------------------------------------------------------------------------------------------------------

static void print_help (int argv,
                        const char * argc [],
                        const char * inExtensions [],
                        const char * inHelpMessages [],
                        void print_tool_help_message (void)) {
  #ifdef __LP64__
    co << "Compiled in 64 bits mode" ;
  #else
    co << "Compiled in 32 bits mode" ;
  #endif
  #ifndef DO_NOT_GENERATE_CHECKINGS
    co << " (with debug code)" ;
  #endif
  co << ".\n" ;
  print_tool_help_message () ;
/*  #ifndef DO_NOT_GENERATE_CHECKINGS
    co << "sizeof (short)=" << ((uint32_t) sizeof (short))
       << ", sizeof (int)=" << ((uint32_t) sizeof (int))
       << ", sizeof (long)=" << ((uint32_t) sizeof (long))
       << ", sizeof (long long)=" << ((uint32_t) sizeof (long long))
       << ", sizeof (wchar_t)=" << ((uint32_t) sizeof (wchar_t))
       << "\n" ;
  #endif */
  print_usage (argv, argc) ;
  co.setForeColor (kMagentaForeColor) ;
  co.setTextAttribute (kBoldTextAttribute) ;
  co << "Options:\n" ;
  co.setTextAttribute (kAllAttributesOff) ;
  co << "You can place options anywhere in the command line: they will be executed before the files are processed.\n" ;
  C_BoolCommandLineOption::printBoolOptions () ;
  C_UIntCommandLineOption::printUIntOptions () ;
  C_StringCommandLineOption::printStringOptions () ;
  C_StringListCommandLineOption::printStringOptions () ;

  int32_t extensionIndex = 0 ;
  while (inExtensions [extensionIndex] != nullptr) {
    extensionIndex ++ ;
  }
  co.setForeColor (kMagentaForeColor) ;
  co.setTextAttribute (kBoldTextAttribute) ;
  co << "Handled extension" << ((extensionIndex > 1) ? "s" : "") << ":\n" ;
  co.setTextAttribute (kAllAttributesOff) ;
  extensionIndex = 0 ;
  while (inExtensions [extensionIndex] != nullptr) {
    co.setForeColor (kBlueForeColor) ;
    co.setTextAttribute (kBoldTextAttribute) ;
    co << "." << inExtensions [extensionIndex] ;
    co.setTextAttribute (kAllAttributesOff) ;
    const uint32_t extensionLength = (uint32_t) (strlen (inExtensions [extensionIndex]) & UINT32_MAX) ;
    const uint32_t kDisplayLength = 20 ;
    if (extensionLength < kDisplayLength) {
      for (uint32_t i=extensionLength ; i<kDisplayLength ; i++) {
        co << " " ;
      }
    }else{
      co << "\n" ;
      co.appendSpaces (kDisplayLength+2) ;
    }
    co << inHelpMessages [extensionIndex] << "\n" ;
    extensionIndex ++ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//     Command line option beginning with a single '-'
//
//----------------------------------------------------------------------------------------------------------------------

static void option_beginning_with_single_minus_sign (const char * inCommand,
                                                     bool & outOk) {
  outOk = false ;
  const uint32_t optionLength = (uint32_t) (strlen (inCommand) & UINT32_MAX) ;
//--- Search for boolean option (minus following by a character)
  if (optionLength == 2) {
    C_BoolCommandLineOption::setBoolOptionForCommandChar (inCommand [1], outOk) ;
    if (! outOk) {
      co << "Error : unknown '" << inCommand << "' command line option.\n" ;
    }
  }else if (optionLength > 2) {
  //--- Search for an UInt option
    bool correctFormat = false ;
    C_UIntCommandLineOption::setUIntOptionForCommandChar (& inCommand [1], outOk, correctFormat) ;
  //--- Not found : search for a string option
    if (! outOk) {
      C_StringCommandLineOption::setStringOptionForCommandChar (& inCommand [1], outOk, correctFormat) ;
    }
    if (! outOk) {
      C_StringListCommandLineOption::setStringListOptionForCommandChar (& inCommand [1], outOk, correctFormat) ;
    }
    if (! outOk) {
      co << "Error : unknown '" << inCommand << "' command line option.\n" ;
    }else if (! correctFormat) {
      outOk = false ;
      co << "Error : incorrect format for '"
         << inCommand
         << "' command line option (correct format is : '-"
         << inCommand
         << "=value').\n" ;
    }
  }else{
    co << "Error : unknown '" << inCommand << "' command line option.\n" ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//     Command line option beginning with '--'
//
//----------------------------------------------------------------------------------------------------------------------

static void option_beginning_with_double_minus_sign (const char * inCommand,
                                                     bool & outFound) {
  outFound = false ;
  bool correctFormat = true ;
//--- Look for a boolean argument
  C_BoolCommandLineOption::setBoolOptionForCommandString (& inCommand [2], outFound, gCocoaOutput) ;
//--- If not found, look for a Uint option
  if (! outFound) {
    C_UIntCommandLineOption::setUIntOptionForCommandString (& inCommand [2], outFound, correctFormat) ;
  }
//--- If not found, look for a String option
  if (! outFound) {
    C_StringCommandLineOption::setStringOptionForCommandString (& inCommand [2], outFound, correctFormat) ;
  }
  if (! outFound) {
    C_StringListCommandLineOption::setStringListOptionForCommandString (& inCommand [2], outFound, correctFormat) ;
  }
  if (! outFound) {
    co << "Error : unknown '" << inCommand << "' command line option.\n" ;
  }else if (! correctFormat) {
    outFound = false ;
    co << "Error : incorrect format for '" << inCommand << "' command line option.\n" ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//     analyze_one_option
//
//----------------------------------------------------------------------------------------------------------------------

static void analyze_one_option (const char * inCommand,
                                TC_UniqueArray <C_String> & outSourceFileArray,
                                bool & outOk) {
  const int32_t optionLength = (int32_t) (strlen (inCommand) & UINT32_MAX) ;
  bool found = false ;
//--- Begin by a '-' character ?
  if ((optionLength > 1) && (inCommand [0] == '-')) {
  //--- Second character is also a '-' ?
    if ((optionLength > 2) && (inCommand [1] == '-')) {
    //--- two minus signs '--' at beginning
      option_beginning_with_double_minus_sign (inCommand, found) ;
    }else{
    //--- Single '-' at beginning
      option_beginning_with_single_minus_sign (inCommand, found) ;
    }
  }
//--- Look for a file
  if (! found) {
    if (inCommand [0] != '-') {
      C_String fileName ;
      #if COMPILE_FOR_WINDOWS == 1
        const int32_t fileLength = (int32_t) strlen (inCommand) ;
        int32_t firstChar = 0 ;
        if ((fileLength > 3)
         && isalpha (inCommand [0])
         && (inCommand [1] == ':')
         && (inCommand [2] == '\\')) {
          fileName << "/" ;
          fileName.appendUnicodeCharacter (TO_UNICODE (inCommand [0]) COMMA_HERE) ;
          fileName << "/" ;
          firstChar = 3 ;
        }
        for (int32_t i=firstChar ; i<fileLength ; i++) {
          fileName.appendUnicodeCharacter (TO_UNICODE (((inCommand [i] == '\\') ? '/' : inCommand [i])) COMMA_HERE) ;
        }
      #else
        fileName = inCommand ;
      #endif
      outSourceFileArray.appendObject (C_FileManager::absolutePathFromPath (fileName, "")) ;
      found = true ;
    }
  }
//--- Error ?
  if (! found) {
    outOk = false ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 1
  static void getSourceFileFromWin32OpenDialog (TC_UniqueArray <C_String> & outSourceFileArray,
                                                const char * inExtensions []) {
    char szFile[260] ;       // buffer for file name
    OPENFILENAME ofn ;
  //--- Initialize OPENFILENAME
    ZeroMemory (& ofn, sizeof(ofn)) ;
    ofn.lStructSize = sizeof (ofn) ;
    ofn.hwndOwner = nullptr ;
    ofn.lpstrFile = szFile ;
  // Set lpstrFile[0] to '\0' so that GetOpenFileName does not
  // use the contents of szFile to initialize itself.
    ofn.lpstrFile[0] = '\0';
    ofn.nMaxFile = sizeof (szFile) ;
    char filterString [1000] = "";
    int32_t filterIndex = 0 ;
    while (inExtensions [filterIndex] != nullptr) {
      if (filterIndex != 0) {
        strcat (filterString, ";") ;
      }
      strcat (filterString, "*.") ;
      strcat (filterString, inExtensions [filterIndex]) ;
      filterIndex ++ ;
    }
    char filter [1000] ;
    const char zero = '\0' ;
    snprintf (filter, 999, "%c%s%c", zero, filterString, zero) ;
    ofn.lpstrFilter = filter ;
    ofn.nFilterIndex = 1;
    ofn.lpstrFileTitle = nullptr;
    ofn.nMaxFileTitle = 0 ;
    char * currentDir = getcwd (nullptr, 0) ;
    ofn.lpstrInitialDir = currentDir ;
    ofn.lpstrTitle = nullptr ;
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY ;
    if (GetOpenFileName (& ofn)) {
      C_String fileName ;
      const int32_t fileLength = (int32_t) strlen (szFile) ;
      int32_t firstChar = 0 ;
      if ((fileLength > 3)
       && isalpha (szFile [0])
       && (szFile [1] == ':')
       && (szFile [2] == '\\')) {
        fileName << "/" ;
        fileName.appendUnicodeCharacter (TO_UNICODE (szFile [0]) COMMA_HERE) ;
        fileName << "/" ;
        firstChar = 3 ;
      }
      for (int32_t i=firstChar ; i<fileLength ; i++) {
        fileName.appendUnicodeCharacter (TO_UNICODE ((szFile [i] == '\\') ? '/' : szFile [i]) COMMA_HERE) ;
      }
      outSourceFileArray.appendObject (fileName) ;
    }
    ::free (currentDir) ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//     F_Analyze_CLI_Options
//
//----------------------------------------------------------------------------------------------------------------------

void F_Analyze_CLI_Options (const int argv,
                            const char * argc [],
                            TC_UniqueArray <C_String> & outSourceFileArray,
                            const char * inExtensions [],
                            const char * inHelpMessages [],
                            void print_tool_help_message (void)) {
//--- Analyze command
  bool errorFound = false ;
  for (int32_t i=1 ; i<argv ; i++) {
    bool ok = true ;
    analyze_one_option (argc [i],
                        outSourceFileArray,
                        ok) ;
    if (! ok) {
      errorFound = true ;
    }
  }
  if (errorFound) {
    print_option_list () ;
  }
//--- No colored output ?
  #if COMPILE_FOR_WINDOWS == 0
    if (gOption_generic_5F_cli_5F_options_no_5F_color.mValue) {
      C_ColoredConsole::setUseTextAttributes (false) ;
    }
  #endif
//--- Print version ?
  if (gOption_generic_5F_cli_5F_options_display_5F_version.mValue) {
    co << argc [0] << " : " << projectVersionString () ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      co << " [DEBUG]" ;
    #endif
    co << ", build with GALGAS " << galgasVersionString () << "\n" ;
  }
//--- Print Help ?
  if (gOption_generic_5F_cli_5F_options_display_5F_help.mValue) {
    print_help (argv, argc, inExtensions, inHelpMessages, print_tool_help_message) ;
  }
//--- WIN32 : if got no file, display file open dialog
  #if COMPILE_FOR_WINDOWS == 1
    if ((outSourceFileArray.count () == 0) && !gOption_generic_5F_cli_5F_options_nodialog.mValue) {
      getSourceFileFromWin32OpenDialog (outSourceFileArray, inExtensions) ;
    }
  #endif
}

//----------------------------------------------------------------------------------------------------------------------
