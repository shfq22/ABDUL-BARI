#include <iostream>
using namespace std;

struct Point {
    int x, y;
};


struct Pt
{
   int i = 0;  // COMPILER ERROR:  cannot initialize members here
   int j = 0;  // COMPILER ERROR:  cannot initialize members here
}; 
int main()
{
    struct Point p1 = { 0, 1 };

    // Accessing members of point p1
    p1.x = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;

    return 0;
}