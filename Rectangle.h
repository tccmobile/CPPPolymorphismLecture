//
// Created by William Smith on 4/14/20.
//

#ifndef POLYMORPHISMLECTURE_RECTANGLE_H
#define POLYMORPHISMLECTURE_RECTANGLE_H


#include "Shape.h"

class Rectangle: public Shape {
private:
    double length;
    double width;
public:

    Rectangle();

    double getArea() override;

    void printMe() override;

    Rectangle(double length, double width);

    double getLength() const;

    void setLength(double length);

    double getWidth() const;

    void setWidth(double width);

};


#endif //POLYMORPHISMLECTURE_RECTANGLE_H
