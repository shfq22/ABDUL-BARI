#include<iostream>
using namespace std;


// we know that arrays are passed by reference by default
int * returnArray(int n){
    int *arr;  // pointer declaration
    arr = new (int[n]);  // in C++
    // or   
    // arr = (int *)(malloc(n * sizeof(int)));   // in C


    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    return arr;
} 

int main(){
    int size = 5;
    int *z;
    z = returnArray(size);
    for(int i=0; i<size; i++){
        cout<<z[i]<<" ";   // 1 2 3 4 5
    }   

}