#include <iostream>
using namespace std;


void updateValue(int &x) {   // &x is a reference variable
// it directly refers to the actual variable used in the function call.
// The function updateValue is defined with a reference parameter int &x.
    x = x + 10;
}

int main() {
    int a = 5;
    updateValue(a); // Modifies the value of 'a'
    cout << "Updated value of a: " << a << endl; // Prints 15
    return 0;
}


// if don't use reference variable, the value of a will not be updated
// it will print 5

// #include <iostream>
// using namespace std;

// void updateValue(int x) {   // x is a formal parameter
//     x = x + 10;
// }

// int main() {
//     int a = 5;
//     updateValue(a); //  DOESN'T Modifies the value of 'a'
//     cout << "Updated value of a: " << a << endl; // Prints 5
