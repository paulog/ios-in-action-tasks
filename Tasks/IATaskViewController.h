//
//  IATaskViewController.h
//  Tasks
//
//  Created by Paulo Gonzaga on 4/29/14.
//  Copyright (c) 2014 iOS in Action. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IATaskViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *taskLabel;
@property (weak, nonatomic) NSString *task;
@property (weak, nonatomic) id delegate;

- (IBAction)completeTask:(id)sender;


@end
