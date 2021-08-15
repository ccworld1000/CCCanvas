//
//  CCCanvasFunction.h
//  CCCanvas
//
//  Created by CC on 2021/8/10.
//  Copyright © 2021 CC (deng you hua | cworld1000@gmail.com). All rights reserved.
//  https://github.com/ccworld1000/CCCanvas

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CCCanvasType) {
    CCCanvasTypeStart = -1,
    
    CCCanvasTypeColor,
    CCCanvasTypePoint,
    CCCanvasTypeLine,
    CCCanvasTypeTriangle,
    CCCanvasTypePlane,
    CCCanvasTypeTexture,
    
    CCCanvasTypeEnd,
};

FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameColor;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNamePoint;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameLine;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameTriangle;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNamePlane;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameTexture;

@interface CCCanvasFunction : NSObject

@property (nonatomic, copy, readonly) NSString *source;
@property (nonatomic, copy, readonly) NSString *vertex;
@property (nonatomic, copy, readonly) NSString *fragment;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (CCCanvasFunction *)functionWithType: (CCCanvasType) type;

@end

NS_ASSUME_NONNULL_END
