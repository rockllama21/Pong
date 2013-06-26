//
//  ViewController.h
//  Pong
//
//  Created by iD Student on 6/26/13.
//  Copyright (c) 2013 Tyler Maher. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PongViewController : UIViewController{
    double count;
}

@property(strong, nonatomic)UIViewController* optionsViewController;
@property(strong, atomic)NSTimer* timer;


-(void)switchToOptionsView;
-(void)timerUpdate;

@end
