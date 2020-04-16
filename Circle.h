//
// Created by William Smith on 4/14/20.
//

#ifndef POLYMORPHISMLECTURE_CIRCLE_H
#define POLYMORPHISMLECTURE_CIRCLE_H


#include "Shape.h"

class Circle: public Shape {
private:
    double radius;
public:
    Circle();

    Circle(double radius);

    double getRadius() const;

    void setRadius(double radius);

    double getArea() override;

    virtual void printMe() override ;
};


#endif //POLYMORPHISMLECTURE_CIRCLE_H
