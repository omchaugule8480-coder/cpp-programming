#include <iostream>
using namespace std;

class Area {
public:
    // Area of square
    int calculate(int side) {
        return side * side;
    }

    // Area of rectangle
    int calculate(int length, int width) {
        return length * width;
    }

    // Area of circle
    double calculate(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;

    cout << "Area of Square = " << a.calculate(5) << endl;
    cout << "Area of Rectangle = " << a.calculate(10, 5) << endl;
    cout << "Area of Circle = " << a.calculate(3.0) << endl;

    return 0;
}