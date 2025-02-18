// comparison of head recursion with loop



#include <iostream>
using namespace std;

void fun(int n) {
    if (n > 0) {
        fun(n - 1); 
        cout<<n<<" ";          
    }
}
// TC : O(n)
// SC : O(n)



// converted the above fn into a loop
void f(int n) {
    int i=1;
    while (i<=n) {
        cout<<i;    // a head recursion or if a recursive fn has to do something at returning time,it cannot be easily converted in the form of a loop , but it can be converted
        i++;
    }
}
// TC : O(n)
// SC : O(1)    // only one activation record will be created


int main(){
    int n = 3;

    fun(n);    // 1 2 3
cout<<endl;
    f(n);      // 123
}
