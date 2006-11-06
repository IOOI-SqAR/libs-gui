/*
   NSImageView.h

   Copyright (C) 1996 Free Software Foundation, Inc.

   Author: Ovidiu Predescu <ovidiu@net-community.com>
   Date: January 1998
   
   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02111 USA.
*/

#ifndef _GNUstep_H_NSImageView
#define _GNUstep_H_NSImageView
#import <GNUstepBase/GSVersionMacros.h>

#include <AppKit/NSControl.h>
#include <AppKit/NSImageCell.h>

@interface NSImageView : NSControl
{
  id _target;
  SEL _action;
}

- (NSImage *)image;
- (void)setImage:(NSImage *)image;

- (NSImageAlignment)imageAlignment;
- (void)setImageAlignment:(NSImageAlignment)align;
- (NSImageScaling)imageScaling;
- (void)setImageScaling:(NSImageScaling)scaling;
- (NSImageFrameStyle)imageFrameStyle;
- (void)setImageFrameStyle:(NSImageFrameStyle)style;
- (void)setEditable:(BOOL)flag;
- (BOOL)isEditable;

@end

#endif /* _GNUstep_H_NSImageView */
