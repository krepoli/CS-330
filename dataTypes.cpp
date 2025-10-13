#include <iostream>
using namespace std;

int main() {
    // integer
    int num = 10;
    cout << num << endl;

    // floating point (decimal)
    float floating = 10.25;
    cout << num << endl;

    // double (precision floating point)
    double e = 2.71828;
    cout << e << endl;

    // boolean
    bool isTrue = true;
    cout << isTrue << endl; // prints 1
    bool isFalse = false;
    cout << isFalse << endl; // prints 0

    // character (stores a single character)
    char c = 'C';
    cout << c << endl;

    // string
    string world = "Hello, World!";
    cout << world << endl;

    /* pointer:
    holds the memory address of another variable */
    int* pointer = &num;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value Stored in pointer: " << pointer << endl;
    cout << "Value Pointed to by pointer: " << *pointer << endl;

    // arrays - you must always establish the size of an array
    string languages[3] = {"Python", "Java", "C"};
    cout << languages[2] << endl;
    languages[2] = "C++";
    cout << languages[2] << endl;


    // mixed type operations
    // recall: num = 10

    cout << num + 5 << endl; // int + int
    cout << num + floating << endl; // int + float
    cout << num * e << endl; // int * double
    cout << num << "5" << endl; // int + string

    return 0;
}

/* Sources:
https://www.geeksforgeeks.org/cpp/cpp-data-types/
https://www.geeksforgeeks.org/cpp/cpp-pointers/
https://www.w3schools.com/cpp/cpp_arrays.asp */