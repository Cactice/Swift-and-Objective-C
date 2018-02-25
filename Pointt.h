//
//  NewPointt.h
//  DrawPad
//
//  Created by Cactice on 12/20/17.
//  Copyright © 2017 Ray Wenderlich. All rights reserved.
//

#ifndef Pointt_h
#define Pointt_h

class Pointt
{
public:
    Pointt(float x,float y);
    float x=0,y=0;
    ~Pointt();
    Pointt();
    void setXY(float x,float y);
    void setX(float x);
    void setY(float y);
    Pointt divide(Pointt);
    Pointt add(Pointt);
    Pointt subtract(Pointt);
    float distance(Pointt);
    float distance();
};





#endif /* NewPointt_h */
