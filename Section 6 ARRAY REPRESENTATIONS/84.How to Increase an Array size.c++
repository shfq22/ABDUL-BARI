// we cannot increase the size of an array in C++.
// but if you want to increase the size of an array then it is possible in another way.

// it is possible only in Heap memory.(means in Dynamic Array)
// because the size of the dynamic array is not fixed.

// stack Array can't be resized at all.

// So, the question is How to Increase an Array size?
// we can increase the size of an array by creating a new array of a larger size and copying the elements of the old array into the new array and then deleting the old array and pointing the old array to the new array and making the old array NULL to avoid the dangling pointer.


// Example of Increasing the size of an Array:
#include<iostream>
using namespace std;

int main(){
    int *p;
    p=new int[5]; // Dynamic Array
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;

    int *q;
    q=new int[10]; // create a new array of larger size
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    cout<<endl;
    delete []p; // delete the dynamic array
    p=q;        // point p to the new array
    q=NULL;     // make q NULL to avoid dangling pointer
// q is not pointing anywhere now.


        

    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
    }
   
    
}

// output:
// 1 2 3 4 5
// 1 2 3 4 5 0 0 0 0 0