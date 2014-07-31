//
//  PlayerCell.h
//  CommonCoreSixthGrade
//
//  Created by Francisco Salazar on 2/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *gameLabel;
@property (nonatomic, strong) IBOutlet UILabel *classLabel;
@property (nonatomic, strong) IBOutlet UIImageView *playerImageView;


@end
