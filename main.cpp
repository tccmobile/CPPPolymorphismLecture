#include <iostream>
#include <vector>
using namespace std;

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"

int main() {
   /* Shape one;
    cout<<one.getArea()<< endl; */

   Shape* one;

    vector<Shape *> myShapes;


    //one = new Rectangle();
    //cout<<one -> getArea()<<endl;
    //one -> printMe();
    Rectangle two;
    Rectangle three(4,5);
   // cout<< two.getArea() << endl;
   // cout << three.getArea() <<endl;



    Circle four;
    Circle five(4);
  //  cout<<four.getArea()<<endl;
  //  cout<<five.getArea()<<endl;

  //one = new Circle(4);
  //  cout<<one -> getArea()<<endl;
  //  one -> printMe();

    Square six;
    Square seven(5);

    //one = new Square(7);
    //cout<<one -> getArea()<<endl;
    //one -> printMe();
   // cout<<six.getArea()<<endl;
   // cout<<seven.getArea()<<endl;

    myShapes.push_back(new Rectangle());
    myShapes.push_back(new Rectangle(4,7));
    myShapes.push_back(new Circle());
    myShapes.push_back(new Circle(8));
    myShapes.push_back(new Square());
    myShapes.push_back(new Square(9));

    for (int i = 0; i <myShapes.size(); ++i) {
        myShapes.at(i)->printMe();
        cout<<myShapes.at(i)->getArea()<<endl;
    }



}
