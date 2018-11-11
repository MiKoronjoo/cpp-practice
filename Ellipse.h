#pragma once
#include "Shape.h"

class Ellipse: public Shape {
protected:
    double major_radius;
    double minor_radius;
    Ellipse();
public:
    Ellipse(double major, double minor);
    void draw();
    double getArea();
};
