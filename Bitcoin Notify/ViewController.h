//
//  ViewController.h
//  Bitcoin Notify
//
//  Created by Ryan Detzel on 3/5/14.
//  Copyright (c) 2014 Ryan Detzel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(void)fetchBackgroundDataWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
@end
