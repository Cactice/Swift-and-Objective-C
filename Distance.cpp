//
//  Distance.cpp
//  DrawPad
//
//  Created by Cactice on 12/16/17.
//  Copyright © 2017 Ray Wenderlich. All rights reserved.
//

#include "Distance.h"

#include "cmath"
Distance::Distance(float x1) :
m_x1(x1){}

float Distance::getDistance() {
    return m_x1;
}
