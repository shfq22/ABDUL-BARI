#include <iostream>
using namespace std;    
struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    struct Rectangle r;  // Declaration of structure variable
    r = {10, 5};         // Initialization of structure variable

// OR

// struct Rectangle r1 = {10, 5};  // Declaration and initialization of structure variable
    cout << "Area of rectangle is: " << r.length * r.breadth << endl;

    r.length = 15;
    r.breadth = 10;
    cout << "Area of rectangle is: " << r.length * r.breadth << endl;

    return 0;
}
