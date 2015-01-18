//
//  CSInputLayer.h
//  CocoaSplit
//
//  Created by Zakk on 1/6/15.
//  Copyright (c) 2015 Zakk. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@class InputSource;

@interface CSInputLayer : CALayer
{
    //CAReplicatorLayer *_xLayer;
    CAReplicatorLayer *_yLayer;
    CABasicAnimation *_scrollAnimation;
}


@property (strong) CALayer *sourceLayer;
@property (assign) bool allowResize;
@property (assign) float scrollXSpeed;
@property (assign) float scrollYSpeed;
@property (strong) CAReplicatorLayer *xLayer;


-(void)setSourceLayer:(CALayer *)sourceLayer withTransition:(CATransition *)transition;
-(void)resizeSourceLayer:(CGRect)newFrame oldFrame:(CGRect)oldFrame;





@end