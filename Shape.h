#pragma once
#include "RGB.h"

class Shape {
protected:
    RGB* color;
public:
    Shape();
    virtual void draw();
    virtual double getArea() = 0;
    void setColor(int r, int g, int b);
};