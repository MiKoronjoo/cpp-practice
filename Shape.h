#pragma once

struct RGB {
    int r, g, b;
    RGB(int r, int g, int b){
        this->r = r;
        this->g = g;
        this->b = b;
    }
};

class Shape {
protected:
    RGB* color;
public:
    Shape();
    virtual void draw();
    virtual double getArea() = 0;
    void setColor(int r, int g, int b);
};