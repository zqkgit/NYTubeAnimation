//
//  NYTubeAnimationView.h
//  NYTubeAnimationDemo
//
//  Created by 牛严 on 16/9/1.
//  Copyright © 2016年 牛严. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NYTubeAnimationControl : UIView

- (void)turnToSecondePage;

- (void)turnToFirstPage;

@end

@interface TestView : UIView

@property (nonatomic, assign) double r1;
@property (nonatomic, assign) double r2;

@end