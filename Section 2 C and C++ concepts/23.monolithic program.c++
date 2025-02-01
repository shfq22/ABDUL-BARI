#include<iostream>
using namespace std;

int main(){
    int l = 0,b = 0;
    cout<<"enter the length and breadth:"<<endl;
    cin>>l>>b;

    int area = l*b;
    int peri = 2*(l+b);

    cout<<"area = "<<area<<endl;
    cout<<"perimeter = "<<peri<<endl;
}