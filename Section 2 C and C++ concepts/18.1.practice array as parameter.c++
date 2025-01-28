#include<iostream>
using namespace std;

void fun(int A[]){
    cout<<sizeof(A)/sizeof(int)<<endl;
}

int main(){
    int A[5] = {1,2,3,4,5};
    fun(A);
}