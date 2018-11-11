#pragma once
#include <exception>
#include <string>

class RGBOutOfRangeException: std::exception {
private:
    const std::string message = "Error: the RGB value is out of range. (0 <= R, G, B <= 255)";
public:
    const char* what() const throw() {
        return message.c_str();
    }
};

class ShapeNotFoundException: std::exception {
private:
    const std::string message = "Error: shape with this area not found";
public:
    const char* what() const throw() {
        return message.c_str();
    }
};