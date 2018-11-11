#include <iostream>
#include "Shape.h"
#define _(r, g, b) new RGB(r, g, b)

Shape::Shape(): color(_(255, 255, 255)) {} // By default, the color is black

void Shape::draw() {
    std::cout << "Draw a shape!" << std::endl;
}

void Shape::setColor(int r, int g, int b) {
    color = _(r, g, b);
}