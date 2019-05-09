//
//  AppDelegate.h
//  cameraios
//
//  Created by Meiling Li on 5/9/19.
//  Copyright © 2019 Meiling Li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

