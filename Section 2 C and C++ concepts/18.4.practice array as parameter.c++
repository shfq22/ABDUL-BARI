#include<iostream>
using namespace std;


// Function to dynamically allocate an array of size 'n' and initialize it
int * fun(int n){
    int *p;     // Declaring a pointer 'p' of type int
    p = new int[n];    // Dynamically allocating memory for an array of size 'n'


    for(int i=0;i<n;i++){
        p[i] = i+1;   // Assigning values to the array elements (1, 2, 3, ..., n)  
    }
    return p;   // Returning the pointer to the dynamically allocated array

}

int main(){
    int *ptr;  // Declaring a pointer 'ptr' to store the address of the array
    int sz = 5;
    ptr = fun(sz);  // Calling the function 'fun' and storing the returned pointer in 'ptr'
    // Returned pointer means the function gives you the memory address of the dynamically created object (array in this case), so you can access and work with it outside the function where it was created.


cout<<*ptr<<endl;   //1   // Dereferencing 'ptr' to access the first element of the array (1)
cout<<ptr<<endl;   // 0xfc7fb8
cout<<ptr[0]<<endl; //1  // ptr[0] accesses the first element of the array
// ptr is the memory address (not the value).
// ptr[0] is the first value in the dynamically allocated array, which is 1

    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<" ";    // 1 2 3 4 5
    }
}