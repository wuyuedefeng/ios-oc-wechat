//
//  TXBaseViewController.h
//  appDoctor
//
//  Created by TX-009 on 14-10-28.
//  Copyright (c) 2014年 TX-009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModelPatientInfo.h"
@class TXKeyBoardScrollView;

@interface TXBaseViewController : UIViewController
@property (nonatomic, weak) TXKeyBoardScrollView *keyBoardScrollView;
@property (nonatomic,strong)ModelPatientInfo *patientInfo;

- (void)beginRequestWithAnimation:(BOOL)hasAnimation;

- (void)successRequestWithAnimation:(BOOL)hasAnimation;
- (void)failedRequestWithAnimation:(BOOL)hasAnimation showFailedMessage:(NSString *)str;
- (void)errorRequestWithAnimation:(BOOL)hasAnimation;


#pragma mark -设置导航栏左侧按钮
- (void)setBackBarButtonWithTitle:(NSString *)title;
#pragma mark -设置导航栏右侧按钮
- (void)setRightBarButtonWithtarget:(id)target action:(SEL)action title:(NSString *)title;

@end
