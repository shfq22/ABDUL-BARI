// #include <iostream>
// using namespace std;

// int product(int a,int b){
//     return a*b;
// }

// int main(){

//     int x,y;
//     cout<<"enter value of x and y:"<<endl;
//     cin>>x>>y;



//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
//     cout<<"the product of a and b = "<<product(x,y)<<endl;
// return 0;
// }

// here calling the function product(x, y) several times, and each call may incur some overhead due to:

// Function Call Overhead:

// Parameter Passing:---> Each time you call product(x, y), the values of x and y are passed to the function.
// Stack Frame Setup:---> The function call involves setting up a stack frame (even if it’s small) to handle the function's execution.
// Return Value Handling:---> After the multiplication, the result is returned back to the caller.



// Redundant Computation:

// In this code, since x and y do not change between the calls, the result of product(x, y) will be the same each time. Recomputing the same value repeatedly is unnecessary and might be considered redundant.



//  the solution is:
#include <iostream>
using namespace std;

int product(int a,int b){
    return a*b;
}

int main(){

    int x,y;
    cout<<"enter value of x and y:"<<endl;
    cin>>x>>y;


int p = product(x,y);

    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
    cout<<"the product of a and b = "<<p<<endl;
return 0;
}


// but here to solve this problem we use inline function

// solution in (27.17.1.Harry.inline functions, Default Arguments & constant Arguments in C++.c++)