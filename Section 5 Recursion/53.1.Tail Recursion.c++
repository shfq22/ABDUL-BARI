// comparison of tail recursion with loop


#include <iostream>
using namespace std;

void fun(int n) {
    if (n > 0) {
        cout << n << "  ";    // this is a recursive fn,it internally utilizes STACK
        fun(n - 1);           
    }
}
// TC : O(n)
// SC : O(n)



// converted the above fn into a loop
void f(int n) {
    while (n > 0) {
        cout << n;      
        n--;
    }
}
// TC : O(n)
// SC : O(1)    // only one activation record will be created


int main(){
    int n = 3;
  
    fun(n);    // 3 2 1
cout<<endl;
    f(n);      // 321
}



// LOOP is more effecient than TAIL RECURSION in terms of SPACE