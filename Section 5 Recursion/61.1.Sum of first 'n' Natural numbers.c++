// without using fn

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    cout<<n*(n+1)/2<<endl;
    // TC: O(1)
    // SC: O(1)


    // OR



    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
    // TC: O(n)
    // SC: O(1)
}