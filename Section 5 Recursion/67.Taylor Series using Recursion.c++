// Taylor series using recursion

// taylor series of e to the power x is 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!



#include<iostream>
using namespace std;

double pow(int x,int n){
    if(n==0){
        return 1;

    }
    if(n%2==0){
        return pow(x*x,n/2);
    }
    else{
        return pow(x*x,n/2)*x;
    }
}

double fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int x,n;
    cin>>x>>n;
    double sum = 0;
    for(int i=0;i<n;i++){
        sum += pow(x,i)/fact(i);
        
    }
    cout<<sum<<endl;
}