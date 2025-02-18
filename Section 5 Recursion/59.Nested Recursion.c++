//      *********** NESTED RECURSION ***********


// Nested recursion occurs when a function calls itself multiple times, resulting in a series of recursive calls within the function. It's a type of recursion that can be difficult to convert to an iterative format. 
// How it works
// Recursive functions pass parameters as recursive calls 
// Each call branches into multiple smaller calls, which branch into even smaller calls 
// This process is similar to the branching of a tree 



#include <iostream>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}

int main(){
    int r;
    r = fun(95);
    cout<<r<<endl;    // 91
    return 0;
}


// fun(95):calls fun(fun(95+11)) which is fun(fun(106))
// fun(fun(106)) returns fun(96)

// fun(96):calls fun(fun(96+11)) which is fun(fun(107))
// fun(fun(107)) returns fun(97)

// fun(97):calls fun(fun(97+11)) which is fun(fun(108))
// fun(fun(108)) returns fun(98)

// fun(98):calls fun(fun(98+11)) which is fun(fun(109)
// fun(fun(109)) returns fun(99)

// fun(99):calls fun(fun(99+11)) which is fun(fun(110))
// fun(fun(110)) returns fun(100)

// fun(100):calls fun(fun(100+11)) which is fun(fun(111))
// fun(fun(111)) returns fun(101)

// now fun(101) is greater than 100 so it returns 101-10=91