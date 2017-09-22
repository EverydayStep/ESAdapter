//
//  ESAdapter.m
//  ESAdapter
//
//  Created by codeLocker on 2017/7/28.
//  Copyright © 2017年 codeLocker. All rights reserved.
//

#import "ESAdapter.h"
#import <ESCategory/UIScreen+ESSize.h>
#import <ESCategory/UIDevice+ESInfo.h>

@implementation ESAdapter

+ (ESAdapterScreenInch)currectIphoneScreenInch {
    static ESAdapterScreenInch screenInch = ESAdapterScreenInch_None;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if ([UIDevice currentDevice].es_isIphone) {
            if ([UIScreen mainScreen].es_isInch_3_5) {
                screenInch = ESAdapterScreenInch_3_5;
            }else if ([UIScreen mainScreen].es_isInch_4_0) {
                screenInch = ESAdapterScreenInch_4_0;
            }else if ([UIScreen mainScreen].es_isZoomModel && [UIScreen mainScreen].es_isInch_4_7) {
                screenInch = ESAdapterScreenInch_4_7_ZoomModel;
            }else if ([UIScreen mainScreen].es_isInch_4_7) {
                screenInch = ESAdapterScreenInch_4_7;
            }else if ([UIScreen mainScreen].es_isZoomModel && [UIScreen mainScreen].es_isInch_5_5) {
                screenInch = ESAdapterScreenInch_5_5_ZoomModel;
            }else if ([UIScreen mainScreen].es_isInch_5_5) {
                screenInch = ESAdapterScreenInch_5_5;
            }else if ([UIScreen mainScreen].es_isInch_5_8) {
                screenInch = ESAdapterScreenInch_5_8;
            }
        }
    });
    return screenInch;
}

+ (CGFloat)lengthAdapterIn3_5:(CGFloat)a in4_7:(CGFloat)b in5_5:(CGFloat)c in5_5_ZoomModel:(CGFloat)d {
    return [self lengthAdapterIn3_5:a in4_0:a in4_7:b in5_5:c in5_8:b in4_7_ZoomModel:a in5_5_ZoomModel:d];
}

+ (CGFloat)lengthAdapterIn3_5:(CGFloat)a in4_0:(CGFloat)b in4_7:(CGFloat)c in5_5:(CGFloat)d in5_8:(CGFloat)e in4_7_ZoomModel:(CGFloat)f in5_5_ZoomModel:(CGFloat)g {
    switch ([self currectIphoneScreenInch]) {
        case ESAdapterScreenInch_3_5:
            return a;
        case ESAdapterScreenInch_4_0:
            return b;
        case ESAdapterScreenInch_4_7:
            return c;
        case ESAdapterScreenInch_5_5:
            return d;
        case ESAdapterScreenInch_5_8:
            return e;
        case ESAdapterScreenInch_4_7_ZoomModel:
            return f;
        case ESAdapterScreenInch_5_5_ZoomModel:
            return g;
        case ESAdapterScreenInch_None:
            return 0;
    }
    return 0;
}

+ (UIFont *)fontAdapterIn3_5:(UIFont *)a in4_7:(UIFont *)b in5_5:(UIFont *)c in5_5_ZoomModel:(UIFont *)d {
    return [self fontAdapterIn3_5:a in4_0:a in4_7:b in5_5:c in5_8:b in4_7_ZoomModel:a in5_5_ZoomModel:d];
}

+ (UIFont *)fontAdapterIn3_5:(UIFont *)a in4_0:(UIFont *)b in4_7:(UIFont *)c in5_5:(UIFont *)d in5_8:(UIFont *)e in4_7_ZoomModel:(UIFont *)f in5_5_ZoomModel:(UIFont *)g {
    switch ([self currectIphoneScreenInch]) {
        case ESAdapterScreenInch_3_5:
            return a;
        case ESAdapterScreenInch_4_0:
            return b;
        case ESAdapterScreenInch_4_7:
            return c;
        case ESAdapterScreenInch_5_5:
            return d;
        case ESAdapterScreenInch_5_8:
            return e;
        case ESAdapterScreenInch_4_7_ZoomModel:
            return f;
        case ESAdapterScreenInch_5_5_ZoomModel:
            return g;
        case ESAdapterScreenInch_None:
            return 0;
    }
    return nil;
}


@end
