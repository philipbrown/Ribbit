//
//  SignupViewController.h
//  Ribbit
//
//  Created by Philip Brown on 03/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)signup:(id)sender;

@end
