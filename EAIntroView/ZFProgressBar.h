//
//  ZFProgressBar.h
//  ZFProgressBar
//
//  Created by Amornchai Kanokpullawad on 8/27/13.
//  Copyright (c) 2013 zoonref. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ZFProgressBarActiveBackground : UIView
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *activeBarTintColor;
@end

@interface ZFProgressBarBackground : UIView
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *barBackgroundTintColor;
@end

@interface ZFProgressBar : UIView

@property (nonatomic) float progress;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) ZFProgressBarActiveBackground *activeBar;
@property (nonatomic, strong) ZFProgressBarBackground *barBackground;


@end


