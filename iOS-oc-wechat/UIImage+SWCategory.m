//
//  UIImage+SWCategory.m
//  iOS-oc-wechat
//
//  Created by senwang on 16/1/31.
//  Copyright © 2016年 wangsen. All rights reserved.
//

#import "UIImage+SWCategory.h"

@implementation UIImage (SWCategory)

+ (UIImage *)i_imageFromColor:(UIColor *)color{
    return [self i_imageFromColor:color size:CGSizeMake(1.0f, 1.0f)];
}

+ (UIImage *)i_imageFromColor:(UIColor *)color size:(CGSize)size {
    CGRect rect=CGRectMake(0.0f, 0.0f, size.width, size.height);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return theImage;
}

@end
