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
    //     // it works upon an array which is declared within the same function because for each loop work is depending upon the size of the Array 
    // }

    for(int i=0; i<5; i++){   // but how the fun know the size of array?
        cout<<A[i]<<" ";  //1 2 3 4 5
    }

}

int main(){
    int A[5] = {1,2,3,4,5};
    fun(A);
}



// so the ques is?

// how does this function know the size of the array?  
// 18.2.practice array as parameter.c++  // this is the answer of this ques