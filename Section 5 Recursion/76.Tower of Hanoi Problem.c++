// Tower of Hanoi Problem 


// The Tower of Hanoi is a classic mathematical puzzle that involves moving a set of disks from one peg to another using a third peg, following these rules:

// 1. Only one disk can be moved at a time.
// 2. A disk can only be placed on top of a larger disk (or an empty peg).
// 3. The goal is to move all the disks from the first peg to the third peg using the second peg as an auxiliary.




// TOH(1,A,B,C) => move 1 disk from A to C using B

// TOH(2,A,B,C) =>   
// 1. TOH(1,A,C,B) => move 1 disk from A to B using C
// 2. move 1 disk from A to C using B
// 3. TOH(1,B,A,C) => move 1 disk from B to C using A

// TOH(3,A,B,C) =>
// 1. TOH(2,A,C,B)
// 2. move 1 disk from A to C using B
// 3. TOH(2,B,A,C)


// for n number of disks
// TOH(n,A,B,C) =>
// 1. TOH(n-1,A,C,B)
// 2. move 1 disk from A to C using B
// 3. TOH(n-1,B,A,C)

#include<iostream>
using namespace std;

void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"move disk from "<<A<<" to "<<C<<"("<<A<<"=>"<<C<<")"<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(){
    int n,A,B,C;
    cin>>n>>A>>B>>C;
    TOH(n,A,B,C);
}



// Time Complexity: O(2^n)
// Space Complexity: O(n)



// for n = 3;
// moves: 
// (1 =>3)
// (1 =>2)
// (3 =>2)
// (1 =>3)
// (2 =>1)
// (2 =>3)
// (1 =>3)


// (3,1,2,3) calls TOH(2,1,3,2)    and move(1=>3)   and  TOH(2,2,1,3)
// (2,1,3,2) calls TOH(1,1,2,3)    and move(1=>2)   and  TOH(1,3,1,2)
// (1,1,2,3) calls TOH(0,1,3,2)    and move(1=>3)   and  TOH(0,2,1,3)
// (1,3,1,2) calls TOH(0,3,2,1)    and move(3=>2)   and  TOH(0,1,3,2)


// (2,1,3,2) calls TOH(1,1,2,3)
// (1,1,2,3) calls TOH(0,1,3,2)
// (1,3,2,1) calls TOH(0,3,1,2)

// (2,1,3,2) calls TOH(1,1,3,2)