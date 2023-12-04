//----------------------------------------------------------------------------------------------------------------------
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2011, ..., 2014 Pierre Molinaro.
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

#import "PMIssueInRuler.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation PMIssueInRuler

//----------------------------------------------------------------------------------------------------------------------

- (PMIssueInRuler *) initWithRect: (NSRect) inRect
                     message: (NSString *) inMessage
                     isError: (BOOL) inIsError {
  self = [self init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mBulletRect = inRect ;
    mMessage = inMessage.copy ;
    mIsError = inIsError ;
  }
  return self ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSRect) rect {
  return mBulletRect ;
}

//----------------------------------------------------------------------------------------------------------------------

- (BOOL) isError {
  return mIsError ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) message {
  return mMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

@end
