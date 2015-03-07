//
//  InboxTableViewController.h
//  Ribbit
//
//  Created by Philip Brown on 02/03/2015.
//  Copyright (c) 2015 Yellow Flag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>

@interface InboxTableViewController : UITableViewController

@property (strong, nonatomic) NSArray *messages;
@property (strong, nonatomic) PFObject *selectedMessage;
@property (strong, nonatomic) MPMoviePlayerController *moviePlayer;

- (IBAction)logout:(id)sender;
@end
