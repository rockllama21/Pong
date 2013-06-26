//
//  AppDelegate.h
//  Pong
//
//  Created by iD Student on 6/26/13.
//  Copyright (c) 2013 Tyler Maher. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@property (strong,nonatomic)ViewController *optionsViewController;

@property (strong,nonatomic) UINavigationController *navigationViewController;

@end
