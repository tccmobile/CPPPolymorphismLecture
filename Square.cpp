//
// Created by William Smith on 4/16/20.
//

#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(): Rectangle(2,2){

}

Square::Square(double side) : Rectangle(side,side) {

}

double Square::getSide() {
    return getLength();
}

void Square::setSide(double side) {
    setLength(side);
    setWidth(side);
}

void Square::printMe() {
    cout<<"I am a square!"<<endl;
}
