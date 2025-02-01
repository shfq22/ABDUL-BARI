// #include<iostream>
// using namespace std;

// struct circle{
//     int r;
//     double pi;
// };

// int areaOfCircle(struct circle ccc){
//     int f = ccc.r;
//     double h = ccc.pi;
//     return f*f*h;
// }

// int main(){
//     struct circle C = {5,3.14};

//     double z = areaOfCircle(C);
//     cout<<z<<endl;
// }






#include <iostream>
using namespace std;

struct Circle {
    int r;
    double pi;
};

// Function to modify the radius using a pointer
void changeRadius(struct Circle *c, int newRadius) {
    c->r = newRadius;  // Modifying the radius using a pointer
}

int main() {
    struct Circle C = {5, 3.14};

    cout << "Before modification: " << C.r << endl;  // Output: 5

    changeRadius(&C, 10);  // Passing address to modify the original structure

    cout << "After modification: " << C.r << endl;  // Output: 10

    return 0;
}
