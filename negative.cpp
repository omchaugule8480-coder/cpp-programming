#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int n)
    {
        x = n;
    }

    void operator-()
    {
        x = -x;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    int y;

    cout << "Enter value: ";
    cin >> y;

    Number n1(y);

    cout << "Before operator - : ";
    n1.display();

    -n1;

    cout << "After operator - : ";
    n1.display();

    return 0;
}
   