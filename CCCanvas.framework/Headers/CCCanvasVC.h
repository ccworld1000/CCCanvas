//
//  CCCanvasVC.h
//  CCCanvas
//
//  Created by CC (deng you hua | cworld1000@gmail.com) on 2021/8/8.
//  https://github.com/ccworld1000/CCCanvas

#import <UIKit/UIKit.h>
#import <CCCanvas/CCCanvasPoint.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, CCCanvasType) {
    CCCanvasTypeColor = 0,
    CCCanvasTypePoint,
    CCCanvasTypeLine,
    CCCanvasTypeTriangle,
    CCCanvasTypePlane,
};


@interface CCCanvasVC : UIViewController

/*
 the value [0.0 - 1.0]
 */
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;

//  the value [-1.0 - 1.0]
@property (nonatomic, readonly) CGPoint point;

// canvas type [defalt type is CCCanvasTypeColor]
@property (nonatomic, readonly) CCCanvasType canvasType;


// override for diff canvas type
- (CCCanvasType) getCanvasType;

// override it for CCCanvasTypePoint | the value [-1.0 - 1.0]
- (CCCanvasPoint *) getCanvasPoint;

@end

NS_ASSUME_NONNULL_END
