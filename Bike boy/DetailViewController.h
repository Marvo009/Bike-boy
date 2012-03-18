//
//  DetailViewController.h
//  Bike boy
//
//  Created by Marvin Andrew on 3/18/12.
//  Copyright (c) 2012 Marvin Andrews LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
