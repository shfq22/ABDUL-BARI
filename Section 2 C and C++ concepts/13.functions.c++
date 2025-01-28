#include<iostream>
#include<stdio.h>
using namespace std;

// A function is a block of code which only runs when it is called.
// You can pass data, known as parameters, into a function.


// the a and b are formal parameters
int add (int a , int b)      // int add (int a , int b) is a prototype or header of a function
{                              // int add (int a , int b)   is a function declaration
    int c;
    c = a+b;     
    return c;   //and the body {int c; c = a+b; return c;} is a function definition
}

int main(){

    int x,y,z,w,t,s;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;

    // whn we call the function, the values of x and y(actual parameters) will be copied to the formal parameters a and b
    z = add(x,y);       // the x and y are actual parameters
    // function call
    // the add function is called with x and y as arguments
    // the add function returns the sum of x and y  to the variable z
    cout<<"The sum is "<<z<<endl;
    // then print the value of z 

    // The returned value is stored in the z variable.
    // If you don't use   [cout<<"The sum is "<<z<<endl; ], the value remains in memory but is never displayed or used.
    // if we don't print the value of z, the value of z will be lost because it is stored in the stack memory 


    cout<<"Enter the value of t and s and get the sum"<<endl;
    for(int i=0;i<4;i++){
        cin>>t>>s;
        w = add(t,s);      // Function call   // the t and s are actual parameters
        // we can call the function multiple times
        cout<<w<<endl;
    }

    
}




// one function ca