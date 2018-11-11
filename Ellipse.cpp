#include <iostream>
#include "Ellipse.h"
#define PI 3.14159

Ellipse::Ellipse() {}

Ellipse::Ellipse(double major, double minor): major_radius(major), minor_radius(minor) {}

void Ellipse::draw(){
        std::cout << "Draw an ellipse!" << std::endl;
}

double Ellipse::getArea() {
    return major_radius * minor_radius * PI;
}
