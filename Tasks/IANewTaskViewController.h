//
//  IANewTaskViewController.h
//  Tasks
//
//  Created by Paulo Gonzaga on 4/29/14.
//  Copyright (c) 2014 iOS in Action. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IANewTaskViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) id delegate;

- (IBAction)close:(id)sender;
- (IBAction)saveTask:(id)sender;

@end
