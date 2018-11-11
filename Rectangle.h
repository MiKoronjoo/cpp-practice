#pragma once
#include "Shape.h"

class Rectangle: public Shape {
protected:
    double length;
    double width;
    Rectangle();
public:
    Rectangle(double length, double width);
    void draw();
    double getArea();
};