//
//  AppDelegate.h
//  ShareSDKForBackgroundOfNavigation
//
//  Created by lisa on 14-7-22.
//  Copyright (c) 2014年 lisa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ShareSDK/ShareSDK.h>
#import "AGViewDelegate.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    AGViewDelegate *_viewDelegate;
}
@property (strong, nonatomic) UIWindow *window;

@property (nonatomic,readonly)AGViewDelegate *viewDelegate;

@end
