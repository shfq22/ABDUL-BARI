#include <iostream>
using namespace std;

struct Rectangle
{
    int length;         // 4 bytes
    int breadth;        // 4 bytes
    char x;             // 1 byte   // 4 + 4 + 1 = 9 bytes
    // for char also 4 bytes will be allocated because of padding
    // using only 1 byte 

    // our achines can access 4 bytes at a time but it will be using only 1 byte out of 4
    // this adjustment in memory is called padding
};

int main(){
    struct Rectangle r = {10, 5};
    cout<< sizeof(r)<<endl;          // 12 bytes 
    cout<< r.length<<endl;           // 10    // dot (.) operator is used to access the members of the structure
    cout<< r.breadth<<endl;          // 5
    cout<<sizeof(r.length)<<endl;    // 4 bytes
    cout<<sizeof(r.breadth)<<endl;   // 4 bytes
    cout<<sizeof(r.x)<<endl;         // 1 byte
}