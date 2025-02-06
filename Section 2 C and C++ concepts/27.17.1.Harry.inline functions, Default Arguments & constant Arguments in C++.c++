#include <iostream>
using namespace std;

// Normal Function Call:==> In a regular function call, the program must handle tasks like pushing parameters onto the stack, jumping to the function code, and then returning. This creates a small overhead.
// Inline Function:==> When a function is inlined, the compiler replaces the function call with the actual code from the function. This avoids the overhead associated with the call.

inline int product(int a,int b){  
// inline fns are Suitable for Small, Frequently-Used Functions
    return a*b;
}

// What Happens:
// For each call to product(x, y), the compiler may replace the call with the multiplication expression x * y directly in the code.

// Result:
// This reduces the function call overhead each time the product is computed.


int main(){

    int x,y;
    cout<<"enter value of x and y:"<<endl;
    cin>>x>>y;




    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
    cout<<"the product of a and b = "<<product(x,y)<<endl;
return 0;
}


// When inline functions are used, especially with complex functions or when they are inlined in many places, they can have an impact on cache memory—particularly the instruction cache.
// cache memory size increased
// This duplication increases the overall size of the compiled code.
// This duplication increases the overall size of the compiled code.
// The CPU cache (especially the instruction cache) is a fixed-size resource meant to store a limited amount of code for fast access. 