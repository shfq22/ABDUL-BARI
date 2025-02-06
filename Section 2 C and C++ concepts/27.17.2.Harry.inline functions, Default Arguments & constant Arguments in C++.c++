#include<iostream>
using namespace std;
// static int:
// Remember its value between function calls (when used inside a function), or
// Only accessible within the same file (when used outside a function).

int product(int a,int b){
    static int c = 0;  // this executes only once
    c = c+1;     // Increase c by 1 on each call.
    return a*b+c;  // Return the product of a and b plus the current value of c.
}

int main(){
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<product(x,y)<<endl;  // 21   // 1st call (c becomes 1)
    cout<<product(x,y)<<endl;  // 22   // 2nd call (c becomes 2)
    cout<<product(x,y)<<endl;  // 23   // 3rd call (c becomes 3)
    cout<<product(x,y)<<endl;  // 24   // 4th call (c becomes 4)
    cout<<product(x,y)<<endl;  // 25   // 5th call (c becomes 5)
    cout<<product(x,y)<<endl;  // 26   // 6th call (c becomes 6)

}

// we can't use INLINE with STATIC variable