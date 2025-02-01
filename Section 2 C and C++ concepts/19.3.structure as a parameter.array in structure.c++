#include<iostream>
using namespace std;

struct Test{
    int A[5];  // Declaring an array of size 5 inside the structure
    int n;

};

void fun(struct Test t1){  // Passing a structure by value creates a copy, so changes do not affect the original structure.
    t1.A[0] = 4;
    t1.A[1] = 8; 
// array inside the structure can be passed by value too
    cout<<t1.A[0]<<endl;    // 4   
    cout<<t1.A[1]<<endl;    // 8
    // when modify t1.A[0] and t1.A[1] in fun(), you're modifying a separate copy, and the changes do not reflect in ttt inside main().
}

int main(){
    struct Test ttt = {{1,2,3,4,5},5};  // Declaring and initializing the structure with an array and an integer value
    
    // or

    // ttt.A[0] = 1;
    // ttt.A[1] = 2;
    // ttt.A[2] = 3;
    // ttt.A[3] = 4;
    // ttt.A[4] = 5;
    // ttt.n = 5;

    fun(ttt);

    cout<<ttt.A[0]<<endl;    // 1  // (Unchanged because fun() worked on a copy)
    cout<<ttt.A[1]<<endl;    // 2  // (Unchanged because fun() worked on a copy)
}