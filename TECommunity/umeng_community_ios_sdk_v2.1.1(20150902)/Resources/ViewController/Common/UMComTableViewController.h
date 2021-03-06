//
//  UMComTableViewController.h
//  UMCommunity
//
//  Created by umeng on 15-3-11.
//  Copyright (c) 2015年 Umeng. All rights reserved.
//

#import <UIKit/UIKit.h>


@class UMComRefreshView, UMComPullRequest, UMComTableView;

@interface UMComTableViewController : UIViewController

@property (nonatomic, strong) UMComPullRequest *fetchRequest;

@property (nonatomic, strong) NSArray *dataArray;

@property (nonatomic, strong) UMComTableView *tableView;

@end
