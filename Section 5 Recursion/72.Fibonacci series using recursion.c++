// fibonacci series using recursion
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 ........

#include<iostream>
using namespace std;
int fibo(int n){
 
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
// we can write it as well for n = 0 and n = 1
    // for(n<=1){
    //     return n;
    // }


    if(n>=2){
        return fibo(n-1) + fibo(n-2);
    }
 }

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}