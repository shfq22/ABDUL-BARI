#include<iostream>
using namespace std;


class Rectangle{
    private:
        int length;
        int breadth;

    public:

    // member fn of Rectangle class
        Rectangle(){length = breadth = 1;}  // default constructor
        Rectangle(int l,int b);             // parameterized
    // the above two are overloaded constructor

        int area();
        int perimeter();
    // the  above are called facilitators

        int getLength(){return length;}
        void setLength(int l){length = l;}

};
 