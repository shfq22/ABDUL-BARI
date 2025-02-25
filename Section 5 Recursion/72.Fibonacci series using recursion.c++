// // fibonacci series using recursion
// // 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 ........



// // fibonacci without memoization
// #include<iostream>
// using namespace std;
// int fibo(int n){
 
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
// // we can write it as well for n = 0 and n = 1
//     // for(n<=1){
//     //     return n;
//     // }


//     if(n>=2){
//         return fibo(n-1) + fibo(n-2);  // Excessive recursion 
//     }
//  }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fibo(n)<<endl;
//     return 0;
// }

// TC: O(2^n)
// SC: O(n)





// fibonacci with memoization

#include <iostream>
#include <unordered_map>

using namespace std;
int F[10];
int mfibo(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = mfibo(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mfibo(n-1);
        }
        return F[n-2] + F[n-1];
    }
}
int main(){
    int n;
    cin>>n;
    int i;
    for(i=0;i<10;i++){
        F[i] = -1;
    }
    cout<<mfibo(n)<<endl;
    return 0;
}