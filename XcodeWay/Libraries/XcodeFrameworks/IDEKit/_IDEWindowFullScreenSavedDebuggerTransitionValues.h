/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _IDEWindowFullScreenSavedDebuggerTransitionValues : NSObject
{
    BOOL _valid;
    BOOL _shouldReturnToFullScreen;
    int _oldState;
    int _newState;
    int _oldMode;
    int _newMode;
}

- (id)description;
@property int newMode; // @synthesize newMode=_newMode;
@property int newState; // @synthesize newState=_newState;
@property int oldMode; // @synthesize oldMode=_oldMode;
@property int oldState; // @synthesize oldState=_oldState;
- (void)recordReturnToFullScreen:(BOOL)arg1 oldState:(int)arg2 newState:(int)arg3 oldMode:(int)arg4 newMode:(int)arg5;
@property BOOL shouldReturnToFullScreen; // @synthesize shouldReturnToFullScreen=_shouldReturnToFullScreen;
@property BOOL valid; // @synthesize valid=_valid;

@end
