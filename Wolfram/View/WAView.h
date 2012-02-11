//
//  WAView.h
//  Wolfram
//
//  Created by Alex Nichol on 2/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <AppKit/AppKit.h>
#import "WAViewItem.h"
#import "WAViewSearchCell.h"
#import "WAViewPodCell.h"
#import "WAScrollState.h"

@class WAView;

@protocol WAViewDelegate <NSObject>

@optional
- (void)waView:(WAView *)view searchQuery:(NSString *)query;

@end

@interface WAView : NSView <WAEventManagerTarget> {
    NSScrollView * scrollView;
    NSClipView * clipView;
    NSView * contentView;
    
    BOOL configuredNotifications;
    NSMutableArray * itemViews;
    WAEventManager * eventManager;
    
    NSMutableArray * scrollStates;
    
    __weak id<WAViewDelegate> delegate;
}

@property (nonatomic, weak) id<WAViewDelegate> delegate;

- (id)initWithFrame:(NSRect)frameRect;

- (void)addItem:(WAViewItem *)item;
- (WAViewItem *)addCell:(WAViewItemCell *)cell;
- (void)removeItems;
- (WAViewSearchCell *)searchCell;
- (WAViewPodCell *)addPodCell:(WAPod *)aPod;

- (void)saveScrollRect;
- (void)restoreScrollRect;

- (void)hookupWindowNotifications;
- (void)detachWindowNotifications;

@end
