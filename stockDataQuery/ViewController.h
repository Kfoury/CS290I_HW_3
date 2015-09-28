//
//  ViewController.h
//  stockDataQuery
//
//  Created by Fadi Kfoury on 9/16/15.
//  Copyright (c) 2015 Fadi Kfoury. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *txtStockPrice;
@property (weak, nonatomic) IBOutlet UIButton *cmdQueryLatest;
- (IBAction)cmdQueryLatestPrice:(id)sender;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *myActivity;


@end

