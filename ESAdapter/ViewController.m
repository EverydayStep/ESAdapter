//
//  ViewController.m
//  ESAdapter
//
//  Created by codeLocker on 2017/7/28.
//  Copyright © 2017年 codeLocker. All rights reserved.
//

#import "ViewController.h"
#import "ESAdapter.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"%f",[ESAdapter lengthAdapterIn3_5:10 in4_0:20 in4_7:30 in5_5:40 in4_7_ZoomModel:50 in5_5_ZoomModel:60]);
    NSLog(@"%f",[ESAdapter lengthAdapterIn3_5:11 in4_7:21 in5_5:31 in5_5_ZoomModel:41]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
