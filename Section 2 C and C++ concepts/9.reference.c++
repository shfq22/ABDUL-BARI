// Reference is the alias given to a variable

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x; // y is the reference of x
    // we've the reference y that is referring to the variable x
    // y is the alias of x
    // y is the nickname of x
    // y is the alternative name of x
    // y is the reference of x
    // so the same x has one more name that is y
    // same value 10 has two names x and y
    // adress of x and y is same

    cout << x << endl; // 10
    cout << y << endl; // 10
    y++;
    // the value 10 is incremented by 1 that is 11
    // so the value of x and y is 11 because they are the same 

    cout << x << endl; // 11
    cout << y << endl; // 11


// reference is nothing but the alias / alternative / another name of the variable  
// so the ques is why do we need another name to the same variable when you'have already the name
// so the answer is => this is useful in parameter passing



    return 0;
}


// int a ;  nothing is before the variable name it's a data variable 
// int *p ;  * is before the variable name it's a pointer variable
// int &r = a ;  & is before the variable name it's a reference variable
// and the reference must be initialized at the time of declaration







// Parameter Passing Techniques in C++
// There are 3 different methods using which we can pass parameters to a function in C++. These are:

// Pass by Value   // 9.1
// Pass by Reference  // 9.2
// Pass by Pointers   // 9.3