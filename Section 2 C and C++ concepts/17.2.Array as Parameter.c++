#include <iostream>
using namespace std;

int* createArray(int size) {  // this size parameter is passed by value
    int *arr;  // having a pointer of type int
    arr = new int[size]; // and this pointer Allocating the array of size 'size'of type int
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // Initialize array
    }
    return arr; // Return pointer to the array
    // return type is (int*) and this resembles an array, it means it is returning an array
}

int main() {
    int size = 5;
    int *myArray = createArray(size);  // int *myArray declares a pointer variable named myArray that can store the address of an integer or an array of integers.
    // myArray points to the array of integers created in the createArray function.

    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " "; // Output: 1 2 3 4 5
        // The notation myArray[i] is used instead of *myArray[i] because myArray is already a pointer to an integer or an array of integers. 
    }
    // delete[] myArray; // Free allocated memory
    return 0;
}
