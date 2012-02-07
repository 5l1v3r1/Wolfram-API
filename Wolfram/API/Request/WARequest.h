//
//  WARequest.h
//  Wolfram
//
//  Created by Alex Nichol on 2/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WARequest : NSObject {
    NSArray * assumptions;
    NSArray * podStates;
    NSString * APIKey;
    NSString * query;
}

@property (readonly) NSArray * assumptions;
@property (readonly) NSArray * podStates;
@property (readonly) NSString * APIKey;
@property (readonly) NSString * query;

- (id)initWithQuery:(NSString *)theQuery apiKey:(NSString *)theKey
        assumptions:(NSArray *)theAssumptions podStates:(NSArray *)theStates;

- (NSURL *)encodedURL;
- (NSURL *)encodedURLForIncludeIDs:(NSArray *)podIDs;

@end
