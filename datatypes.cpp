// source: https://www.geeksforgeeks.org/cpp/cpp-data-types/

// C++ doesn't print on new lines. add "\n" after printing to add a new line

#include <iostream>
#include <bits/stdc++.h> // this is needed to create a dictionary
using namespace std;

int main() {
    // integer
    int num = 10;
    cout << num << "\n";

    // floating point
    float f = 10.5;
    cout << f << "\n";

    // double - decimals with higher precision
    double e = 2.71828;
    cout << e << "\n";

    // string
    string greeting = "Hello, World!";
    cout << greeting << "\n";

    // character - stores a single character
    char letter = 'A';
    cout << letter << "\n";

    // boolean
    bool isTrue = true;
    cout << isTrue << "\n";
    bool isFalse = false;
    cout << isFalse << "\n";

    // array of size 5 (you must establish array size)
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) { // prints array
        cout << arr[i] << "\n";
    }
    cout << arr[0]; // printing only one element of the array
    // dictionary
    map<int, string> dict; // creates an empty dictionary
    // inserts key-value pairs
    dict[1] = "C++";
    dict[2] = "Java";
    dict[3] = "Python";
    for (int i = 0; i < 4; i++) { // prints dictionary
        cout << dict[i] << "\n";
    }
    return 0;
}