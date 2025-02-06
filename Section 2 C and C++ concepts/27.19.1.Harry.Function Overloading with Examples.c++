#include <iostream>
#include <string>
using namespace std;



// Function to concatenate two strings
void operate(string str1, string str2) {
    cout << "Concatenated String: " << str1 + str2 << endl;
}

// Function to compare two strings
void operate(string str1, string str2, bool compare) {
    if(compare) {
        if (str1 == str2) {
            cout << "The strings are equal." << endl;
        } else {
            cout << "The strings are not equal." << endl;
        }
    }
}

int main() {
   
    
    string s1 = "Hello, ";
    string s2 = "World!";
    
    operate(s1, s2);      // Calls the concatenation version of the function
    operate(s1, s2, true);  // Calls the comparison version of the function
    
    return 0;
}
