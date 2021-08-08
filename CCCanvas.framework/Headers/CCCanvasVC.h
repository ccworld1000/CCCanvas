//
//  CCCanvasVC.h
//  CCCanvas
//
//  Created by CC (deng you hua | cworld1000@gmail.com) on 2021/8/8.
//  https://github.com/ccworld1000/CCCanvas

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCCanvasVC : UIViewController

/*
 the value [0.0 - 1.0]
 */
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;

@end

NS_ASSUME_NONNULL_END
