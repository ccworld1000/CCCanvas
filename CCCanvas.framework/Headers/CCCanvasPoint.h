//
//  CCCanvasPoint.h
//  CCCanvas
//
//  Created by CC on 2021/8/10.
//  Copyright © 2021 CC (deng you hua | cworld1000@gmail.com). All rights reserved.
//  https://github.com/ccworld1000/CCCanvas

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCCanvasPoint : NSObject

// the value [-1.0 - 1.0]
@property (nonatomic) CGPoint pointA;
@property (nonatomic) CGPoint pointB;
@property (nonatomic) CGPoint pointC;
@property (nonatomic) CGPoint pointD;

-(instancetype)initPointWith1Point:(CGPoint) pointA ;
-(instancetype)initLinetWith2Point:(CGPoint) pointA pointB: (CGPoint) pointB ;
-(instancetype)initTriangleWith3Point:(CGPoint) pointA pointB: (CGPoint) pointB pointC: (CGPoint) pointC;
-(instancetype)initPlaneWith4Point:(CGPoint) pointA  pointB: (CGPoint) pointB pointC: (CGPoint) pointC pointD: (CGPoint) pointD;

@end

NS_ASSUME_NONNULL_END
