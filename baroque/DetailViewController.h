//
//  DetailViewController.h
//  baroque
//
//  Created by Yu Yan on 14-10-21.
//  Copyright (c) 2014年 Yu Yan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

