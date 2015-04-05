//
//  ViewController.h
//  NewsFeedSample
//
//  Created by Khanh Hoa Mai on 11/04/2014.
//  Copyright (c) 2014 Bapp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) IBOutlet UITableView* feedTableView;

@end
