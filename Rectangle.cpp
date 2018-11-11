#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() {}

Rectangle::Rectangle(double length, double width): length(length), width(width) {}

void Rectangle::draw() {
    std::cout << "Draw a rectangle!" << std::endl;
}

double Rectangle::getArea() {
    return length * width;
}
