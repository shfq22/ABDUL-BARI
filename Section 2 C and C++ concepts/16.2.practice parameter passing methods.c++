#include<iostream>
using namespace std;


int add(int *a, int *b){

    int c;

    *a = *a + 1;   // or // *a++;
    *b = *b + 1;   // or // *b++;
    cout<<*a<<endl;   // 11
    cout<<*b<<endl;   // 21
    c = *a + *b;
    cout<<c<<endl;   // 32
    return c;
}

int main(){
    int x=10,y=20;

    int z = add(&x,&y);
    cout<<z<<endl;   // 32

    cout<<x<<endl;   // 11  // actual parameter is modified
    cout<<y<<endl;   // 21
}