//      *********** TREE RECURSION ***********
// when you make a recursive call more than once in your recursive case.



#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";

        fun(n-1);

        cout<<endl;
        fun(n-1);
        
    }
}

int main(){
    int n=5;

    fun(n);

}
// time complexity: O(2^n)
//space complexity: O(n).





// fun(5)
// |   Prints: 5
// |   Calls fun(4)
// |   |   Prints: 4
// |   |   Calls fun(3)
// |   |   |   Prints: 3
// |   |   |   Calls fun(2)
// |   |   |   |   Prints: 2
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   |   Prints newline
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   Returns
// |   |   |   Prints newline
// |   |   |   Calls fun(2)
// |   |   |   |   Prints: 2
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   |   Prints newline
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   Returns
// |   |   Returns
// |   |   Prints newline
// |   |   Calls fun(3)
// |   |   |   Prints: 3
// |   |   |   Calls fun(2)
// |   |   |   |   Prints: 2
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   |   Prints newline
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   Returns
// |   |   |   Prints newline
// |   |   |   Calls fun(2)
// |   |   |   |   Prints: 2
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   |   Prints newline
// |   |   |   |   Calls fun(1)
// |   |   |   |   |   Prints: 1
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   |   Prints newline
// |   |   |   |   |   Calls fun(0) -> Returns (Base case)
// |   |   |   |   Returns
// |   |   |   Returns
// |   |   Returns
// |   Returns
// |   Prints newline








//      *********** TAIL RECURSION ***********

// void fun(int n) {
//     if (n > 0) {  
//         --------
//         --------         
//         --------    
//         fun(n - 1);
//         --------
//         --------         
//         --------  
//         fun(n - 1);
//     }
// }




