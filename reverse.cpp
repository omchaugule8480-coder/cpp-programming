#include<iostream>
using namespace std;
int main () {
int num, reverse = 0, remender;
cout <<"Enter a number:";
cin >> num;
while(num !=0){
  remender = num % 10;
 reverse = reverse * 10+remender;
 num = num / 10;
}
 cout << "reversed number = " <<  reverse; 

}