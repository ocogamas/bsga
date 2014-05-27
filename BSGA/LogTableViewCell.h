//
//  LogTableViewCell.h
//  BSGA
//
//  Created by 近藤 雅人 on 12/06/17.
//  Copyright (c) 2012年 レッドフォックス株式会社. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LogTableViewCell : UITableViewCell {
}

@property(nonatomic, retain) IBOutlet UILabel *numberLabel;
@property(nonatomic, retain) IBOutlet UILabel *launchCountLabel;
@property(nonatomic, retain) IBOutlet UILabel *dateLabel;
@property(nonatomic, retain) IBOutlet UILabel *countryLabel;
@property(nonatomic, retain) IBOutlet UILabel *deviceLabel;
@property(nonatomic, retain) IBOutlet UILabel *deviceNameLabel;
@property(nonatomic, retain) IBOutlet UILabel *shokyuLabel;
@property(nonatomic, retain) IBOutlet UILabel *chukyuLabel;
@property(nonatomic, retain) IBOutlet UILabel *jokyuLabel;
@property(nonatomic, retain) IBOutlet UILabel *chokyuLabel;
@property(nonatomic, retain) IBOutlet UILabel *gacha01Label;
@property(nonatomic, retain) IBOutlet UILabel *gacha02Label;
@property(nonatomic, retain) IBOutlet UILabel *gacha03Label;
@property(nonatomic, retain) IBOutlet UILabel *payPointLabel;
@property(nonatomic, retain) IBOutlet UILabel *payGachaLabel;

@property(nonatomic, retain) IBOutlet UILabel *scoreLabel;

@end
