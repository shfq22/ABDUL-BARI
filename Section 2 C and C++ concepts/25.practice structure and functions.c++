#include<iostream>
#include<cmath>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct CUBE{
    int cubeLength;
};


int AREA(struct Rectangle rr){ // Passed by value, so changes don't affect the original struct
    rr.breadth = 10;  // Changes only the local copy
    return (rr.breadth) * (rr.length);
}

int PERIMETER(struct Rectangle *rrr){ // Passed by pointer, so changes affect the original struct
    rrr->length = 6;  // Modifies the actual length of 'r' in main()
    return  2 * ((rrr->breadth) + (rrr->length));
}

int VOLUMEofCUBE(struct CUBE &x){   // Passed by Reference, so changes affect the original struct
    x.cubeLength = 6;
    int h = static_cast<int>(pow(x.cubeLength, 3));

    return h;
}

int main(){
    struct Rectangle r = {0,0};
    struct CUBE c = {5};
    
    
    // cout<<"enter length and breadth"<<endl;
    // cin>>r.length>>r.breadth;

    r.length = 4;
    r.breadth = 5;

    cout << "Area = "<< AREA(r) << endl;    // Output: 40 = (10 * 4)
    cout << "Perimeter = "<<PERIMETER(&r) << endl;   // Output: 22 = (2 * (5 + 6))
    cout << "length = "<<r.length << endl;   // Output: 6 (actual value changed because of pass by pointer)
    cout << "breadth = "<<r.breadth << endl;  // Output: 5 (value unchanged because AREA() used pass by value)


    cout<<"volume = "<<VOLUMEofCUBE(c)<<endl;
    cout<<"length of cube = "<<c.cubeLength<<endl;   // actual value change 
}
