//
//  AppDelegate.h
//  LongFor
//
//  Created by admin on 17/5/9.
//  Copyright © 2017年 admin. All rights reserved.
//
//  Test
//  FunctionA

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(void)switchRootViewController;
-(void)switchRootViewControllerToLoginView;

@end
