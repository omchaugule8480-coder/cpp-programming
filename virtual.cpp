#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Square : public Shape
{
    int l;

public:
    Square(int x)
    {
        l = x;
    }

    void area()
    {
        cout << "Area of Square = " << l * l << endl;
    }
};

class Rectangle : public Shape
{
    int l, b;

public:
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    void area()
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Circle : public Shape
{
    int r;

public:
    Circle(int x)
    {
        r = x;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main()
{
    Square s(5);
    Rectangle r(5, 10);
    Circle c(2);

    s.area();
    r.area();
    c.area();

    return 0;
}