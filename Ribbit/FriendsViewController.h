//
//  FriendsViewController.h
//  Ribbit
//
//  Created by Philip Brown on 04/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (strong, nonatomic) PFRelation *friendsRelation;
@property (strong, nonatomic) NSArray *friends;

@end
