#include<iostream>
using namespace std;


// Array is passed only by address 
// Arrays cannot passed by value at  all

void fun( int A[], int n){
    int sum = 0;
    
    for(int i=0; i<n; i++){
       sum = sum + A[i];
    }
    cout<<sum<<endl;
}


int main(){
    int m;
    cin>>m;
    int A[m];
    for(int i=0; i<m; i++){
        cin>>A[i];
    }
    fun(A,m);

    
}