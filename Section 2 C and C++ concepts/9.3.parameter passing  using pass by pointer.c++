// 3. Pass by Pointer
// The pass-by-pointer is very similar to the pass-by-reference method.
// The only difference is that we pass the raw pointers(adress of the variable) instead of reference to the function. 
// It means that we pass the ( address of the argument ) to the function.
// address of the argument ===> means providing the memory location where the variable is stored in the computer, instead of giving the function a copy of the variable's value.

// C++ program to illustrate the pass by pointer method.
#include <iostream>
using namespace std;

// function to swap variables

void swap(int* a, int* b)  // by using pointer we can directly reach the memory location of the variable and change the original value of the variable
{
    int temp = *a;       // *a is used to dereference the pointer
    *a = *b;             // *b is used to dereference the pointer
    *b = temp;           // temp is the value of a
}

// driver code
int main()
{

    int x = 5;
    int y = 10;

    // Print the values of 'x' and 'y' before the swap
    cout << "Before swap:\n";
    cout << "x = " << x << " ,";
    cout << "y = " << y << endl;

    // Call the 'swap' function with pass-by-pointer
    // parameters
    // Values of 'x' and 'y' are modified in the calling
    // code because pointers are used.
    swap(&x, &y);        // &x and &y are the addresses of x and y
    // function call by passing the address of x and y

    // Print the values of 'x' and 'y' after the swap
    cout << "After swap:\n";
    cout << "x = " << x << " ,";
    cout << "y = " << y << endl;

    return 0;
}





// Output
// Before swap:
// x = 5 ,y = 10
// After swap:
// x = 10 ,y = 5


// Pass-by-pointer means sending the memory address of a variable to a function instead of the variable itself. 
//This allows the fn to directly modify the original variable, just like pass-by-reference.
