#include<iostream>
using namespace std;

int f(int n){
    static int x = 0;
    if(n>0){
        x++;
        return f(n-1) + x;   
    }
    return 0;
}

int main(){
    int a = 5;
    cout<<f(a);    // 25
}




// Call Stack (Top → Bottom)	  Function Call	       x Value
// Top	                       f(5) → Calls f(4)	    x = 1
//                             f(4) → Calls f(3)	    x = 2
//                             f(3) → Calls f(2)	    x = 3
//                             f(2) → Calls f(1)	    x = 4
//                             f(1) → Calls f(0)	    x = 5
// Base	                       f(0) → Returns 0	        x = 5


// Returning Phase (Stack Unwinding)
// After reaching n = 0, we start returning values:

// f(1) = f(0) + x = 0 + 5 = 5
// f(2) = f(1) + x = 5 + 5 = 10
// f(3) = f(2) + x = 10 + 5 = 15
// f(4) = f(3) + x = 15 + 5 = 20
// f(5) = f(4) + x = 20 + 5 = 25
// Final Output: 25