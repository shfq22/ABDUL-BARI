#include<iostream>
using namespace std;

int comb(int n){
    if(n==0){
        return 1;
    }

    else{
        return n * comb(n-1);
    }
}


// int c(int n,int r){
//     int num = comb(n);
//     int den = comb(r) * comb(n-r);
//     return num/den;
// }


int main(){
    int n,r;
    cin>>n>>r;
    cout<<comb(n)/(comb(r)*comb(n-r))<<endl;

    // cout<<c(n,r)<<endl;
    return 0;
}


// TC: O(n)
// SC: O(n)