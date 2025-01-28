#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    // Allocate memory for an array of 5 integers in the heap
   int *p = new int[5];    // This will allocate 20 bytes of memory in heap
   // here p is a pointer to an integer
    p[0] = 10;    
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;   

    cout << p << endl;          // This prints the address of the first element of the array
    cout << *p << endl;         // 10   // This prints the first element (10) of the array
    cout << p[0] << endl;       // 10   
    cout << p[1] << endl;       // 20
    cout << p[2] << endl;       // 30
    cout << p[3] << endl;       // 40
    cout << p[4] << endl;       // 50
    cout<<sizeof(p)<<endl;      // 4 bytes                 
}