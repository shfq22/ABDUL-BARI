// Static variables in Recursion

#include<iostream>
using namespace std;

int f(int n){
    if(n>0){
        return f(n-1) + n;    
    }
    return 0;
}

int main(){
    int a = 5;
    cout<<f(a);    // 15
}




// before moving to the next recursive call.

// Stack Frame	Function Call	Waiting for Return
// Top	           f(5)	            f(4) + 5               // result 10+5  = 15
//                 f(4)	            f(3) + 4               // result 6+4   = 10
//                 f(3)	            f(2) + 3               // result 3+3   = 6
//                 f(2)	            f(1) + 2               // result 1+2   = 3
//                 f(1)	            f(0) + 1               // result 0+1   = 1
// Base	           f(0)	            0 (Returns)



// Stack Unwinding (Returning Values)
// Now, the function starts returning back from the stack:

// f(0) = 0
// f(1) = 0 + 1 = 1
// f(2) = 1 + 2 = 3
// f(3) = 3 + 3 = 6
// f(4) = 6 + 4 = 10
// f(5) = 10 + 5 = 15 → Final output