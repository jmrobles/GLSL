//
//  TESTAppDelegate.h
//  GLSLTest
//
//  Created by JM Robles on 15/07/13.
//  Copyright (c) 2013 JM Robles. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"
OpenGLView* _glView;
@interface TESTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenGLView *glView;
@end
