//
//  KT3ViewController.h
//  Kamera Test 4 3-30
//
//  Created by Nick Viens on 3/30/13.
//  Copyright (c) 2013 Nick Viens. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KT4ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIImagePickerController *picker;
    UIImagePickerController *picker2;
    UIImage *image;
    IBOutlet UIImageView *imageView;
}

- (IBAction)TakePhoto;
- (IBAction)ChooseExisting;

@end
