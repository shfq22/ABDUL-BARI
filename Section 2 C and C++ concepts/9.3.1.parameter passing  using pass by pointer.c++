#include <iostream>
using namespace std;


// Pass-by-pointer means sending the memory address of a variable to a function instead of the variable itself.
// This allows the fn to directly modify the original variable, just like pass-by-reference.
void showAddress(int* ptr) {       // int* ptr: The function receives this address.
    cout << "Address received: " << ptr << endl;       // ptr: Prints the address of the variable num.                  
    cout << "Value at the address: " << *ptr << endl;  // *ptr: Dereferences the pointer to access the value stored at that address (in this case, 42).
}

int main() {
    int num = 42;
    cout << "Address of num: " << &num << endl;      // Get the address of num

    showAddress(&num);  // Pass the address of num
    // &num: Gets the address of num and sends it to the function.
    return 0;
}



// Output
// Address of num: 0x7fffbf7b3b7c
// Address received: 0x7fffbf7b3b7c
// Value at the address: 42


// In the above program, we have a function showAddress that takes a pointer as an argument. We pass the address