#include <iostream>
using namespace std;

int main() {
    // integer
    int num = 10;
    cout << num << endl;

    // floating point (decimal)
    float floating = 10.25;
    cout << floating << endl;

    // double (precision floating point)
    double e = 2.71828;
    cout << e << endl;

    // boolean
    bool isTrue = true;
    cout << isTrue << endl; 
    // Output: 1
    bool isFalse = false;
    cout << isFalse << endl; 
    // Output: 0

    // character
    char c = 'C';
    cout << c << endl;

    // string
    string world = "Hello, World!";
    cout << world << endl;

    // pointer
    int* pointer = &num;
    // num and *pointer = value
    // &num and pointer = memory address
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value Stored in pointer: " << pointer << endl;
    cout << "Value Pointed to by pointer: " << *pointer << endl;

    // arrays - you must always establish the size of an array
    string languages[3] = {"Python", "Java", "C"};
    cout << languages[2] << endl; 
    // Output: C
    languages[2] = "C++";
    cout << languages[2] << endl; 
    // Output: C++


    // mixed type operations

     // int + int
    cout << num + 5 << endl; 
    // Output: 15

    // int + float
    cout << num + floating << endl; 
    // Output: 20.25

    // int * double
    cout << num * e << endl; 
    // Output: 27.1825

    // int + string
    cout << num << "5" << endl; 
    // Output: 105

    return 0;
}

/* Sources:
https://www.geeksforgeeks.org/cpp/cpp-data-types/
https://www.geeksforgeeks.org/cpp/cpp-pointers/
https://www.w3schools.com/cpp/cpp_arrays.asp */