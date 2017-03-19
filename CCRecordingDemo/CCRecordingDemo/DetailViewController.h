//
//  DetailViewController.h
//  CCRecordingDemo
//
//  Created by deng you hua on 3/19/17.
//  Copyright © 2017 CC | ccworld1000@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

