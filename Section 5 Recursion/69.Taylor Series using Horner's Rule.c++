// Horner’s Rule is an efficient method to evaluate polynomial series by reducing the number of multiplications.


// Taylor series using Horner's Rule is a faster method than Taylor series using Recursion method



// Taylor series using Horner's Rule

// taylor series of e to the power x is 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!




//  1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n! = 1 + x/1(1 + x/2(1 + x/3(1 + x/4(1 + ... x/n))))


#include<iostream>
using namespace std;

// using iteration
double e(int x, int n){
    double s=1.0;
    int i;
    double num=1;
    double den=1;
    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
   
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<e(x,n)<<endl;
    return 0;
}