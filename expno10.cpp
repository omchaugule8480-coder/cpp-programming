#include<iostream>
using namespace std;
int main ()
{
 int a , b ,c;
 cout << "Enter three numbers: ";
 cin >> a >> b >> c;

 if (a >= b && a >= c){
    cout << a <<"is the largest numbers:";
 }
 else if (b >= a && b >= c){
    cout << b <<"is the largest numbers :";
}
else {
cout << c << "is the largest numbers:";

}
return 0;
}