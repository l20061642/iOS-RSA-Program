//
//  DecryptViewController.h
//  RSA
//
//  Created by Marcel Boersma(1) on 5/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "RSAKeys.h"

@interface DecryptViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource> {
    
    RSAKeys *currentKey;
}

@property (nonatomic, retain) IBOutlet UITextField *toDecryptText;
@property (nonatomic, retain) IBOutlet UITextView *decryptedText;
@property (nonatomic, retain) IBOutlet UIPickerView *picker;

@property (nonatomic, retain) IBOutlet NSFetchedResultsController *frc;

- (void)didEndEditingToEncryptTextField:(id)sender;

@end
