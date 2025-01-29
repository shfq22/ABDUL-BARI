#include<iostream>
using namespace std;

void fun(int A[] , int n){

    for(int i=0;i<n;i++){
        cout<<A[i]<<" "<<endl;   // 1 2 3 4 5
    }
}


int main(){
    int size = 5;
    int A[size] = {1,2,3,4,5};

    fun(A,size);
}