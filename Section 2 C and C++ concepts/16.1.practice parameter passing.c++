#include<iostream>
using namespace std;

int add(int a,int b){

    int c;

    a++;
    b++;
    c = a+b;
    return c;
}

int main(){
    int x=10,y=20;

    int z = add(x,y);
    cout<<z<<endl;   // 32

    cout<<x<<endl;   // 10  // actual parameter is not modified
    cout<<y<<endl;   // 20
    return 0;
}