//
//  ESAdapter.h
//  ESAdapter
//
//  Created by codeLocker on 2017/7/28.
//  Copyright © 2017年 codeLocker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ESAdapterScreenInch) {
    ESAdapterScreenInch_None,//未知
    ESAdapterScreenInch_3_5,//3.5寸
    ESAdapterScreenInch_4_0,//4.0寸
    ESAdapterScreenInch_4_7,//4.7寸
    ESAdapterScreenInch_5_5,//5.5寸
    ESAdapterScreenInch_5_8,//5.8寸
    ESAdapterScreenInch_4_7_ZoomModel,//4.7寸 放大模式 == ESAdapterScreenInch_4_0
    ESAdapterScreenInch_5_5_ZoomModel,//5.5寸 放大模式
};

@interface ESAdapter : NSObject
/**
 获取当前屏幕的尺寸(手机)

 @return ESAdapterScreenInch
 */
+ (ESAdapterScreenInch)currectIphoneScreenInch;

#pragma mark - Length
/**
 在不同屏幕分辨率下各自对应的长度

 @param a 3.5寸下长度 = 4.0 = 4.7 zoomModel
 @param b 4.7寸下长度 = 5.8
 @param c 5.5寸下长度
 @param d 5.5放大模式寸下长度
 @return 当前尺寸下对应的长度
 */
+ (CGFloat)lengthAdapterIn3_5:(CGFloat)a in4_7:(CGFloat)b in5_5:(CGFloat)c in5_5_ZoomModel:(CGFloat)d;

/**
 在不同屏幕分辨率下各自对应的长度

 @param a 3.5寸下长度
 @param b 4.4寸下长度
 @param c 4.7寸下长度
 @param d 5.5寸下长度
 @param e 5.8寸下长度
 @param f 4.7放大模式寸下长度
 @param g 5.5放大模式寸下长度
 @return 当前尺寸下对应的长度
 */
+ (CGFloat)lengthAdapterIn3_5:(CGFloat)a in4_0:(CGFloat)b in4_7:(CGFloat)c in5_5:(CGFloat)d in5_8:(CGFloat)e in4_7_ZoomModel:(CGFloat)f in5_5_ZoomModel:(CGFloat)g;

#pragma mark - Font
/**
 在不同屏幕分辨率下各自对应的字体
 
 @param a 3.5寸下字体 = 4.0 = 4.7 zoomModel
 @param b 4.7寸下字体 = 5.8
 @param c 5.5寸下字体
 @param d 5.5放大模式寸下字体
 @return 当前尺寸下对应的字体
 */
+ (UIFont *)fontAdapterIn3_5:(UIFont *)a in4_7:(UIFont *)b in5_5:(UIFont *)c in5_5_ZoomModel:(UIFont *)d;
/**
 在不同屏幕分辨率下各自对应的字体
 
 @param a 3.5寸下字体
 @param b 4.4寸下字体
 @param c 4.7寸下字体
 @param d 5.5寸下字体
 @param e 5.8寸下字体
 @param f 4.7放大模式寸下字体
 @param g 5.5放大模式寸下字体
 @return 当前尺寸下对应的字体
 */
+ (UIFont *)fontAdapterIn3_5:(UIFont *)a in4_0:(UIFont *)b in4_7:(UIFont *)c in5_5:(UIFont *)d in5_8:(UIFont *)e in4_7_ZoomModel:(UIFont *)f in5_5_ZoomModel:(UIFont *)g;
@end
