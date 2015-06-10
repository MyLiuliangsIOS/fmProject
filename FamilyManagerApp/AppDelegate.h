//
//  AppDelegate.h
//  FamilyManagerApp
//
//  Created by ESI on 15/5/14.
//  Copyright (c) 2015年 LYC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;



@property (readonly, nonatomic) BOOL isConnectNet;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

