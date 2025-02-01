#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

struct Rectangle *fun(){   // This function returns a pointer (struct Rectangle *) to a Rectangle structure.
    struct Rectangle *p;   // p is a pointer to a Rectangle structure.
    p = new Rectangle;   // in c++
    // This allocates memory for a Rectangle structure in the heap.
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));   // in c
    
    p->length = 15;   // p->length is equivalent to (*p).length
    p->breadth = 7;   // p->breadth is equivalent to (*p).breadth

    return p; // // Returning the pointer to the dynamically allocated structure
}



int main(){
    struct Rectangle *PTR = fun();  // Calling the function, storing the returned pointer

  cout<<PTR->length<<endl;  // 15
  cout<<PTR->breadth<<endl; // 7
    
    
}