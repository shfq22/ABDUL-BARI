// 1. Pass by Value
// In Pass by Value method, a variable's actual value is copied and then passed to the function instead of the original variable. As the result, any changes to the parameter inside the function will not affect the variable's original value outside the function. Althogh it is easy to understand and implement, this method is not so useful for large size of data structures at it involves copying the value.



// C++ program to illustrate the pass by value
#include <iostream>
using namespace std;

// function to swap variables
void swap(int a, int b)  // void function does not return any value so we don't have to use return statement
// here we've passed the copy of the actual parameters
// so the actual values of x and y will not be changed
{
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;  
    //here formal parameters are modified
    // but the changes are not reflected in the actual parameters
}
int main()
{
    int x = 5;
    int y = 10;

    cout << "Before Swapping:\n";
    cout << "x = " << x << ", y = " << y << endl;       // x = 5, y = 10

    // Call the 'swap' function with pass-by-value
    // parameters
    swap(x, y);

    // Print the values of 'x' and 'y' after the
    // (ineffective) swap The values remain unchanged
    // because the function works on copies.
    cout << "After Swapping"<<endl;
    cout << "x = " << x << ", y = " << y << endl;    // x = 5, y = 10

    return 0;
}



// Output
// Before Swapping:
// x = 5, y = 10
// After Swapping:
// x = 5, y = 10         // actual values of x and y remain unchanged because the function works on copies of the actual values of x and y not on the actual values of x and y