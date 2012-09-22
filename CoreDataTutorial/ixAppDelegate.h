//
//  ixAppDelegate.h
//  CoreDataTutorial
//
//  Created by Javier García Gallego on 22/09/12.
//  Copyright (c) 2012 Javier García Gallego. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ixAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
