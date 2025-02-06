#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int fact(int n){
    if(n==1 ){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}


int main(){
    int n;
    cin>>n;

    cout<<"fibonacci = "<<fibo(n)<<endl;

    cout<<"factorial = "<<fact(n)<<endl;
}