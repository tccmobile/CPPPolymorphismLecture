//
// Created by William Smith on 4/14/20.
//

#include "Circle.h"
#include <iostream>
using namespace std;

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}

Circle::Circle() {
    radius = 1.0;
}

Circle::Circle(double radius) : radius(radius) {}

double Circle::getArea() {
    return 3.14159 * radius * radius;
}

void Circle::printMe() {
    cout<<"I am a Circle!"<<endl;
}

