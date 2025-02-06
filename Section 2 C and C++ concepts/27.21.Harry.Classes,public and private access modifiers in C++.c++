// #include <iostream>
// using namespace std;


// struct Employee{
//     int id;         // 4 bytes
//     char favChar;   // 1 byte 
//     float salary;   // 4 bytes
//     // total 9 bytes are in use
// };

// int main() {
//     struct Employee shfq;
//     shfq.id = 1;
//     shfq.favChar = 'M';
//     shfq.salary = 10000000;

//     cout<<"the value is = "<<shfq.id<<endl;
//     cout<<"the value is = "<<shfq.favChar<<endl;
//     cout<<"the value is = "<<shfq.salary<<endl;
    
// }




#include <iostream>
using namespace std;

union Data {
    int i;         // 4 bytes
    float f;       // 4 bytes
    char str;  // 1 byte
// Allocates memory equal to the largest member which is 4 bytes here (all members share the same memory).
};

int main() {
    union Data data;
    
    // Only one member can be accessed at a time
    data.i = 10;
    data.str = 'M';    
    cout << "String: " << data.str << endl; // M
    cout << "Integer: " << data.i << endl;  // garbage
    

    // one member can be accessed at a time so there is no problem
    data.f = 5.5;  
    cout << "Float: " << data.f << endl; // 5.5  // Overwrites `i`
    

    // there is no problem b/c one member can be accessed at a time
    data.str = 'M';
    cout << "String: " << data.str << endl; // M  // Overwrites `f`
    
   
    return 0;
}



