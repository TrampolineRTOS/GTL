#! /usr/bin/python3
# -*- coding: UTF-8 -*-

#-----------------------------------------------------------------------------------------

import sys, time, os, json
import makefile, default_build_options
import generic_galgas_makefile

#-----------------------------------------------------------------------------------------

def buildForUnix (dictionary, jsonFilePath, EXECUTABLE, BUILD_DIR_NAME, GOAL, maxParallelJobs, displayCommands) :
  if os.path.exists (os.path.expanduser ("~/galgas-tools-for-cross-compilation")) :
    print (makefile.BLUE () + makefile.BOLD () + "The '~/galgas-tools-for-cross-compilation' is useless from now: you can delete it" + makefile.ENDC ()) ;
  gmf = generic_galgas_makefile.GenericGalgasMakefile ()
  gmf.mJSONfilePath = jsonFilePath
  gmf.mDictionary = dictionary
  gmf.mExecutable = EXECUTABLE
  gmf.mGoal = GOAL
  gmf.mMaxParallelJobs = maxParallelJobs
  gmf.mDisplayCommands = displayCommands
  gmf.mTargetName = "unix"
  gmf.mBuildDirName = BUILD_DIR_NAME
#---
  gmf.mCompilerTool = ["gcc"]
  gmf.mLinkerTool   = ["g++"]
  gmf.mStripTool    = ["strip"]
  gmf.mSudoTool     = ["sudo"]

  gmf.mCompilationMessage = "Compiling for Unix"
  gmf.mLinkingMessage = "Linking for Unix"
  gmf.mInstallationgMessage = "Installing"
  gmf.mStripMessage = "Stripping"

  if (os.name == "nt") or sys.platform.startswith ("cygwin") : # Cygwin
    gmf.mLinkerTool.append ("-static")
    gmf.mExecutableSuffix = ".exe"
    gmf.mCompilationMessage = "Compiling for Cygwin"
    gmf.mLinkingMessage = "Linking for Cygwin"

#--- Options for all compilers
  gmf.mAllCompilerOptions = default_build_options.allCompilerOptions (["-Wconversion"])
#--- Options for release mode
  gmf.mCompilerReleaseOptions = default_build_options.compilerReleaseOptions (["-O1"])
#--- Options for debug mode
  gmf.mCompilerDebugOptions = default_build_options.compilerDebugOptions ([])
#--- Options for C compiling (.c extension)
  gmf.m_C_CompilerOptions = default_build_options.C_CompilerOptions ([])
#--- Options for C++ compiling (.cpp extension)
  gmf.m_Cpp_CompilerOptions = default_build_options.Cpp_CompilerOptions (["-Weffc++", "-Wsign-promo"])
#--- Options for Objective-C compiling (.m extension)
  gmf.m_ObjectiveC_CompilerOptions = default_build_options.ObjectiveC_CompilerOptions ([])
#--- Options for Objective-C++ compiling (.mm extension)
  gmf.m_ObjectiveCpp_CompilerOptions = default_build_options.ObjectiveCpp_CompilerOptions ([])
#--- Run makefile
  gmf.run ()

#-----------------------------------------------------------------------------------------
