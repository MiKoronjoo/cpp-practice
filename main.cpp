#include <iostream>
using namespace std;

class Shape {
protected:
    double area;
public:
    virtual void draw() {
        cout << "Draw a shape!" << endl;
    }
    virtual double getArea() {
        return area;
    }
};

int main() {

    return 0;
}