#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int *p;           // it is declared in stack memory

// in C++ (new) operator is used to allocate memory in heap
    p = new int[5];   // it will allocate memory in heap

// OR

// in C language we use malloc() function to allocate memory in heap
    // p = (int *)malloc(5 * sizeof(int));  // it will allocate memory in heap


    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for(int i = 0; i<5; i++){
        cout<<p[i];  // This will give the elements of the array
        // 10 20 30 40 50
    }

cout<<endl;

    for(int i = 0; i<5; i++){
        cout<<&p[i]<<endl;  // This will give the address of the elements of the array
        // adress of the elements of the array
    }

// in C++ delete operator is used to delete the memory allocated to p
    delete [ ] p;  // it will delete the memory allocated to p
    // because of array we use [] in delete
    // but if there is only one variable then we don't use []

// OR

// in C language we use free() function to delete the memory allocated to p
    // free(p);  // it will delete the memory allocated to p



    for(int i = 0; i<5; i++){
        cout<<p[i];  // This will give the elements of the array
        // garbage value
    }

    cout<<endl;

    for(int i = 0; i<5; i++){
        cout<<&p[i]<<endl;  // This will give the address of the elements of the array
        // it gives the adress as we've deleted the values of the array not the address
    }

    cout<<sizeof(p)<<endl;  // 4 bytes
    // because pointer takes 4 bytes of memory in stack memory

    return 0;
}   
