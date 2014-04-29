//
//  IAViewController.h
//  Tasks
//
//  Created by Paulo Gonzaga on 4/29/14.
//  Copyright (c) 2014 iOS in Action. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IAViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *tasks;

@end
