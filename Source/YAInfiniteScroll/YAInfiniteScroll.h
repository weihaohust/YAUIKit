//
//  YAInfiniteScroll.h
//  YAUIKit
//
//  Created by Candyan on 14-11-18.
//  Copyright (c) 2014年 Candyan. All rights reserved.
//

#import "YATableViewController.h"

@class YAInfiniteScroll;

@protocol YAInfiniteScrollDelegate <NSObject>

@optional

- (UIView *)infiniteScrollLoadingMoreView:(YAInfiniteScroll *)infiniteScroll;
- (UIView *)infiniteScrollNoMoreView:(YAInfiniteScroll *)infiniteScroll;

@end

@interface YAInfiniteScroll : NSObject <UIScrollViewDelegate> {
    __weak UIScrollView *_scrollView;
    BOOL _shouldLoadMore;
}

@property (nonatomic, weak) id<YAInfiniteScrollDelegate> delegate;

@property (nonatomic, assign) BOOL bottomStick;
@property (nonatomic, assign) BOOL loadingMore;
@property (nonatomic, assign) BOOL hasMore;
@property (nonatomic, copy) void (^loadMoreBlock)();

@property (nonatomic, weak) UIView *loadMoreFooterView;

- (instancetype)initWithScrollView:(UIScrollView *)scrollView;

- (void)endLoadMore;

@end

@interface YATableViewController (YAInfiniteScroll)

- (YAInfiniteScroll *)infiniteScroll;

@end