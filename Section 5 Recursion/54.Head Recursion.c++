//      *********** HEAD RECURSION ***********
//If a recursive function calling itself and that recursive call is the first statement in the function

#include<iostream>
using namespace std;



void fun(int n) {
    if (n > 0) {
        fun(n - 1);
        cout << n << "  ";  
    }
}

int main() {
    int n;
    cin >> n;

    fun(n);  
    cout << endl;
    
}







//      *********** HEAD RECURSION ***********

// void fun(int n) {
//     if (n > 0) {      
//         fun(n - 1);
//         --------
//         --------         
//         --------  
//     }
// }




//      *********** NOT A HEAD RECURSION ***********
// we can call it just a Recursion but not with a special name
// void fun(int n) {
//     if (n > 0) { 
//         --------     
//         fun(n - 1);
//         --------
//         --------         
//         --------  
//     }
// }