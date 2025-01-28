#include <iostream>
using namespace std;

int add(int a,int b){
    a++;
    cout<<a<<endl;   // 11   
    // copy of actual parameter modified not the actual parameter
}

int main(){
    int a=10,b=20;
    add(a,b);
    cout<<a<<endl;   // 10 
    // the value of a does not chamge because we've passed the copy of actual parameter to the function not the actual parameter
    return 0;
}


// call by value is used when we want a function to process something and return the result to the calling function 