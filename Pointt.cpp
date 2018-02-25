//
//  Pointt.cpp
//  DrawPad
//
//  Created by Cactice on 12/19/17.
//  Copyright © 2017 Ray Wenderlich. All rights reserved.
//
#include "Pointt.h"
#include<math.h>
Pointt::Pointt(float x,float y) :
x(x),
y(y){}
Pointt::Pointt(){}
Pointt::~Pointt(){}

void Pointt::setXY(float x, float y){
    this -> x=x;
    this -> y=y;
}

void Pointt::setX(float x){
    this -> x = x;
}

void Pointt::setY(float y){
    this -> y = y;
}

Pointt Pointt::divide(Pointt devisor){
    Pointt quotient;
    quotient.setX(this -> x / devisor.x);
    quotient.setY(this -> y / devisor.y);
    return quotient;
}

float Pointt::distance(Pointt other){
    Pointt difference = this->subtract(other);
    float distance = sqrt(difference.x*difference.x+difference.y*difference.y);
    return distance;
}

float Pointt::distance(){
    float distance = sqrt(x*x+y*y);
    return distance;
}

Pointt Pointt::subtract(Pointt number){
    Pointt difference(x - number.x, y - number.y);
    return difference;
}

Pointt Pointt::add(Pointt number){
    Pointt sum(x + number.x, y + number.y);
    return sum;
}
