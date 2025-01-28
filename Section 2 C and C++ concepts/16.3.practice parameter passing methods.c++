#include<iostream>
using namespace std;

int add(int &a, int b){
    // here a is passed by reference, so the actual parameter is modified
    // while b is passed by value, so the actual parameter is not modified
    int c;
    a++;
    b++;
    cout<<a<<endl;   // 11
    cout<<b<<endl;   // 21
    c = a + b;
    cout<<c<<endl;   // 32
    return c;
}

int main(){
    int x=10,y=20;

    int z = add(x,y);
    cout<<z<<endl;   // 32

    cout<<x<<endl;   // 11  // actual parameter is modified
    cout<<y<<endl;   // 20  // here actual parameter is not modified
    // because in the function add, the value of y is passed by value, so the actual parameter is not modified
}