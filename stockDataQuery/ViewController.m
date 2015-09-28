//
//  ViewController.m
//  stockDataQuery
//
//  Created by Fadi Kfoury on 9/16/15.
//  Copyright (c) 2015 Fadi Kfoury. All rights reserved.
//

#import "ViewController.h"
#import "stocksBrain.h"

@interface ViewController ()
{
    stocksBrain * myBrain;
    
}
@end

@implementation ViewController
@synthesize cmdQueryLatest, txtStockPrice, myActivity;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    myBrain = [stocksBrain new];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)cmdQueryLatestPrice:(id)sender
{
    //perform the call to our webservice
    [myActivity startAnimating];
    
    
 //   \\\?/// Fill in the BLANK HERE  \\\?///
    
    


}
@end
