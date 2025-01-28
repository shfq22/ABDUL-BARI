#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int A[5];    // declaration of array in the stack memory 
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    cout<<sizeof(A)<<endl;    // 20

    cout<<A[1]<<endl;         // 15

    printf("%d\n", A[2]);     // 25

    cout<<endl;


    int B[5] = {2, 4, 6, 8, 10};    // declaration and initialization of array in the stack memory
    cout<<sizeof(B)<<endl;    // 20
    cout<<B[9]<<endl;         // random value / garbage value / 0
    printf("%d\n", B[12]);    // random value / garbage value / 0

    cout<<endl;


    for(int i=0; i<10; i++){
        cout<<B[i]<<endl;    // after B[4] it gives --->  random value / garbage value / 0
    }
    
    cout<<endl;

    for(int j : B){
        cout<<j<<endl;              // 2
                                    // 4
                                    // 6
                                    // 8
                                    // 10
    }



    int n;
    cin>>n;
    int C[n];
    C[1] = 2; 
    for(int k : C){
        cout<<k<<endl;    // random value / garbage value / 0     (except the C[1] = 2
    }                   // because the size of the array is not fixed, it is dynamic)


    int m;
    cin>>m;
    int D[n] = {1, 2, 3, 4, 5};    //!\\  error: variable-sized object may not be initialized
    for(int l : D){
        cout<<l<<endl;
    }
}