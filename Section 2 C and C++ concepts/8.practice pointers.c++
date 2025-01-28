#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

// (int *p)  =>    int *p; means p is a pointer to an integer. It will store the address of an integer variable.  
// p is the pointer itself (holding an address).
// *p refers to the value at the address stored in p.


// (*) star or asterisk is only at the time of declaration and the rest of the time it is used to dereference the pointer
//Dereferencing refers to the operation of accessing the value stored at the memory address held by a pointer. In simpler terms, when you dereference a pointer using the * operator, you are retrieving or modifying the value at the location the pointer points to.
    int a = 10;
    int *p;         // this statement is a declaration of a pointer // *p is used to declare a pointer variable
    p = &a;         // p is a pointer variable that stores the address of a
    cout<< p <<endl;    // This will give the address of a
    cout<< &a <<endl;   // This will give the address of a
    cout<< *p <<endl;  // dereferencing    // This will give the value of a  // 10
}