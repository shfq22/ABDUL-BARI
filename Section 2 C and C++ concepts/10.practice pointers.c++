#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int a = 10;
    //int &r;  // error // reference variable should be initialized at the time of declaration

    int &r = a;
    // reference doesn't consume memory is uses the same memory of a
    cout<<a<<endl;  // 10
    cout<<r<<endl;  // 10

    int b = 25;
    r = b;  // r is not a variable, it is a reference to a variable

    cout<<a<<endl;  // 25
    cout<<r<<endl;  // 25

    



}