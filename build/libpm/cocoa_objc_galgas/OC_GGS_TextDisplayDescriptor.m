//----------------------------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2011, ..., 2016 Pierre Molinaro.
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

#import "OC_GGS_TextDisplayDescriptor.h"
#import "OC_GGS_TextSyntaxColoring.h"
#import "OC_Lexique.h"
#import "OC_GGS_DocumentData.h"
#import "OC_GGS_Document.h"
#import "OC_GGS_TextView.h"
#import "OC_GGS_RulerViewForTextView.h"
#import "OC_GGS_ApplicationDelegate.h"
#import "OC_GGS_Scroller.h"
#import "PMIssueDescriptor.h"
#import "PMDebug.h"
#import "OC_Token.h"

//----------------------------------------------------------------------------------------------------------------------

#include <netdb.h>
#include <netinet/in.h>

//----------------------------------------------------------------------------------------------------------------------

//#define DEBUG_MESSAGES

//----------------------------------------------------------------------------------------------------------------------

static inline NSUInteger imin (const NSUInteger a, const NSUInteger b) { return a < b ? a : b ; }
static inline NSUInteger imax (const NSUInteger a, const NSUInteger b) { return a > b ? a : b ; }

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_GGS_TextDisplayDescriptor

//----------------------------------------------------------------------------------------------------------------------

@synthesize documentData ;
@synthesize isDirty ;

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) description {
  return documentData.fileURL.path ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSImage *) imageForClosingInUserInterface {
  return [NSImage imageNamed:@"NSStopProgressFreestandingTemplate"] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) refreshShowInvisibleCharacters {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  const BOOL show = [[NSUserDefaults standardUserDefaults] boolForKey: @"PMShowInvisibleCharacters"] ;
  [mTextView.layoutManager setShowsInvisibleCharacters: show] ;
  [mTextView setNeedsDisplay: YES] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) textSelectionStart {
  return mTextSelectionStart ;
}

//----------------------------------------------------------------------------------------------------------------------

- (OC_GGS_TextDisplayDescriptor *) initWithDocumentData: (OC_GGS_DocumentData *) inDocumentData
                                   displayDocument: (OC_GGS_Document *) inDocumentUsedForDisplaying  {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [self init] ;
  if (self) {
    noteObjectAllocation (self) ;
    documentData = inDocumentData ;
    mDocumentUsedForDisplaying = inDocumentUsedForDisplaying ;
    mTextView = [[OC_GGS_TextView alloc]
      initWithFrame: NSMakeRect (0.0, 0.0, 10.0, 10.0)
      documentUsedForDisplaying: inDocumentUsedForDisplaying
      displayDescriptor: self
    ] ;
//    NSLog (@"Default font %@", mTextView.font) ;
//    NSLog (@"Default attributes %@", mTextView.textStorage.attributeRuns) ;
    mTextView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable ;
    mTextView.allowsUndo = YES ;
    mTextView.drawsBackground = NO ;
    mTextView.grammarCheckingEnabled = NO ;
    mTextView.continuousSpellCheckingEnabled = NO ;
    [mTextView useAllLigatures: nil] ;
    mTextView.automaticQuoteSubstitutionEnabled = NO ;
    mTextView.smartInsertDeleteEnabled = NO ;
    mTextView.automaticDashSubstitutionEnabled = NO ;
    mTextView.layoutManager.allowsNonContiguousLayout = NO ;
    mTextView.layoutManager.usesFontLeading = YES ;
    mTextView.layoutManager.backgroundLayoutEnabled = NO ;
    mTextView.richText = NO ;
    mTextView.importsGraphics = NO ;
    mTextView.allowsImageEditing = NO ;
    mTextView.layoutManager.usesScreenFonts = YES ;
    mTextView.layoutManager.showsControlCharacters = YES ;
//    mTextView.layoutManager.showsInvisibleCharacters = YES ;
    mTextView.automaticTextReplacementEnabled = NO ;
    mTextView.usesFindBar = YES ;
  //---
    [mTextView setDelegate: self] ;
  //---
    mScrollView = [[NSScrollView alloc] initWithFrame: NSMakeRect (0.0, 0.0, 100.0, 76.0)] ;
    [mScrollView setScrollsDynamically: YES] ;
    mScrollView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable ;
    mScrollView.borderType = NSBezelBorder ;
  //--- Vertical Ruler
    mRulerView = [OC_GGS_RulerViewForTextView new] ;
    [mScrollView setVerticalRulerView: mRulerView] ;
    [mScrollView.verticalRulerView setRuleThickness: 50.0] ;
    [mScrollView setHasVerticalRuler:YES] ;
    [mScrollView setRulersVisible: YES] ;
  //--- Vertical scroller
    OC_GGS_Scroller * scroller = [OC_GGS_Scroller new] ;
    [scroller setIsSourceTextViewScroller: YES] ;
    [mScrollView setVerticalScroller: scroller] ;
    [mScrollView setHasVerticalScroller: YES] ;
    mScrollView.documentView = mTextView ;
  //--- Pop up Button
    mEntryListPopUpButton = [[NSPopUpButton alloc] initWithFrame:NSMakeRect (5.0, 78.0, 90.0, 22.0)] ;
    mEntryListPopUpButton.autoresizingMask = NSViewWidthSizable | NSViewMinYMargin ;
    mEntryListPopUpButton.font = [NSFont systemFontOfSize:11.0] ;
  //--- Define enclosing view
    mEnclosingView = [[NSView alloc] initWithFrame:NSMakeRect (0.0, 0.0, 100.0, 100.0)] ;
    mEnclosingView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable ;
    [mEnclosingView addSubview: mScrollView] ;
    [mEnclosingView addSubview: mEntryListPopUpButton] ;
  //--- Add "Show Invisible Character" preference observer
    NSUserDefaultsController * udc = [NSUserDefaultsController sharedUserDefaultsController] ;
    [udc
      addObserver:self
      forKeyPath:@"values.PMShowInvisibleCharacters"
      options:NSKeyValueObservingOptionNew
      context:NULL
    ] ;
    [self refreshShowInvisibleCharacters] ;
    [documentData.textSyntaxColoring addDisplayDescriptor: self] ;
   //--- Set selection
    [[NSRunLoop mainRunLoop]
      performSelector: @selector (setSelectionAndScrollToVisibleAfterInit)
      target: self
      argument: nil
      order: 0
      modes: [NSArray arrayWithObject: NSDefaultRunLoopMode]
    ] ;
  }
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s:DONE", __PRETTY_FUNCTION__) ;
  #endif
  return self ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) setSelectionAndScrollToVisibleAfterInit {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSString * key = [NSString stringWithFormat:@"SELECTION:%@:%@", mDocumentUsedForDisplaying.fileURL.path, documentData.fileURL.path] ;
  NSString * selectionRangeString = [[NSUserDefaults standardUserDefaults] objectForKey:key] ;
  // NSLog (@"READ '%@' -> %@", key, selectionRangeString) ;
  const NSRange selectionRange = NSRangeFromString (selectionRangeString) ;
  const NSUInteger sourceTextLength = documentData.sourceString.length ;
  if (NSMaxRange (selectionRange) <= sourceTextLength) {
    [self setSelectionRangeAndMakeItVisible:selectionRange] ;
  } 
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s:DONE", __PRETTY_FUNCTION__) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) detachTextDisplayDescriptor {
  NSUserDefaultsController * udc = [NSUserDefaultsController sharedUserDefaultsController] ;
  [udc
    removeObserver:self
    forKeyPath:@"values.PMShowInvisibleCharacters"
  ] ;
  [mTextView setDelegate:nil] ;
  [mTextView detachTextView] ;
  for (NSView * subview in mEnclosingView.subviews.copy) {
    [subview removeFromSuperview] ;
  }
  [documentData.textSyntaxColoring removeDisplayDescriptor:self] ;
//---
  documentData = nil ;
  mDocumentUsedForDisplaying = nil ;
  mEnclosingView = nil ;
  mTextView = nil ;
  mEntryListPopUpButton = nil ;
  mRulerView = nil ;
  mScrollView = nil ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSTextView *) textView {
  return mTextView ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSView *) enclosingView {
  return mEnclosingView ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSURL *) sourceURL {
  return documentData.fileURL ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) title {
  return documentData.fileURL.lastPathComponent ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject: (id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  if ([inKeyPath isEqualToString: @"values.PMShowInvisibleCharacters"]) {
    [self refreshShowInvisibleCharacters] ;
  }else{
    [super
      observeValueForKeyPath:inKeyPath
      ofObject:inObject
      change:inChange
      context:inContext
    ] ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Goto Line

//----------------------------------------------------------------------------------------------------------------------
//
//        G O T O    L I N E    A N D     C O L U M N                                            
//
//----------------------------------------------------------------------------------------------------------------------

- (void) gotoLine: (NSUInteger) inLine {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Find index
  NSUInteger currentLine = 0 ;
  NSString * sourceString = [[mTextView textStorage] string] ;
  NSRange range = [sourceString lineRangeForRange: NSMakeRange (0, 0)] ;
  NSUInteger lastStartOfLine = 0 ;
  while ((currentLine < inLine) && (range.length > 0)) {
    currentLine ++ ;
    lastStartOfLine = range.location ;
    range = [sourceString lineRangeForRange: NSMakeRange (NSMaxRange (range), 0)] ;
  }
//--- Change selected range
  if (range.length > 0) {
    range.location = lastStartOfLine ;
    range.length = 0 ;
  }
  [mTextView setSelectedRange: range] ;
  [mTextView scrollRangeToVisible: range] ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Block Comment

//----------------------------------------------------------------------------------------------------------------------

- (void) commentSelection {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  const NSRange newRange = [documentData.textSyntaxColoring commentRange:mTextView.selectedRange] ;
  mTextView.selectedRange = newRange ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) uncommentSelection {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  const NSRange newRange = [documentData.textSyntaxColoring uncommentRange:mTextView.selectedRange] ;
  mTextView.selectedRange = newRange ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Indentation

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) spaceString {
  const NSUInteger spaceCount = (NSUInteger) [[NSUserDefaults standardUserDefaults] integerForKey:GGS_editor_space_for_tab] ;
  //NSLog (@"spaceCount %u", spaceCount) ;
  NSMutableString * s = [[NSMutableString alloc] init] ;
  for (NSUInteger i=0 ; i<spaceCount ; i++) {
    [s appendString:@" "] ;
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSAttributedString *) spaceAttributedString {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSDictionary * attributeDictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    mTextView.font, NSFontAttributeName,
    nil
  ] ;
  return [[NSAttributedString alloc] initWithString:self.spaceString attributes:attributeDictionary] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) shiftRightRange: (NSValue *) inRangeValue {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSAttributedString * spaceString = self.spaceAttributedString ;
  const NSRange selectedRange = [inRangeValue rangeValue] ;
  //NSLog (@"selectedRange [%d, %d]", selectedRange.location, selectedRange.length) ;
  NSMutableAttributedString * mutableSourceString = [mTextView textStorage] ;
  NSString * sourceString = [mutableSourceString string] ;
  const NSRange lineRange = [sourceString lineRangeForRange:selectedRange] ;
  //NSLog (@"lineRange [%d, %d]", lineRange.location, lineRange.length) ;
  NSInteger insertedCharsCount = 0 ;
  NSRange currentLineRange = [sourceString lineRangeForRange:NSMakeRange (lineRange.location + lineRange.length - 1, 1)] ;
  do {
    //NSLog (@"currentLineRange [%d, %d]", currentLineRange.location, currentLineRange.length) ;
    [mutableSourceString insertAttributedString:spaceString atIndex:currentLineRange.location] ;
    insertedCharsCount += [spaceString length] ;
    if (currentLineRange.location > 0) {
      currentLineRange = [sourceString lineRangeForRange:NSMakeRange (currentLineRange.location - 1, 1)] ;
    }
  }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)) ;
//--- Update selected range
  const NSRange newSelectedRange = NSMakeRange (
    selectedRange.location + spaceString.length,
    selectedRange.length + ((NSUInteger) insertedCharsCount) - spaceString.length
  ) ;
  [mTextView setSelectedRange:newSelectedRange] ;
//--- Register undo
  [documentData.textSyntaxColoring.undoManager
    registerUndoWithTarget:self
    selector:@selector (shiftLeftRange:)
    object:[NSValue valueWithRange:newSelectedRange]
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) shiftRightAction {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  const NSRange selectedRange = [mTextView selectedRange] ;
  [self shiftRightRange:[NSValue valueWithRange:selectedRange]] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) shiftLeftRange: (NSValue *) inRangeValue {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Get range to be examined
  const NSRange initialSelectedRange = [inRangeValue rangeValue] ;
//--- Block comment string
  NSString * spaceString = self.spaceString ;
  const NSUInteger twoSpaceLength = [spaceString length] ;
//--- Get source string
  NSMutableAttributedString * mutableSourceString = [mTextView textStorage] ;
  NSString * sourceString = [mutableSourceString string] ;
  #ifdef DEBUG_UNCOMMENTRANGE
    NSLog (@"spaceString '%@', text length %u", spaceString, [sourceString length]) ;
    NSLog (@"initialSelectedRange [%d, %d]", initialSelectedRange.location, initialSelectedRange.length) ;
  #endif
//--- Final selection range
  NSRange finalSelectedRange = initialSelectedRange ;
//--- Get line range that is affected by the operation
  const NSRange lineRange = [sourceString lineRangeForRange:initialSelectedRange] ;
  #ifdef DEBUG_UNCOMMENTRANGE
    NSLog (@"lineRange [%d, %d]", lineRange.location, lineRange.length) ;
  #endif
  NSRange currentLineRange = [sourceString lineRangeForRange:NSMakeRange (lineRange.location + lineRange.length - 1, 1)] ;
  do {
    #ifdef DEBUG_UNCOMMENTRANGE
      NSLog (@"currentLineRange [%d, %d]", currentLineRange.location, currentLineRange.length) ;
    #endif
    NSString * lineString = [sourceString substringWithRange:currentLineRange] ;
    if ([lineString compare:spaceString options:NSLiteralSearch range:NSMakeRange (0, twoSpaceLength)] == NSOrderedSame) {
      [mutableSourceString replaceCharactersInRange:NSMakeRange (currentLineRange.location, twoSpaceLength) withString:@""] ;
    //--- Examen du nombre de caractères à l'intérieur de la sélection
      const NSInteger withinSelectionCharacterCount = 
        (NSInteger) imin (currentLineRange.location + twoSpaceLength, finalSelectedRange.location + finalSelectedRange.length)
      -
        (NSInteger) imax (currentLineRange.location, finalSelectedRange.location) ;
      if (withinSelectionCharacterCount > 0) {
        finalSelectedRange.length -= (NSUInteger) withinSelectionCharacterCount ;
      }
    //--- Examen du nombre de caractères avant la sélection
      const NSInteger beforeSelectionCharacterCount = ((NSInteger) finalSelectedRange.location) - (NSInteger) currentLineRange.location ;
      if (beforeSelectionCharacterCount > 0) {
        finalSelectedRange.location -= imin (twoSpaceLength, (NSUInteger) beforeSelectionCharacterCount) ;
      }
      #ifdef DEBUG_UNCOMMENTRANGE
        NSLog (@"withinSelectionCharacterCount %d, beforeSelectionCharacterCount %d", withinSelectionCharacterCount, beforeSelectionCharacterCount) ;
        NSLog (@"finalSelectedRange [%d, %d]", finalSelectedRange.location, finalSelectedRange.length) ;
      #endif
    }
    if (currentLineRange.location > 0) {
      currentLineRange = [sourceString lineRangeForRange:NSMakeRange (currentLineRange.location - 1, 1)] ;
    }
  }while ((currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)) ;
//--- Update selected range
  [mTextView setSelectedRange:finalSelectedRange] ;
//--- Register undo
  [documentData.textSyntaxColoring.undoManager
    registerUndoWithTarget:self
    selector:@selector (shiftRightRange:)
    object:[NSValue valueWithRange:finalSelectedRange]
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) shiftLeftAction {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  const NSRange selectedRange = [mTextView selectedRange] ;
  [self shiftLeftRange:[NSValue valueWithRange:selectedRange]] ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Text Macros

//----------------------------------------------------------------------------------------------------------------------

- (void) actionInsertTextMacro: (NSMenuItem *) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSString * macroString = [documentData.textSyntaxColoring.tokenizer textMacroContentAtIndex:(NSUInteger) inSender.tag] ;
  [mTextView insertText:macroString] ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Entry Pop up

//----------------------------------------------------------------------------------------------------------------------

- (void) populatePopUpButtonWithMenu: (NSMenu *) inMenu {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSMenu * menu = inMenu.copy ;
  [mEntryListPopUpButton setAutoenablesItems:NO] ;

  const NSInteger n = menu.numberOfItems ;
  if (n == 0) {
    [menu
      addItemWithTitle:@"No entry"
      action:NULL
      keyEquivalent:@""
    ] ;
    [[menu itemAtIndex:0] setEnabled:NO] ;
    [mEntryListPopUpButton setEnabled:NO] ;
  }else{
    for (NSInteger i=0 ; i<n ; i++) {
      NSMenuItem * item = [menu itemAtIndex:i] ;
      [item setTarget:self] ;
      [item setAction:@selector (gotoEntry:)] ;
    }
    [mEntryListPopUpButton setEnabled:YES] ;
  }
  [mEntryListPopUpButton setMenu:menu] ;
  // NSLog (@"mEntryListPopUpButton %@", mEntryListPopUpButton) ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) gotoEntry: (id) inSender {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, TAG %ld", __PRETTY_FUNCTION__, [inSender tag]) ;
  #endif
  const NSRange range = {(NSUInteger) [inSender tag], 0} ;
  [mTextView setSelectedRange:range] ;
  [mTextView scrollRangeToVisible:range] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) selectEntryPopUp {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  const NSUInteger selectionStart = self.textSelectionStart ;
  NSArray * menuItemArray = [mEntryListPopUpButton itemArray] ;
  if ([mEntryListPopUpButton isEnabled]) {
    NSInteger idx = NSNotFound ;
    const NSInteger n = (NSInteger) menuItemArray.count ;
    for (NSInteger i=n-1 ; (i>=0) && (idx == NSNotFound) ; i--) {
      NSMenuItem * item = [menuItemArray objectAtIndex:(NSUInteger) i] ;
      const NSUInteger startPoint = (NSUInteger) [item tag] ;
      if (selectionStart >= startPoint) {
        idx = i ;
      }
    }
    if (idx == NSNotFound) {
      [mEntryListPopUpButton selectItemAtIndex:0] ;
    }else{
      [mEntryListPopUpButton selectItemAtIndex:idx] ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark NSTextView delegate methods

//----------------------------------------------------------------------------------------------------------------------

- (NSUndoManager *) undoManagerForTextView: (NSTextView *) inTextView { // Delegate Method
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  return documentData.textSyntaxColoring.undoManager ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) textViewDidChangeSelection: (NSNotification *) inNotification { // Delegate Method
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  [self willChangeValueForKey:@"textSelectionStart"] ;
  mTextSelectionStart = mTextView.selectedRange.location ;
  [self  didChangeValueForKey:@"textSelectionStart"] ;
  [mRulerView setNeedsDisplay:YES] ;
//---
  NSString * key = [NSString stringWithFormat:@"SELECTION:%@:%@", mDocumentUsedForDisplaying.fileURL.path, documentData.fileURL.path] ;
  [[NSUserDefaults standardUserDefaults]
    setObject:NSStringFromRange (mTextView.selectedRange)
    forKey:key
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Displaying issues

//----------------------------------------------------------------------------------------------------------------------

- (void) setTextDisplayIssueArray: (NSArray *) inIssueArray {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s, '%@', enter %lu issues", __PRETTY_FUNCTION__, self.documentData.fileURL, inIssueArray.count) ;
  #endif
  [mTextView setIssueArray:inIssueArray] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) setSelectionRangeAndMakeItVisible: (NSRange) inRange {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s [%lu, %lu], source length %lu", __PRETTY_FUNCTION__, inRange.location, inRange.length, mTextView.string.length) ;
  #endif
  NSRange range = inRange ;
  if (NSMaxRange (inRange) >= mTextView.string.length) {
    range = NSMakeRange (mTextView.string.length, 0) ;
  }
  [mTextView setSelectedRange: range] ;
  [mTextView scrollRangeToVisible: range] ;
  [mTextView.window makeFirstResponder: mTextView] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s:DONE", __PRETTY_FUNCTION__) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

- (void) setSelectionRange: (NSRange) inRange {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s [%lu, %lu], source length %lu", __PRETTY_FUNCTION__, inRange.location, inRange.length, mTextView.string.length) ;
  #endif
  NSRange range = inRange ;
  if (NSMaxRange (inRange) >= mTextView.string.length) {
    range = NSMakeRange (mTextView.string.length, 0) ;
  }
  [mTextView setSelectedRange: range] ;
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s:DONE", __PRETTY_FUNCTION__) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

- (NSRange) selectedRange {
  return mTextView.selectedRange ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Fix-it Replace selected range by string

//----------------------------------------------------------------------------------------------------------------------

- (void) replaceRange: (NSRange) inRange withString: (NSString *) inReplacement {
  NSTextStorage * ts = mTextView.textStorage ;
  NSString * removedString = [ts.string substringWithRange:inRange] ;
  [ts replaceCharactersInRange:inRange withString: inReplacement] ;
//--- Register undo
  [documentData.textSyntaxColoring.undoManager
    registerUndoWithTarget:self
    selector:@selector (undoReplaceSelectedRange:)
    object:[NSArray arrayWithObjects:removedString, [NSValue valueWithRange:NSMakeRange (inRange.location, inReplacement.length)], nil]
  ] ;

}

//----------------------------------------------------------------------------------------------------------------------

- (void) undoReplaceSelectedRange : (NSArray *) inObject {
  NSString * s = [inObject objectAtIndex:0] ;
  NSValue * value = [inObject objectAtIndex:1] ;
  const NSRange r = value.rangeValue ;
  NSTextStorage * ts = mTextView.textStorage ;
  NSString * removedString = [ts.string substringWithRange:r] ;
  [ts replaceCharactersInRange:r withString:s] ;
//--- Register redo
  [documentData.textSyntaxColoring.undoManager
    registerUndoWithTarget:self
    selector:@selector (redoReplaceSelectedRange:)
    object:[NSArray arrayWithObjects:removedString, [NSValue valueWithRange:NSMakeRange (r.location, s.length)], nil]
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) redoReplaceSelectedRange : (NSArray *) inObject {
  NSString * s = [inObject objectAtIndex:0] ;
  NSValue * value = [inObject objectAtIndex:1] ;
  const NSRange r = value.rangeValue ;
  NSTextStorage * ts = mTextView.textStorage ;
  NSString * removedString = [ts.string substringWithRange:r] ;
  [ts replaceCharactersInRange:r withString:s] ;
//--- Register redo
  [documentData.textSyntaxColoring.undoManager
    registerUndoWithTarget:self
    selector:@selector (undoReplaceSelectedRange:)
    object:[NSArray arrayWithObjects:removedString, [NSValue valueWithRange:NSMakeRange (r.location, s.length)], nil]
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------

@end
