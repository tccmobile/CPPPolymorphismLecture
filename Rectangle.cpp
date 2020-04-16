//
// Created by William Smith on 4/14/20.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    Rectangle::length = length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

Rectangle::Rectangle() {
    length = 1.0;
    width = 2.0;
}

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

double Rectangle::getArea() {
    return length * width;
}

void Rectangle::printMe() {
    cout<<"I am a Rectangle"<<endl;
}
