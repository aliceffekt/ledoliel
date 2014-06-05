//
//  xxiivvViewController.h
//  foodround
//
//  Created by Devine Lu Linvega on 2014-06-04.
//  Copyright (c) 2014 XXIIVV. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xxiivvViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView *menuView;
@property (strong, nonatomic) IBOutlet UIView *selectionView;
@property (strong, nonatomic) IBOutlet UIView *submenuView;
@property (strong, nonatomic) IBOutlet UILabel *selectorView;

@property (strong, nonatomic) IBOutlet UIButton *menuOption1Button;
@property (strong, nonatomic) IBOutlet UIButton *menuOption2Button;
@property (strong, nonatomic) IBOutlet UIButton *menuOption3Button;
@property (strong, nonatomic) IBOutlet UIButton *menuOption4Button;

@property (strong, nonatomic) IBOutlet UIButton *submenuOption1Button;
@property (strong, nonatomic) IBOutlet UIButton *submenuOption2Button;

@property (strong, nonatomic) IBOutlet UIView *statusView;
@property (strong, nonatomic) IBOutlet UILabel *relationshipLabel;
@property (strong, nonatomic) IBOutlet UIView *relationshipRating;
@property (strong, nonatomic) IBOutlet UIView *relationshipRatingBar;
@property (strong, nonatomic) IBOutlet UIView *hintView;
@property (strong, nonatomic) IBOutlet UILabel *hintLabel;
@property (strong, nonatomic) IBOutlet UIButton *confirmButton;

- (IBAction)menuOption1Button:(id)sender;
- (IBAction)menuOption2Button:(id)sender;
- (IBAction)menuOption3Button:(id)sender;
- (IBAction)menuOption4Button:(id)sender;
- (IBAction)submenuOption1Button:(id)sender;
- (IBAction)submenuOption2Button:(id)sender;
- (IBAction)confirmButton:(id)sender;

@end

int currentGameRound = 0;
int currentMenuSelection = -1;
int currentSubmenuSelection = -1;
float templateMenuButtonHeight = 30;

NSMutableDictionary *user;
NSMutableDictionary *guest;
NSMutableDictionary *spellbook;