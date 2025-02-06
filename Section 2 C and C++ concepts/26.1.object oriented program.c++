#include<iostream>
using  namespace std;

// struct Rectangle{   // b/c of struct all the members are public
// if we write class here all the members are private so, we have to make it public
// writing a class means c++ style programming
class Rectangle{
    
public:
    int length;   
    int breadth;

void initialize(int l,int b){
    length = l;
    breadth = b;
}
int area(){
    return length*breadth;  // inside the structure they are directly accessing length and breadth
}

int perimeter(){
    int p;
    p = 2*(length+breadth);
    return p;
}
};

int main(){
    struct Rectangle r = {0,0};

    int l,b;
    cout<<"enter length and breadth:"<<endl;
    cin>>l>>b;


//  the functions initialize(), area(), and perimeter() are defined inside the Rectangle structure and called using the r object. 
    r.initialize(l,b);

    int a = r.area();
    int c = r.perimeter();

    cout<<"area = "<<a<<endl;          // 20
    cout<<"perimeter = "<<c<<endl;     // 18
}