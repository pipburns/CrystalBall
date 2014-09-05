//
//  PBCrystalBall.m
//  CrystalBall
//
//  Created by Bradford Burns on 2014-08-15.
//  Copyright (c) 2014 PhilippeBurns. All rights reserved.
//

#import "PBCrystalBall.h"

@implementation PBCrystalBall

- (NSArray *) predictions{
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain", @"It is decidedly so", @"All signs say YES", @"The stars are not aligned", @"My reply is NO", @"It is doubtful", @"Better not tell you now", @"Concentrate and ask again", @"Some would say yes", nil];
    }
    return _predictions;
}


-(NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}
@end
