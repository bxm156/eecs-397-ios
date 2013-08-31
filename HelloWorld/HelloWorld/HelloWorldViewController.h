//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Bryan Marty on 8/30/13.
//  Copyright (c) 2013 Bryan Marty. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController  <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
- (IBAction)changeGreeting:(UIButton *)sender;
@end
