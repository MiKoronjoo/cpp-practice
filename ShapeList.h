#pragma once
#include <vector>
#include <algorithm>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Triangle.h"

bool shapeCompare(Shape* lh_shape, Shape* rh_shape) {
    return *lh_shape > *rh_shape;
}

class ShapeList {
private:
    std::vector<Shape*> list;
public:
    void add(Shape& shape) {
        list.push_back(&shape);
    }
    void sort() {
        std::sort(list.begin(), list.end(), shapeCompare);
    }
    Shape* find(double area) {
        for(auto shape = list.begin(); shape != list.end(); shape++) {
            if((*shape)->getArea() == area)
                return (Shape*) *shape;
        }
        return nullptr;
    }
    void remove(double area) {
        for(auto shape = list.begin(); shape != list.end(); shape++) {
            if((*shape)->getArea() == area) {
                list.erase(shape);
                return;
            }
        }
    }

};