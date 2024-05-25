#include <iostream>
using namespace std;
class Shape {
private:
    int radius;
    int side;

public:
    Shape(int r, int s) : radius(r), side(s) {}

    int calculateCircleArea() {
        return radius * radius;
    }

    int calculateSquarePerimeter() {
        return 4 * side;
    }
};

int main() {
    Shape shape(5, 4);
    cout << "Area of the circle: " << shape.calculateCircleArea() << endl;
    cout << "Perimeter of the square: " << shape.calculateSquarePerimeter() << endl;

    return 0;
}