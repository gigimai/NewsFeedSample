//
//  FeedCell.h
//  NewsFeedSample
//
//  Created by Khanh Hoa Mai on 11/04/2014.
//  Copyright (c) 2014 Bapp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FeedCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UIImageView* profileImageView;

@property (nonatomic, weak) IBOutlet UIImageView* picImageView;

@property (nonatomic, weak) IBOutlet UIView* picImageContainer;

@property (nonatomic, weak) IBOutlet UILabel* nameLabel;

@property (nonatomic, weak) IBOutlet UILabel* updateLabel;

@property (nonatomic, weak) IBOutlet UILabel* dateLabel;

@property (nonatomic, weak) IBOutlet UILabel* commentCountLabel;

@property (nonatomic, weak) IBOutlet UILabel* likeCountLabel;


@end
