//
//  JMOTableViewDescriptionDelegate.h
//  TableViewDescription
//
//  Created by Jerome Morissard on 6/9/14.
//  Copyright (c) 2014 Jerome Morissard. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol JMOTableViewDescriptionDelegate <UITableViewDelegate>

@optional
- (void)tableView:(UITableView *)tableView didSelectDataDescription:(id)selectedData;
@end
