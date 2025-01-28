// pointers are adress variable that is meant for storing adress of data

#include<iostream>
using namespace std;
int main(){
    int a  = 10;    // data variable
    int *p;         // pointer variable          // whenever we declare something that definetly takes place in stack memory
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;  // 10

    int b  = 43;    // data variable
    int *p1;         // pointer variable
    p1 = &b;
    cout<<p1<<endl;
     cout<<*p1<<endl;   //43



     int d  = 50;    // data variable
    int *p11;         // pointer variable
    p11 = &d;
    cout<<p11<<endl;
    cout<<*p11<<endl;    // 50
}


