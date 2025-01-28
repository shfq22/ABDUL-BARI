#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};


int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    

    cout<<sizeof(p1)<<endl;  // 4 bytes
    cout<<sizeof(p2)<<endl;  // 4 bytes
    cout<<sizeof(p3)<<endl;  // 4 bytes
    cout<<sizeof(p4)<<endl;  // 4 bytes
    cout<<sizeof(p5)<<endl;  // 4 bytes

    // whatever the data type of a pointer, it takes 4 bytes of memory
    // every pointer takes same amount of memory in stack memory
    // size of a pointer is independent of the data type of the pointer

    return 0;

}