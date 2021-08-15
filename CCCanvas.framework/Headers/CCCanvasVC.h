//
//  CCCanvasVC.h
//  CCCanvas
//
//  Created by CC (deng you hua | cworld1000@gmail.com) on 2021/8/8.
//  https://github.com/ccworld1000/CCCanvas

#import <UIKit/UIKit.h>
#import <CCCanvas/CCCanvasPoint.h>

NS_ASSUME_NONNULL_BEGIN

/// CCCanvasVC 对iOS Metal MetalKit 颜色,点,线,三角形,面,纹理 demo 的封装 [VC]
@interface CCCanvasVC : UIViewController

/*
 the value [0.0 - 1.0]
 */
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;

// override it for CCCanvasTypePoint | the value [-1.0 - 1.0]
- (CCCanvasPoint *) getCanvasPoint;

@end

NS_ASSUME_NONNULL_END
