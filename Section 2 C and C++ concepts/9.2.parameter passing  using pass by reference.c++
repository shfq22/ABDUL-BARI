// 2. Pass by Reference
// it only works in C++ and not in C
// In pass-by-reference method, instead of passing the argument(An argument is the actual value that is passed to the function or method when it is called.) itself, we passes the reference of an argument to the function. This allows the function to change the value of the original argument.

// Any changes we make to your argument inside your function are reflected in your original argument so we have to be careful while handling data in this method.



// C++ program to illustrate the use of pass by reference
#include <iostream>
using namespace std;

// function to swap variables
void swap(int& a, int& b)   // void function does not return any value so we don't have to use return statement
// we use & to pass the reference of the variable
// 
{
    int temp = a;
    a = b;
    b = temp;  
    // here formal parameters are modified and the changes are reflected in the actual parameters
}  

// driver code
int main()
{
    int x = 5;
    int y = 10;
    cout << "Before swap:\n";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;

    // Call the 'swap' function with pass-by-reference
    // parameters Values of 'x' and 'y' are modified in the
    // calling code because references are used.
    swap(x, y);

    cout << "After swap:\n";
    cout << "x = " << x << ", ";
    cout << "y = " << y << endl;
    return 0;
}



// Output
// Before swap:
// x = 5, y = 10
// After swap:
// x = 10, y = 5