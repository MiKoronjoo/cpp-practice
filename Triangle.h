#pragma once
#include "Shape.h"

class Triangle: public Shape {
protected:
    double base;
    double height;
public:
    Triangle(double base, double height);
    void draw();
    double getArea();
};