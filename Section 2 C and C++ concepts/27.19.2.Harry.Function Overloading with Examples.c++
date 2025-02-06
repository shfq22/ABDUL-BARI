#include <iostream>
using namespace std;

// caluate the volume of a cylender
int volume(double r,int h){
    return (3.14 * r * r * h);
}

// caluate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// caluate the volume of a Rectangle
int volume(int b,int c){
    return (b * c);
}
int main(){
   
    double r;
    int h;
    cout<<"enter the radius and height of cylender: "<<endl;
    cin>>r>>h;
    cout<<"volume of a cylender = "<<volume(r,h)<<endl;
    cout<<endl;


    int a;
    cout<<"enter the side:"<<endl;
    cin>>a;
    cout<<"volume of a cube = "<<volume(a)<<endl;
    cout<<endl;


    int b,c;
    cout<<"enter the sides of Rectangle:"<<endl;
    cin>>b>>c;
    cout<<"volume of a Rectangle = "<<volume(b,c)<<endl;
    return 0;
}