#include <iostream>
using namespace std;
int main() {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ 
            // some constant time operation here
        }
    }
    return 0;
}


// Outer Loop Analysis =>
// The outer loop runs with i ranging from 0 to n - 1.
// This means the outer loop executes n times.



// Inner Loop Analysis =>
// For each iteration of the outer loop, the inner loop runs with j ranging from 0 to n - 1.
// This means that for every single iteration of the outer loop, the inner loop also executes n times.


// Total Number of Iterations
// Since the inner loop executes n times for each of the n iterations of the outer loop, the total number of iterations is:
// n×n=n²

// Time Complexity : O(n²).
