//
//  CCCanvasTypes.h
//  CCCanvas
//
//  Created by CC on 2021/8/11.
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

@interface CCCanvasTypes : NSObject

@end

NS_ASSUME_NONNULL_END
