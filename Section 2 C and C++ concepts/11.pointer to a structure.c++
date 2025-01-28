// pointer to a structure

#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int main(){
    struct Rectangle r = {10, 5};

    cout<<r.length<<endl;    // 10
    cout<<r.breadth<<endl;   // 5

    struct Rectangle *p;
    p = &r;      // storing the address of r in p
    cout<<sizeof(p)<<endl;       // 4 bytes as it is a pointer


    cout<<p->length<<endl;    // 10     
    cout<<p->breadth<<endl;   // 5
// OR
    cout<<(*p).length<<endl;    // 10
    cout<<(*p).breadth<<endl;   // 5

// *p.length  =>   it is wrong because (.) operator has higher precedence than (*) operator

    // p->length is equivalent to (*p).length
    // p->breadth is equivalent to (*p).breadth
    // p is a pointer so (.) operator cannot be used, hence (->) operator is used
}