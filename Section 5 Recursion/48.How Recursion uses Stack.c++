#include<iostream>
using namespace std;



void fun(int n) {
    if (n > 0) {
        cout << n << "  ";  // Print before recursion for descending order
        fun(n - 1);
    }
}
// total (n+1)calls means (n+1) Activation record in stack memory

int main() {
    int n;
    cin >> n;

    fun(n);  // Prints numbers from n to 1
    cout << endl;
    
}

