//
//  ViewController.m
//  TECommunity
//
//  Created by offcn on 15/9/18.
//  Copyright (c) 2015年 Terry. All rights reserved.
//

#import "ViewController.h"
#import "UMCommunity.h"
@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIButton *showButton;
@end

@implementation ViewController
- (IBAction)showClick:(id)sender {
    UINavigationController *community = [UMCommunity getFeedsModalViewController];
//    [self.navigationController  pushViewController:community animated:YES];
    [self presentViewController:community animated:YES completion:nil];
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
