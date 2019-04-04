//
// Created by Mads Lee Jensen on 07/07/16.
// Copyright (c) 2016 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>

@interface RCTImageSequenceView : UIImageView
@property (nonatomic, copy) RCTBubblingEventBlock onLooped;
@end
