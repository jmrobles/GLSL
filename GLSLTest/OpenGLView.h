//
//  OpenGLView.h
//  GLSLTest
//
//  Created by JM Robles on 15/07/13.
//  Copyright (c) 2013 JM Robles. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    GLuint _positionSlot;
    GLuint _colorSlot;
    GLuint _center;
    GLfloat posX, posY;
}

@end