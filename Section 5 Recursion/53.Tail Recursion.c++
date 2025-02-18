// Types of Recursion 

// Tail Recursion
// Head Recursion
// Tree Recursion
// Indirect Recursion
// Nested Recursion




// Tail Recursion =>
// Tail recursion is a special type of recursion where a function makes a recursive call as its last action
// the recursive call is the last statement of the fn, after that call there is nothing and it is not performing anything

#include<iostream>
using namespace std;



void fun(int n) {
    if (n > 0) {
        cout << n << "  ";  
        fun(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    fun(n);  // Prints numbers from n to 1
    cout << endl;
    
}


//      *********** TAIL RECURSION ***********

// void fun(int n) {
//     if (n > 0) {
//         --------
//         --------         // all these operation will be performed at calling time only and the fn will not perform any operation at returning time
//         --------        
//         fun(n - 1);
//     }
// }







//      *********** NOT A TAIL RECURSION ***********

// void fun(int n) {
//     if (n > 0) {
//         --------
//         --------         // all these operation will be performed at calling time only and the fn will not perform any operation at returning time
//         --------        
//         fun(n - 1) + n;  // here     this operation is performed only at returning time
// so in this fn there is something remaining that has to be performed at returning time, so it CANNOT be a TAIL RECURSION
//     }
// }