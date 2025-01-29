#include<iostream>
using namespace std;


// array are always passed by adress by default
void fun(int A[]){  
    cout<<sizeof(A)<<endl;  //4   //size of pointer
    // because array are always passed by adress so it will give size of pointer 

    cout<<sizeof(int)<<endl;  //4       
    cout<<sizeof(A)/sizeof(int)<<endl;   //1
    //warning: 'sizeof' on array function parameter 'A' will return size of 'int*'

    // for(int i: A){
    //     cout<<i<<" ";    // error 
    //     // we can't use for each loop because the parameter is a pointer
    // }

    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";  //1 2 3 4 5
    }

}

int main(){
    int A[5] = {1,2,3,4,5};
    fun(A);
}