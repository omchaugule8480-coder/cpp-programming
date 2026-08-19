#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    result = c1.add(c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "\nSecond complex number: ";
    c2.display();

    cout << "\nSum of complex numbers: ";
    result.display();

    return 0;
}
//output
/*Enter first complex number:
Enter real part: 5
Enter imaginary part: 3

Enter second complex number:
Enter real part: 3
Enter imaginary part: 6

First complex number: 5 + 3i
Second complex number: 3 + 6i
Sum of complex numbers: 8 + 9i
*/