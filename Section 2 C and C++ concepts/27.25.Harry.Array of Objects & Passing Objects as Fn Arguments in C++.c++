#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;   // by default these members are private

    public:
    void setId(void){
        
        cout<<"enter id of Employee:";
        cin>>id;

        cout<<"enter salary of Employee:";
        cin>>salary;
    }

    void getId(void){
        cout<<"the id of the Employee is = "<<id<<endl;
        cout<<"employee salary = "<<salary<<endl;
    }
};
int main(){
    // Employee shfq,sadaf,kashif;
    // shfq.setId();
    // shfq.getId();

    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
}