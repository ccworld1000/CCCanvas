//
//  CCCanvasPoint.h
//  CCCanvas
//
//  Created by CC on 2021/8/10.
//  Copyright © 2021 CC (deng you hua | cworld1000@gmail.com). All rights reserved.
//  https://github.com/ccworld1000/CCCanvas

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CCCanvas/CCCanvasFunction.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCCanvasPoint : NSObject

@property (nonatomic, strong, nullable, readonly) UIImage *image;

// canvas type [defalt type is CCCanvasTypeColor]
@property (nonatomic, readonly) CCCanvasType canvasType;

@property (nonatomic, readonly) NSUInteger pointBytesSize;

// CGPoint: the value [-1.0 - 1.0] for all init point

-(instancetype)initPointWith1Point:(CGPoint) pointA ;
-(instancetype)initLinetWith2Point:(CGPoint) pointA pointB: (CGPoint) pointB ;
-(instancetype)initTriangleWith3Point:(CGPoint) pointA pointB: (CGPoint) pointB pointC: (CGPoint) pointC;
-(instancetype)initPlaneWith4Point:(CGPoint) pointA  pointB: (CGPoint) pointB pointC: (CGPoint) pointC pointD: (CGPoint) pointD;

-(instancetype)initTextureWithImage:(nullable UIImage *)image;
-(instancetype)initTextureForDemo;

+(instancetype)pyamid;
+(instancetype)hexagon;
+(instancetype)heptagonal;
+(instancetype)cube;


- (float *) pointBytes;

@end

NS_ASSUME_NONNULL_END
