//
//  KickerAppDelegate.h
//  Kicker
//
//  Created by Eduard Litau on 3/13/10.
//  Copyright FH Köln, Caroo GmbH 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KickerAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
