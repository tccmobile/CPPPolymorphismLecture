//
// Created by William Smith on 4/16/20.
//

#ifndef POLYMORPHISMLECTURE_SQUARE_H
#define POLYMORPHISMLECTURE_SQUARE_H


#include "Rectangle.h"

class Square: public Rectangle {
public:
    Square();
    Square(double side);

    void setSide(double side);
    double getSide();

    virtual void printMe() override ;

};


#endif //POLYMORPHISMLECTURE_SQUARE_H
