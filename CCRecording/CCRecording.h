//
//  CCRecording.h
//  CCRecording
//
//  Created by deng you hua on 3/19/17.
//  Copyright © 2017 CC | ccworld1000@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 *  CCRecordingStart | Recording start
 *
 *  @param name file name
 *
 *  @return return value description
 */
FOUNDATION_EXPORT BOOL CCRecordingStart (char *name);

/**
 *  CCRecordingPause | Recording Pause [for futrue]
 */
FOUNDATION_EXPORT void CCRecordingPause (void);

/**
 *  CCRecordingStop  | Recording Stop
 */
FOUNDATION_EXPORT void CCRecordingStop (void);

