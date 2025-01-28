#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

// in C++ new operator is used to allocate memory in heap but it only shows 4 bytes of memory because it is a pointer variable and pointer variable always takes 4 bytes of memory
    int *p = new int[5];    // This will allocate 20 bytes of memory in heap
    *p = 10;                // This will store 10 in the memory allocated to p
    cout << *p << endl;       // This will give 10
    delete p;                 // This will delete the memory allocated to p
    cout << *p << endl;       // This will give garbage value
    cout<<sizeof(p)<<endl;    // This will give 4 bytes
    


// in C language we use malloc() function to allocate memory in heap
    int *q;
    q = (int *)malloc(5 * sizeof(int));      // (int *) is used to typecast the memory allocated to q because it is a void pointer
    cout << *q << endl;      // This will give garbage value 

    q[0] = 10;
    q[1] = 20;
    q[2] = 30;
    q[3] = 40;
    q[4] = 50;
    cout << q << endl;       // This will give the address of the first element of the array / one edge of the arrayf
    // pointer is holding the address of the first element of the array
    cout << q[0] << endl;    // 10
    cout << q[1] << endl;    // 20
    cout << q[2] << endl;    // 30
    cout << q[3] << endl;    // 40
    cout << q[4] << endl;    // 50
    cout<<sizeof(q)<<endl;   // 4 bytes
    free(q);                 // This will delete the memory allocated to q
    cout << q[0] << endl;    // garbage value
    cout << q[1] << endl;    // garbage value
    cout << q[2] << endl;    // garbage value
    cout << q[3] << endl;    // garbage value
    cout << q[4] << endl;    // garbage value


}