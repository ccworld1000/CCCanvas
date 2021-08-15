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

@interface CCCanvasFunction : NSObject

@property (nonatomic, copy, readonly) NSString *source;
@property (nonatomic, copy, readonly) NSString *vertex;
@property (nonatomic, copy, readonly) NSString *fragment;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (CCCanvasFunction *)functionWithType: (CCCanvasType) type;

+ (NSString *)simpleSecurityEncryption:(NSString *)content;
+ (NSString *)simpleSecurityDecrypt:(NSString *)content;
+ (NSString *)simpleSecurityEncryption:(NSString *)content key:(NSString *)key;
+ (NSString *)simpleSecurityDecrypt:(NSString *)content key:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
