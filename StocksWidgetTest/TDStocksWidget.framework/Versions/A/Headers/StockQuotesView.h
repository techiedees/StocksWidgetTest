//
//  StockQuotesView.h
//  StockQuotesWidget
//
//
//  Created by Techidees on 7/24/11.
//  Copyright 2012 http://www.techiedees.com All rights reserved.
//  Contact me at techiedees@gmail.com
//
/*
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 * Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 * Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 
 * Neither the name of the author nor the names of its contributors may be used
 to endorse or promote products derived from this software without specific
 prior written permission.
 */

#import <UIKit/UIKit.h>

@interface StockQuotesView : UIView 
{
    id delegate;    // Set it to Navigation Controller. (Used in iPhone Version)
}

@property (nonatomic, assign) id delegate;
@property (nonatomic, assign) BOOL drawGradient;    // Default is YES.
@property (nonatomic, assign) BOOL drawBorder;      // Default is YES.
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, retain) UIColor *gradientFirstHalfColor;
@property (nonatomic, retain) UIColor *gradientsecondHalfColor;
@property (nonatomic, assign) CGFloat stockRefreshTime;

#pragma mark -
#pragma mark Custom Methods

- (void)startRefreshing;

- (void)stopRefreshing;

@end


