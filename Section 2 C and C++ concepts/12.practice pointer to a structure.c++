#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int main(){

    // in C++ if we don't use struct keyword then it is okay
     Rectangle r = {10, 5};
    // but in C we have to use struct keyword
    
    cout<<r.length<<endl;    // 10
    cout<<r.breadth<<endl;   // 5
    cout<<sizeof(r)<<endl;       // 8 bytes as it is a structure



    Rectangle *p;  // declaring a pointer to a structure
    // * is used only at the time of declaration and dereferencing
    p = &r;   // storing the address of r in p

    // in heap memory we use malloc() function to allocate memory
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));      // storing the address of r in p
    // malloc fn returns void pointer so we have to typecast it to (struct Rectangle *)


    p->length = 45;
    p->breadth = 20;


    cout<<p->length<<endl;    // 45
    cout<<p->breadth<<endl;   // 20
    cout<<sizeof(p)<<endl;    // 4 bytes as it is a pointer

}