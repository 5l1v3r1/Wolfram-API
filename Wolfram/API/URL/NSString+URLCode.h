//
//  NSString+URLCode.h
//  Wolfram
//
//  Created by Alex Nichol on 2/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (URLCode)

- (NSString *)stringByAddingStandardPercentEscapes;
- (NSString *)stringByEvaluatingPercentEscapes;

@end
