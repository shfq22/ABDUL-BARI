#include<iostream>
using namespace std;

int PasComb(int n,int r){
    if(r == 0 || n == r){
        return 1;
    }
    else{
        return PasComb(n-1,r-1) + PasComb(n-1,r);
    }
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<PasComb(n,r)<<endl;
    return 0;
}


//                    1(⁰C₀)  

//                 1(¹C₀) 1(¹C₁)           

//              1(²C₀)  2(²C₁)  1(²C₂)            // ²C₁ = ¹C₀ + ¹C₁

//           1(³C₀)  3(³C₁)  3(³C₂)  1(³C₃)       // ³C₁ = ²C₀ + ²C₁, ³C₂ = ²C₁ + ²C₂

//       1(⁴C₀)  4(⁴C₁)  6(⁴C₂)  4(⁴C₃)  1(⁴C₄)   // ⁴C₁ = ³C₀ + ³C₁, ⁴C₂ = ³C₁ + ³C₂, ⁴C₃ = ³C₂ + ³C₃




