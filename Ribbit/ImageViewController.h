//
//  ImageViewController.h
//  Ribbit
//
//  Created by Philip Brown on 07/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (strong, nonatomic) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
