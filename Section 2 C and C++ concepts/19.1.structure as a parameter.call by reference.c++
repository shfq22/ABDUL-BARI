// call by value mathod

#include<iostream>
using namespace std;

// Defining a structure to represent a rectangle
struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle &r){   // pass by reference so use the actual parameter instead of copy of it.
    r.breadth = 8;
    return (r.length)*(r.breadth);    // returning the area
}




int main(){

    struct Rectangle rrr;
    // or  // struct Rectangle rrr = {12,6};
    rrr.length = 12;
    rrr.breadth = 6;

    int z = area(rrr);  // Calling the 'area' function by passing the structure 'rrr' by value
    cout<<z<<endl;  // 96

    cout<<rrr.length<<endl;  // 12
    cout<<rrr.breadth<<endl;  // 8  // value of breath get modified because it is passed by reference
}