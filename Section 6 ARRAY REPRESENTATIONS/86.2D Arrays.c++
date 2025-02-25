// 2D Arrays

// A two-dimensional array in C++ is the simplest form of a multi-dimensional array.
// A two-dimensional array in C++ is a collection of elements organized in rows and columns.

// useful for implementing matrices, tables, etc.



#include<iostream>
using namespace std;

int main(){


// method 1:
    int A[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    // output:
    // 1 2 3
    // 4 5 6
cout<<endl;





// method 2:
    int *B[3];   // B is an array of 3 pointers (int*), where each element (B[0], B[1], B[2]) is a pointer to an array of integers.
    B[0]=new int[3];
    B[1]=new int[3];
    B[2]=new int[3];
    // This dynamically allocates three separate integer arrays of size 3 in the heap. 

    int k=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            B[i][j]=k;
            cout<<B[i][j]<<" ";
            k++;
        }
        cout<<endl;
    }
    // output:
    // 1 2 3
    // 4 5 6
    // 7 8 9
cout<<endl;






// method 3:
    int **C;   // C is a double pointer (int**), meaning it is a pointer to a pointer to an integer.It will be used to store a dynamic 2D array.
    
    C=new int*[3];   // This dynamically allocates an array of 3 pointers, where each pointer will point to an array of integers.
    //C is now an array of 3 pointers (C[0], C[1], C[2]).
    
    C[0]=new int[3];
    C[1]=new int[3];
    C[2]=new int[3];
    // Each of these dynamically allocates an array of 3 integers, representing the columns of each row.
    // So, we now have a 3x3 matrix dynamically allocated in the heap.
    int l=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j]=l;
            cout<<C[i][j]<<" ";
            l++;
        }
        cout<<endl;
    }
    // output:
    // 1 2 3
    // 4 5 6
    // 7 8 9

}