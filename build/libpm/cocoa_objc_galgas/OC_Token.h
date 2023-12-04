//----------------------------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2009, ..., 2014 Pierre Molinaro.
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

#import <Cocoa/Cocoa.h>

//----------------------------------------------------------------------------------------------------------------------

@interface OC_Token : NSObject {
  @private NSUInteger mTokenCode ;
  @private NSRange mRange ;
  @private NSInteger mStyle ;
  @private NSInteger mMatchedTemplateDelimiterIndex ;
}

- (id) initWithTokenCode: (NSUInteger) inTokenCode
       range: (NSRange) inRange
       style: (NSInteger) inStyle
       matchedTemplateDelimiterIndex: (NSInteger) inMatchedTemplateDelimiterIndex ;

- (NSUInteger) tokenCode ;

- (NSRange) range ;

- (NSInteger) style ;

- (NSInteger) matchedTemplateDelimiterIndex ;

- (void) translateRange: (NSInteger) inTranslation ;

@end

//----------------------------------------------------------------------------------------------------------------------
