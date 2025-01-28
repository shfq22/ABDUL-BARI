// Problem-Solving (Think of the Plan)

// Problem: Find the largest number in a list of numbers.
// Imagine you have a list of numbers like [3, 7, 2, 9, 4].
// What would you do if you were solving it manually?
// Start with the first number and assume it's the largest.
// Compare it with the next number. If the next number is bigger, update your "largest number."
// Keep comparing until you've checked all the numbers.
// The number left in your "largest" spot is the biggest.






// Programming (Write the Code)

// Let's write a C++ program that finds the largest number in a list of numbers.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {3, 7, 2, 9, 4}; // List of numbers
    int largest = numbers[0];             // Assume the first number is the largest

    for (int num : numbers) {             // Go through each number in the list
        if (num > largest) {              // If the current number is bigger
            largest = num;                // Update the largest number
        }
    }

    cout << "The largest number is: " << largest << endl;            // The largest number is: 9

    return 0;
}




// How It Works:
// Problem-solving: You figured out the steps (compare each number).
// Programming: You used Python to make the computer do the work for you