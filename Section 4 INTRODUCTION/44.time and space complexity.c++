#include<iostream>
using namespace std;

// Time complexity => Time complexity is a measure of how long it takes to run an algorithm, based on the size of the input data

#include <iostream>
using namespace std;
int main() {
    int n;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            // some constant time operation here
        }
    }
    return 0;
}

// Outer Loop Analysis =>
// The outer loop runs from i = 0 to i = n - 1, so it executes n times.


// Inner Loop Analysis
// For each iteration of the outer loop (with a given i), the inner loop starts from j = i + 1 and goes up to j = n - 1.
// Therefore, the number of iterations of the inner loop for a fixed i is:
// iterations=n−(i+1)=n−i−1

// Total iterations= 
//                    n-1
//  Total iterations = ∑ (n−i−1)
//                    i=0

// so the sum becomes = (n−1)+(n−2)+⋯+2+1+0  =>   n(n−1)/2
// Hence,the overall time complexity is O(n²).