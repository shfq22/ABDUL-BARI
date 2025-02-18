// global variables in Recursion

#include<iostream>
using namespace std;

int x = 0;
int f(int n){
   
    if(n>0){
        x++;
        return f(n-1) + x;      
    }
    return 0;
}

int main(){
    int a = 5;
    cout<<f(a);     // 25
}
