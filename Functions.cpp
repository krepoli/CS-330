#include <bits/stdc++.h> // use to split a string
#include <iostream>
using namespace std;

// takes in 2 numbers, multiplies them, and returns the output
int mult(int a, int b) {
    return a * b;
}

// recursive function: calculates a factorial
int fact(int f) {
    if (f <= 1) { // base case
        return 1;
    }

    return f * fact(f - 1); // recursive case
}

// takes in a string, splits it in 2 by spaces, and returns both strings
pair<string, string> splitString(string a) {
    stringstream ss(a);
    string word1, word2;
    ss >> word1;
    ss >> word2;
    return make_pair(word1, word2);
}

// store results of functions as variables and call in main to execute
int main() {
    int multiply = mult(5,10);
    cout << "5*10 = " << multiply << endl;
    int factorial = fact(10);
    cout << "10! = " << factorial << endl;
    // returns 2 values from 1 function
    auto split = splitString("hello world");
    cout << "First Word: " << split.first << endl;
    cout << "Second Word: " << split.second << endl;
    return 0;
}

/* Sources:
https://hackajob.com/talent/blog/recursion-in-programming-factorial-function-in-go
https://www.geeksforgeeks.org/java/how-to-split-a-string-in-cc-python-and-java/
https://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function
https://stackoverflow.com/questions/373419/whats-the-difference-between-passing-by-reference-vs-passing-by-value */