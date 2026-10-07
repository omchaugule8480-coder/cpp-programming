#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // Constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Calculate area
    float area() {
        return length * width;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "Area of Rectangle = " << r.area() << endl;

    return 0;
}