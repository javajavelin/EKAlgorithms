//
//  EKEdge.h
//  EKAlgorithmsApp
//
//  Created by Yifei Zhou on 3/22/14.
//  Copyright (c) 2014 Evgeny Karkan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EKVertex.h"

@interface EKEdge : NSObject

@property (nonatomic, strong) EKVertex *adjacentFrom;
@property (nonatomic, strong) EKVertex *adjacentTo;
@property (nonatomic, strong) NSObject *weight;

- (instancetype)initWithAdjacentFrom:(EKVertex *)vertexFrom
                                  To:(EKVertex *)vertexTo
                           andWeight:(NSObject *)weight;

@end
