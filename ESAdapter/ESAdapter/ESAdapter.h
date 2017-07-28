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
 @param c 4.7寸下长度
 @param d 5.5寸下长度
 @param f 5.5放大模式寸下长度
 @return 当前尺寸下对应的长度
 */
+ (CGFloat)lengthAdapterIn3_5:(CGFloat)a in4_7:(CGFloat)c in5_5:(CGFloat)d in5_5_ZoomModel:(CGFloat)f;

/**
 在不同屏幕分辨率下各自对应的长度
 
 @param a 3.5寸下长度
 @param b 4.4寸下长度
 @param c 4.7寸下长度
 @param d 5.5寸下长度
 @param e 4.7放大模式寸下长度
 @param f 5.5放大模式寸下长度
 @return 当前尺寸下对应的长度
 */
+ (CGFloat)lengthAdapterIn3_5:(CGFloat)a in4_0:(CGFloat)b in4_7:(CGFloat)c in5_5:(CGFloat)d in4_7_ZoomModel:(CGFloat)e in5_5_ZoomModel:(CGFloat)f;

#pragma mark - Font
/**
 在不同屏幕分辨率下各自对应的字体
 
 @param a 3.5寸下字体 = 4.0 = 4.7 zoomModel
 @param c 4.7寸下字体
 @param d 5.5寸下字体
 @param f 5.5放大模式寸下字体
 @return 当前尺寸下对应的字体
 */
+ (UIFont *)fontAdapterIn3_5:(UIFont *)a in4_7:(UIFont *)c in5_5:(UIFont *)d in5_5_ZoomModel:(UIFont *)f;
/**
 在不同屏幕分辨率下各自对应的字体
 
 @param a 3.5寸下字体
 @param b 4.4寸下字体
 @param c 4.7寸下字体
 @param d 5.5寸下字体
 @param e 4.7放大模式寸下字体
 @param f 5.5放大模式寸下字体
 @return 当前尺寸下对应的字体
 */
+ (UIFont *)fontAdapterIn3_5:(UIFont *)a in4_0:(UIFont *)b in4_7:(UIFont *)c in5_5:(UIFont *)d in4_7_ZoomModel:(UIFont *)e in5_5_ZoomModel:(UIFont *)f;
@end
