//
//  TipViewController.h
//  tipCalculator
//
//  Created by Ambika Janardhanan on 8/7/13.
//  Copyright (c) 2013 Y.CORP.YAHOO.COM\ambika. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TipViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, strong) IBOutlet UITextField *billTextField;
@property (nonatomic, strong) IBOutlet UILabel *tipLabel;
@property (nonatomic, strong) IBOutlet UILabel *totalLabel;
@property (nonatomic, strong) IBOutlet UISegmentedControl *tipControl;

- (IBAction)onDoneButton;

@end
