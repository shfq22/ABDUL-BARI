// Static vs Dynamic Array

// Static Array:
// 1. The size of the array is fixed.
// 2. The size of the array must be known at compile time
// 3. The memory is allocated at compile time.
// 4. The memory is allocated in the stack section.


// Dynamic Array:
// 1. The size of the array is not fixed.
// 2. The size of the array can be known at runtime.
// 3. The memory is allocated at runtime.
// 4. The memory is allocated in the heap section.
// 5. The dynamic array is created using the new keyword.


// Example of Static Array:
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5]; // Static Array
//     for(int i=0;i<5;i++){
//         A[i]=i+1;
//     }
//     for(int i=0;i<5;i++){
//         cout<<A[i]<<" ";
//     }
// }
// output:
// 1 2 3 4 5
// Static Array is created using the stack memory.




// Example of Dynamic Array:
#include<iostream>
using namespace std;

int main(){
    int *p;
    p=new int[5]; // Dynamic Array
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }

    delete []p; // delete the dynamic array
}
 

// output:
// 1 2 3 4 5
// Dynamic Array is created using the new keyword.







//  in C++, we can create an array of any size at run time. 
// but in C, we can't create an array of any size at run time.
// in C, we can create an array of any size at compile time only.
// in C, we can create an array of any size at run time using the malloc function.