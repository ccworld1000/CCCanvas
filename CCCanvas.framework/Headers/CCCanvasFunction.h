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
    
    /*
     * Color Type
     */
     CCCanvasTypeColor,
    /*
     * Point Type
     */
     CCCanvasTypePoint,
    /*
     * Line Type
     */
     CCCanvasTypeLine,
    /*
     * Triangle Type
     */
     CCCanvasTypeTriangle,
    /*
     * Plane Type
     */
     CCCanvasTypePlane,
    /*
     * Texture Type
     */
     CCCanvasTypeTexture,
    /*
     * Pyamid Type
     */
     CCCanvasTypePyamid,
    /*
     * Hexagon Type
     */
     CCCanvasTypeHexagon,
    /*
     * Heptagonal Type
     */
     CCCanvasTypeHeptagonal,
    /*
     * Cube Type
     */
     CCCanvasTypeCube,
    
    CCCanvasTypeEnd,
};

FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameColor;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNamePoint;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameLine;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameTriangle;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNamePlane;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameTexture;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNamePyamid;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameHexagon;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameHeptagonal;
FOUNDATION_EXPORT NSString * const CCCanvasFunctionNameCube;

@interface CCCanvasFunction : NSObject

@property (nonatomic, copy, readonly) NSString *source;
@property (nonatomic, copy, readonly) NSString *vertex;
@property (nonatomic, copy, readonly) NSString *fragment;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (CCCanvasFunction *)functionWithType: (CCCanvasType) type;

+ (NSString *)canvasNameWithType: (CCCanvasType) type;

@end

NS_ASSUME_NONNULL_END
