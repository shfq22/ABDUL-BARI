#include<iostream>
#include<stdio.h>
using namespace std;


// if this function is called, it does not return any value.
// so we've to print the value inside the function
void add(int a, int b) {  
    int c;
    c = a + b;
    cout << "The sum is " << c << endl;   // Directly prints the result
}

int main(){
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    add(x,y); // Function call
    //  if a void function is called, it does not return any value.
}