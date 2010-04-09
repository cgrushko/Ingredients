//
//  IGKPreferencesController.h
//  Ingredients
//
//  Created by Alex Gordon on 07/03/2010.
//  Copyright 2010 Fileability. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Sparkle/SUUpdater.h>

@interface IGKPreferencesController : NSWindowController<NSTableViewDataSource, NSTableViewDelegate>
{
	NSView *currentView;
	
	IBOutlet NSView *generalView;
	IBOutlet NSToolbarItem *generalToolbarItem;
	
	IBOutlet NSView *docsetsView;
	IBOutlet NSToolbarItem *docsetsToolbarItem;
	IBOutlet NSTableView *developerDirectoriesTableView;
	IBOutlet NSTableView *docsetsTableView;
	
	IBOutlet NSView *updatesView;
	IBOutlet NSToolbarItem *updatesToolbarItem;
	
	NSMutableArray *developerDirectories;
	NSMutableArray *docsets;
}

- (NSManagedObjectContext *)managedObjectContext;

//Tab switching
- (IBAction)switchToGeneral:(id)sender;
- (IBAction)switchToDocsets:(id)sender;
- (IBAction)switchToUpdates:(id)sender;

//Docsets logic
- (IBAction)addDeveloperDirectory:(id)sender;
- (IBAction)removeSelectedDeveloperDirectories:(id)sender;

//Updates logic
- (IBAction)checkForUpdates:(id)sender;

- (void)setUpdateMatrixTag:(NSInteger)updateMatrixTag;
- (NSInteger)updateMatrixTag;

@end
