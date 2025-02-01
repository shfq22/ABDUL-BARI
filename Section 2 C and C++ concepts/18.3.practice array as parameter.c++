#include<iostream>
using namespace std;

void fun(int *A, int n){
    A[0] = 15;
}

int main(){
    int A[] = {1,2,3,4,5};
    int n= 5;
    fun(A,n);

    for(int x:A){
        cout<<x<<" ";  // 15 2 3 4 5
    }
}