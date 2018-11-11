#include <iostream>
#include "Shape.h"
#include "Exceptions.h"
#define _(r, g, b) new RGB(r, g, b)

Shape::Shape(): color(_(255, 255, 255)) {} // By default, the color is black

void Shape::draw() {
    std::cout << "Draw a shape!" << std::endl;
}

void Shape::setColor(int r, int g, int b) {
    if(r > 255 or g > 255 or b > 255 or r < 0 or g < 0 or b < 0) {
        RGBOutOfRangeException ex;
        throw ex;
    }
    color = _(r, g, b);
}