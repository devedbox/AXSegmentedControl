//
//  ViewController.m
//  AXSegmentedControl
//
//  Created by ai on 16/5/31.
//  Copyright © 2016年 devedbox. All rights reserved.
//

#import "ViewController.h"
#import "AXSegmentedControl/AXSegmentedControl.h"

@interface ViewController ()
///
@property(weak, nonatomic) IBOutlet AXSegmentedControl *segmentedControl;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [_segmentedControl setItems:@[@"sss", @"ddd"]];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
