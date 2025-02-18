#include<iostream>
using namespace std;

// STRUCTURE ==>
// there is no data hiding in structures, we can directly access the members of structure 
// structure is public(data usually public)




// CLASS ==>
// private

class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);   // Declaration 
        void getData(){
            cout<<"the value of a is = "<<a<<endl;   // 1
            cout<<"the value of b is = "<<b<<endl;   // 2
            cout<<"the value of c is = "<<c<<endl;   // 4
            cout<<"the value of d is = "<<d<<endl;   // 34
            cout<<"the value of e is = "<<e<<endl;   // 22
        }

};

void Employee :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee shfq;

    // shfq.a = 44;    // this will throw an error as a is a private member

    shfq.d = 34;
    shfq.e = 22;
    shfq.setData(1,2,4);
    shfq.getData();
}