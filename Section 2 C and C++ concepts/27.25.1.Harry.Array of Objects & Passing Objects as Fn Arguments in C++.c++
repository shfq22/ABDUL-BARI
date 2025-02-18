#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
 
    public:    // if not public then these  c1.setData(2,3);   c2.setData(4,5);   c3.setData(6,7);  are not accessible
    void setData(int v1,int v2){
        a = v1;
        b = v2;

        cout<<a<<" "<<b<<endl;
        
    }

    void setDataBySum(complex o1,complex o2){
        a = o1.a + o2.a;    // 6
        b = o1.b + o2.b;    // 8 

        cout<<a<<" "<<b<<endl;

    }

    void printNumber(){
        cout<<"your complex number is : "<<"("<<a<<"+"<<b<<"i"<<")"<<endl;
    }
};
int main(){
    complex c1,c2,c3;

    c1.setData(2,3);   // for o1
    c1.printNumber();

    cout<<endl;

    c2.setData(4,5);   // for o2
    c2.printNumber();

    cout<<endl;

    c3.setDataBySum(c1,c2);
    c3.printNumber();

return 0;
}