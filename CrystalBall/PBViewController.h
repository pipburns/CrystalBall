//
//  PBViewController.h
//  CrystalBall
//
//  Created by Bradford Burns on 2014-08-06.
//  Copyright (c) 2014 PhilippeBurns. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PBCrystalBall;

@interface PBViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) PBCrystalBall *crystalBall;
-(void) makePrediction;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;



@end
