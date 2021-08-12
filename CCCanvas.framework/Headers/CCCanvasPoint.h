//
//  CCCanvasPoint.h
//  CCCanvas
//
//  Created by CC on 2021/8/10.
//  Copyright © 2021 CC (deng you hua | cworld1000@gmail.com). All rights reserved.
//  https://github.com/ccworld1000/CCCanvas

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CCCanvas/CCCanvasTypes.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCCanvasPoint : NSObject

// the value [-1.0 - 1.0]
@property (nonatomic, readonly) CGPoint pointA;
@property (nonatomic, readonly) CGPoint pointB;
@property (nonatomic, readonly) CGPoint pointC;
@property (nonatomic, readonly) CGPoint pointD;

// canvas type [defalt type is CCCanvasTypeColor]
@property (nonatomic, readonly) CCCanvasType canvasType;

-(instancetype)initPointWith1Point:(CGPoint) pointA ;
-(instancetype)initLinetWith2Point:(CGPoint) pointA pointB: (CGPoint) pointB ;
-(instancetype)initTriangleWith3Point:(CGPoint) pointA pointB: (CGPoint) pointB pointC: (CGPoint) pointC;
-(instancetype)initPlaneWith4Point:(CGPoint) pointA  pointB: (CGPoint) pointB pointC: (CGPoint) pointC pointD: (CGPoint) pointD;

@end

NS_ASSUME_NONNULL_END
