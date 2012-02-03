//
//  socialOsAppDelegate.h
//  socialOs
//
//  Created by Aisha Hanif on 2/3/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class socialOsViewController;

@interface socialOsAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    socialOsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet socialOsViewController *viewController;

@end

