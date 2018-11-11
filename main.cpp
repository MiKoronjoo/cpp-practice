#include <iostream>
#define PI 3.14159
#define _(r, g, b) new RGB(r, g, b)
using namespace std;

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
    Shape(): color(_(255, 255, 255)) {} // By default, the color is black
    virtual void draw() {
        cout << "Draw a shape!" << endl;
    }
    virtual double getArea() = 0;
    void setColor(int r, int g, int b) {
        color = _(r, g, b);
    }
};

class Rectangle: public Shape {
protected:
    double length;
    double width;
    Rectangle() {}
public:
    Rectangle(double length, double width): length(length), width(width) {}
    void draw() {
        cout << "Draw a rectangle!" << endl;
    }
    double getArea() {
        return length * width;
    }
};

class Square: public Rectangle {
public:
    Square(double side) {
        length = side;
        width = side;
    }
};

class Ellipse: public Shape {
protected:
    double major_radius;
    double minor_radius;
    Ellipse() {}
public:
    Ellipse(double major, double minor): major_radius(major), minor_radius(minor) {}
    void draw() {
        cout << "Draw an ellipse!" << endl;
    }
    double getArea() {
        return major_radius * minor_radius * PI;
    }
};

class Circle: public Ellipse {
public:
    Circle(double radius) {
        major_radius = radius;
        minor_radius = radius;
    }
};

class Triangle: public Shape {
protected:
    double base;
    double height;
public:
    Triangle(double base, double height): base(base), height(height) {}
    void draw() {
        cout << "Draw a triangle!" << endl;
    }
    double getArea() {
        return base * height / 2;
    }
};

int main() {

    return 0;
}
