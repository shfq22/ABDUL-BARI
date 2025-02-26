#include<iostream>
using namespace std;

int pow(int m, int n){
    if(n==0){
        return 1;
    }
    return pow(m,n-1)*m;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<pow(m,n)<<endl;
    return 0;
}

// 2ⁿ = 2 *  2ⁿ⁻¹

// TC: O(n)
// SC: O(n)