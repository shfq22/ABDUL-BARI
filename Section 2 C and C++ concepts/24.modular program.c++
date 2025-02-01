#include<iostream>
using  namespace std;



int area(int length ,int breadth){
    return (length*breadth);
}
int main(){

    cout<<area(3,4)<<endl;   // 12
    cout<<area(5,6)<<endl;   // 30 
    cout<<area(8,2)<<endl;   // 16
    cout<<area(10,6)<<endl;  // 60

}