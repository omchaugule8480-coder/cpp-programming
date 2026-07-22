#include<iostream>
using namespace std;
int main (){
int num;
cout <<"Enter a number :";
cin >> num ;

if (num > 0){
    cout << num << "is a possitive numbers :";
}
 else if ( num < 0){
    cout <<num << "is a negative numbers :";
 }
 else {
    cout <<  "the number is zero :";
 }
 return 0;
}
    
