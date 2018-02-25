//
//  ObjPointt.h
//  ThrowAway
//
//  Created by Cactice on 2/25/18.
//  Copyright © 2018 Cactice. All rights reserved.
//

#ifndef ObjPointt_h
#define ObjPointt_h
#import <Foundation/Foundation.h>

@interface ObjPointt : NSObject
-(void)setXY : (float) X1 Y:(float)Y1;
- (id)initWithX:(float)X1 Y:(float)Y1;
-(float)distance;
@end

#endif /* ObjPointt_h */
