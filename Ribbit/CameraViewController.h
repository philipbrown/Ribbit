//
//  CameraViewController.h
//  Ribbit
//
//  Created by Philip Brown on 05/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface CameraViewController : UITableViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) UIImagePickerController *imagePicker;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) NSString *videoFilePath;
@property (strong, nonatomic) NSArray *friends;
@property (strong, nonatomic) PFRelation *friendsRelation;
@property (strong, nonatomic) NSMutableArray *recipients;
- (IBAction)cancel:(id)sender;
- (IBAction)send:(id)sender;
- (void) uploadMessage;
- (UIImage *)resizeImage:(UIImage *)image toWith:(float)width andHeight:(float)height;
@end
