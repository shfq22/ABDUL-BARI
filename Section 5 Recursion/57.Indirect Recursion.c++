//      *********** INDIRECT RECURSION ***********


// Indirect recursion is a programming technique where a function calls another function, which then calls the original function again. This creates a chain of function calls that forms a loop. 

// How does it work? 
// Function A calls function B
// Function B calls function A
// This creates a recursive loop


#include<iostream>
using namespace std;

// Function prototypes
void funA(int n);
void funB(int n);

void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}

int main(){
    funA(20);    // 20 19 9 8 4 3 1
    return 0;
}




// Execution Flow:
// funA(20):

// Prints 20
// Calls funB(19)
// funB(19):

// Prints 19
// Calls funA(19/2) → funA(9)
// funA(9):

// Prints 9
// Calls funB(8)
// funB(8):

// Prints 8
// Calls funA(8/2) → funA(4)
// funA(4):

// Prints 4
// Calls funB(3)
// funB(3):

// Prints 3
// Calls funA(3/2) → funA(1)
// funA(1):

// Prints 1
// Calls funB(0), but since n <= 1, it stops.