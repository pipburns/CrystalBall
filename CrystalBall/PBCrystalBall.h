//
//  PBCrystalBall.h
//  CrystalBall
//
//  Created by Bradford Burns on 2014-08-15.
//  Copyright (c) 2014 PhilippeBurns. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PBCrystalBall : NSObject{
    NSArray *_predictions;
}

@property(strong,nonatomic,readonly) NSArray *predictions;
-(NSString*) randomPrediction;

@end
