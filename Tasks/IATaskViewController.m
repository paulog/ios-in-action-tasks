//
//  IATaskViewController.m
//  Tasks
//
//  Created by Paulo Gonzaga on 4/29/14.
//  Copyright (c) 2014 iOS in Action. All rights reserved.
//

#import "IATaskViewController.h"
#import "IAViewController.h"

@interface IATaskViewController ()

@end

@implementation IATaskViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.taskLabel.text = self.task;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)completeTask:(id)sender
{
    IAViewController *tasksListView = self.delegate;
    [tasksListView.tasks removeObject:self.task];
    [self.navigationController popViewControllerAnimated:YES];
}

@end
