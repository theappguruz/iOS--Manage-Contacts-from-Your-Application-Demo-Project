//
//  ViewController.h
//  ManageContactsDemo
//
//  Created by Krupa-iMac on 21/04/14.
//  Copyright (c) 2014 TheAppGuruz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate,ABPersonViewControllerDelegate,ABNewPersonViewControllerDelegate>

@property (nonatomic, assign) ABAddressBookRef addressBook;

@end
