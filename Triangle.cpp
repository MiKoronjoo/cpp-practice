#include <iostream>
#include "Triangle.h"

Triangle::Triangle(double base, double height): base(base), height(height) {}

void Triangle::draw(){
    std::cout << "Draw a triangle!" << std::endl;
}

double Triangle::getArea() {
    return base * height / 2;
}
