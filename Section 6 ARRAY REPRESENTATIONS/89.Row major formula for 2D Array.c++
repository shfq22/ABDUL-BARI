#include<iostream>
using namespace std;

int main(){
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<A<<endl; // Base Address of A
    
}


// ROW MAJOR FORMULA:


// if A[m][n] is stored in Row Major Order then:
// if i And j are starting from 0
// Address(A[i][j]) = BaseAddress + (i * n + j) * Size of int
// where n is the number of columns in the 2D array.
// m is the number of rows in the 2D array.



// if i And j are starting from 1
// Address(A[i][j]) = BaseAddress + ((i-1) * n + (j-1)) * Size of int
// where n is the number of columns in the 2D array.