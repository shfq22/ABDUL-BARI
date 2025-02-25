// Declaration and initialization of an Array



#include <iostream>
using namespace std;

int main(){
    int A[5]; // Declaration of an Array
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";   // garbage value because we have not initialized the array A
    }
        // output: 
        // garbage value 

cout<<endl;




    int B[5]={2,4,6,8,10}; // Declaration and Initialization of an Array

    for(int i=0;i<5;i++){
        cout<<B[i]<<" "; // Accessing Elements of an Array
    }
cout<<endl;
    for(int i=0;i<5;i++){
        cout<<&B[i]<<" "; // Accessing Elements of an Array
    }
        // output:
        // 2 4 6 8 10
        // 0x61fec8 0x61fecc 0x61fed0 0x61fed4 0x61fed8


cout<<endl;



    int C[5]={2,4}; // Declaration and Initialization of an Array
    for(int i=0;i<5;i++){
        cout<<C[i]<<" "; // Accessing Elements of an Array
    }
        // output:
        // 2 4 0 0 0
        // ones we initialize the array with some values then the remaining values are initialized with 0
cout<<endl;       
    



    int D[5]={}; // Declaration and Initialization of an Array
    for(int i=0;i<5;i++){
        cout<<D[i]<<" "; // Accessing Elements of an Array
    }
        // output:
        // 0 0 0 0 0
        // if we initialize the array with empty curly braces then all the values are initialized with 0

cout<<endl;


    int E[5]={0}; // Declaration and Initialization of an Array
    for(int i=0;i<5;i++){
        cout<<E[i]<<" "; // Accessing Elements of an Array
    }
        // output:
        // 0 0 0 0 0
        // if we initialize the array with 0 then all the values are initialized with 0

cout<<endl;





    int F[]={1,2,3,4,5,6,7,8}; // Declaration and Initialization of an Array   

    // size of an array
    int s=sizeof(F)/sizeof(F[0]);

    for(int i=0;i<s;i++){
        cout<<F[i]<<" "; // Accessing Elements of an Array
    }
cout<<endl;
    cout<<"size of Array F = "<<s; // size of the array
   
        // output:
        // 1 2 3 4 5 6 7 8 
        // size of Array = 8





cout<<endl;
    int G[5];
    G[2]=1;
    cout<<G[0]; // Accessing Elements of an Array
cout<<endl;
    cout<<G[2]; // Accessing Elements of an Array
        
cout<<endl;
    cout<<2[G]; // Accessing Elements of an Array


cout<<endl;
    cout<<*(G+2); // Accessing Elements of an Array


cout<<endl;
    cout<<*(2+G); // Accessing Elements of an Array


        // output:
        // garbage value
        // 1
        // 1
        // 1
        // 1
        // 2[G] is equivalent to G[2] in C++
        // 2[G] is equivalent to *(G+2) in C++
        // 2[G] is equivalent to *(2+G) in C++
        // 2[G]  , G[2] , *(G+2) , *(2+G) are equivalent in C++
}


