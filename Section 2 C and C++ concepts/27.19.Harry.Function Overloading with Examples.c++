#include<iostream>
using namespace std;

// Polymorphism in C++ allows functions or methods to have different behaviors depending on the context in which they are used. 


int add(int a,int b){
    cout<<"using fn with two arguments: "<<endl;
    return a+b;
}
int add(int a,int b,int c){
     cout<<"using fn with three arguments: "<<endl;
    return a+b+c;
    
}

int main(){
    cout<<"the sum of 3 and 6 is = "<<add(3,6)<<endl;         // 9
    cout<<endl;
    cout<<"the sum of 3 ,7 and 6 is = "<<add(3,7,6)<<endl;    // 16
}

// Overloading allows you to define multiple functions or operators with the same name but different parameter lists or types. 
// overloading means ==> kisi bhi ek chiz ko multiple kamo k liye use karna