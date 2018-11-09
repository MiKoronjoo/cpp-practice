#include <iostream>
#define PI 3.14159
using namespace std;

class Shape {
protected:
    double area;
    Shape() {}
public:
    Shape(double area) {
        this->area = area;
    }
    virtual void draw() {
        cout << "Draw a shape!" << endl;
    }
    virtual double getArea() {
        return area;
    }
};

class Rectangle: public Shape {
protected:
    double length;
    double width;
    Rectangle() {}
public:
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }
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
        this->length = side;
        this->width = side;
    }
};

class Ellipse: public Shape {
protected:
    double major;
    double minor;
    Ellipse() {}
public:
    Ellipse(double major, double minor) {
        this->major = major;
        this->minor = minor;
    }
    void draw() {
        cout << "Draw an ellipse!" << endl;
    }
    double getArea() {
        return major * minor * PI;
    }
};

class Circle: public Ellipse {
public:
    Circle(double radius) {
        this->major = radius;
        this->minor = radius;
    }
};

class Triangle: public Shape {
protected:
    double base;
    double height;
public:
    Triangle(double base, double height) {
        this->base = base;
        this->height = height;
    }
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
