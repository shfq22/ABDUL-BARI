// combined nCr using iteration

#include<iostream>
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    int num = 1;
    int den = 1;
    for(int i=1;i<=r;i++){
        num = num * n;
        n--;
        den = den * i;

    }
    cout<<num/den<<endl;
}

// TC: O(n)
// SC: O(1)