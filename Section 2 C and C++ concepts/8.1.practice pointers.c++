#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

    int A[5] = {2,4,6,8,10};  // A[5] is declared in stack memory
    int *p ;
    p = A; // p = &A[0]  // p is a pointer variable that stores the address of A[0]
    // p = &A  // syntax error  // because A is a whole array but p stores only the address of the first element of the array

    for(int i = 0; i<5; i++){
        cout<<A[i];  // This will give the elements of the array
        // 2 4 6 8 10
    }


    for(int i = 0; i<5; i++){
        cout<<&A[i]<<endl;  // This will give the address of the elements of the array

    }

    for(int i = 0; i<5; i++){
        cout<<p[i];  // This will give the elements of the array
        // 2 4 6 8 10
    }

}