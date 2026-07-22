#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout << "Enter two numbers:";
    cin >> a >> b;
     
    if (a > b){ 
        cout << a << "is the largest numbers:";
    }
    else if (b > a){
        cout << b << "is the largest numbers :";
    }else
    {
        cout << "both numbers are equal:";
    }
    return 0;
}