//
//  ObjPointt.m
//  ThrowAway
//
//  Created by Cactice on 2/25/18.
//  Copyright © 2018 Cactice. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ObjPointt.h"
#import "Pointt.h"

@implementation ObjPointt : NSObject  {
    Pointt* pointt;
}

-(id)init {
    pointt = new Pointt(0,0);
    return self;
}

-(id)initWithX:(float)X1 Y:(float)Y1 {
    pointt = new Pointt(X1,Y1);
    return self;
}

-(void)dealloc {
    delete pointt;
}

-(void)setXY:(float)X1 Y:(float)Y1 {
    pointt->setXY(X1,Y1);
}

-(float)distance {
    return pointt -> distance();
}

@end

