// What is Recursion
// Example of Recursion
// Tracing Recursion
// Stack used in Recursion 
// Time complexity
// Recurrence Relation


// What is Recursion?
// Recursion is a programming technique where a function calls itself to solve problems by breaking them into smaller subproblems
// Recursion breaks a task into smaller parts until a base case is met. 
// A recursive function has a base case and a recursive condition. 
// A base condition in recursion is a condition that tells a recursive function when to stop calling itself and return a result. It's also known as a base case. 
// A recursive call is when a function calls itself. 
// Recursive solutions work as a a basis for Dynamic Programming and Divide and Conquer algorithms.

// Example:  
// Factorial calculation
// Fibonacci sequence
// Binary Search
// Merge sort and quick sort
// Tree traversals
// Tower of Hanoi


#include <iostream>
using namespace std;

void fun(int n) {
    if (n > 0) {
        cout << n << "  ";  // Print before recursion for descending order
        fun(n - 1);
    }
}

void f(int n) {  // Changed return type to void
    if (n > 0) {
        f(n - 1);  // Recursive call first for ascending order
        cout << n << "  ";  // Print after recursion
    }
}

int main() {
    int n;
    cin >> n;

    fun(n);  // Prints numbers from n to 1
    cout << endl;
    
    f(n);  // Prints numbers from 1 to n (no return value, so no "0" at the end)
}


// Recursion has two phases =>
// one is calling phase and second one is returning phase