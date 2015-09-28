//
//  stocksBrain.h
//  stockDataQuery
//
//  Created by Fadi Kfoury on 9/18/15.
//  Copyright (c) 2015 Fadi Kfoury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface stocksBrain : NSObject
{
//alert for connection lost situations
UIAlertView * connectionAlert;
//a block for pending requests/fail to support the retry functionality
void (^pendingRequestBlock)(void);
void (^failBlock)(NSString*error);
}

-(void) quertStockDataWithFBlock:( void(^) (NSString*error)) fBlock andSblock:(void(^)(NSDictionary*response))sBlock;

@end
