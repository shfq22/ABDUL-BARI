// create an object dynamically in a heap memory using pointer


#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int main(){
    struct Rectangle *p;

// malloc fn returns void pointer

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));      // storing the address of r in p
    p->length = 10;
    p->breadth = 5;

    cout<<p->length<<endl;    // 10     
    cout<<p->breadth<<endl;   // 5
}