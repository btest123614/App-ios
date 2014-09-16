//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Kananat Prasertwit on 9/15/2557 BE.
//  Copyright (c) 2557 Sekthakarn-Phanhiran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface RecipeDetailViewController : UIViewController{
    
}

@property (strong, nonatomic) id detailItem;
@property (nonatomic, strong) Recipe *recipe;

@property (weak, nonatomic) IBOutlet UIImageView *recipePhoto;
@property (weak, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (weak, nonatomic) IBOutlet UITextView *ingredientTextView;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
