#include <iostream>
using namespace std;

int main() {
    // integer
    int num = 10;
    cout << num << "\n";

    // floating point (decimal)
    float floating = 10.25;
    cout << num << "\n";

    // double (precision floating point)
    double e = 2.71828;
    cout << e << "\n";

    // boolean
    bool isTrue = true;
    cout << isTrue << "\n"; // prints 1
    bool isFalse = false;
    cout << isFalse << "\n"; // prints 0

    // character (stores a single character)
    char c = 'C';
    cout << c << "\n";

    // string
    string world = "Hello, World!";
    cout << world << "\n";

    /* pointer:
    holds the memory address of another variable */
    int* pointer = &num;
    cout << "Value of num: " << num << "\n";
    cout << "Address of num: " << &num << "\n";
    cout << "Value Stored in pointer: " << pointer << "\n";
    cout << "Value Pointed to by pointer: " << *pointer << "\n";

    // arrays - you must always establish the size of an array
    string languages[3] = {"Python", "Java", "C"};
    cout << languages[2] << "\n";
    languages[2] = "C++";
    cout << languages[2] << "\n";


    // mathematical operations
    // recall: num = 10

    cout << num + 5 << "\n"; // int + int
    cout << num + floating << "\n"; // int + float
    cout << num * e << "\n"; // int * double
    cout << num << "5" << "\n"; // int + string

    return 0;
}

/* Sources:
https://www.geeksforgeeks.org/cpp/cpp-data-types/
https://www.geeksforgeeks.org/cpp/cpp-pointers/
https://www.w3schools.com/cpp/cpp_arrays.asp */