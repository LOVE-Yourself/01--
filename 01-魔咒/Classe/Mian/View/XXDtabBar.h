//
//  XXDtabBar.h
//  01-彩票项目分析
//
//  Created by 哥不帅但很坏 on 16/8/21.
//  Copyright © 2016年 哥不帅但很坏. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XXDtabBar;
@protocol XXDtabBarDelegate <NSObject>
-(void)XXDtabar:(XXDtabBar *)tabar index:(NSInteger)index;
@end
@interface XXDtabBar : UIView
@property(nonatomic,strong)NSArray *items;
@property(nonatomic,weak)id<XXDtabBarDelegate> delegate;
@end
