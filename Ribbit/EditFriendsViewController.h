//
//  EditFriendsViewController.h
//  Ribbit
//
//  Created by Philip Brown on 04/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsViewController : UITableViewController

@property (strong, nonatomic) NSArray *allUsers;
@property (strong, nonatomic) PFUser *currentUser;
@property (strong, nonatomic) NSMutableArray *friends;

- (BOOL)isFriend:(PFUser *)user;

@end
