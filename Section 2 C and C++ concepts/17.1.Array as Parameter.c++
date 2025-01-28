#include<iostream>
using namespace std;


// Array is passed only by address 
// Arrays cannot passed by value at  all


// int fun(int *A, int n){   // using asterisk means it is a pointer to an array as well as to any integer
int fun(int A[], int n){   // giving the bracket [] means it is a pointer to an array
// the variable n is passed by value
    int sum = 0;
    A[0] = 5;     // actual parameter is modified
    for(int i=0; i<n; i++){
        sum = sum + A[i];
        
    }
    return sum;     // 10
}
int main(){
    
    int A[3] = {1,2,3};

    int z = fun(A,3);
    cout<<z<<endl;   // 10

    cout<<A[0]<<endl;   // 5
    cout<<A[1]<<endl;   // 2
    cout<<A[2]<<endl;   // 3
    // here the actual parameter is modified
}