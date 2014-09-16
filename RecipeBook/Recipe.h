//
//  Recipe.h
//  RecipeBook
//
//  Created by Kananat Prasertwit on 9/15/2557 BE.
//  Copyright (c) 2557 Sekthakarn-Phanhiran. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name; // name of recipe
@property (nonatomic, strong) NSString *prepTime; // preparation time
@property (nonatomic, strong) NSString *imageFile; // image filename of recipe
@property (nonatomic, strong) NSArray *ingredients; // ingredients


@end
