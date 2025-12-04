# Welcome to C++

C++ is one of the most popular programming languages. It can be found today in operating systems, Graphical User Interfaces, and embedded systems. This project is for my CS 330 Structure and Organization of Programming Languages class at Simmons University. I will provide a tutorial on how to code in C++.

# Table of Contents

1. [History](#history)
2. [Installation and Setup](#installation-and-setup)
3. [Printing Hello World](#printing-hello-world)
4. [Selection, Loops, and Conditionals](#selection,-loops,-and-conditionals)
5. [Functions](#functions)
6. [Classes and Inheritance](#classes-and-inheritance)
7. [Sources](#sources)

# History

C++ was invented by Danish scientist Bjarne Stroustrup at AT&T Bell Labs in 1979. He was impressed by the program organization and concurrency features of Simula (another programming language) and wanted to implement them to C. This included the implementation of classes, public/private access control, constructors and destructors, friend classes, call and return functions (soon removed), and default arguments. C++ is a general-purpose programming language, meaning it has many uses and extensive features. It is also object-oriented. It is used to power search engines, VR applications, air travel, game development, and movie production, and is most popular for building large software infrastructure and applications that run on limited resources.

# Installation and Setup

1. Choose an IDE


    I will be using Visual Studio Code as my programming environment because the interface is easy to use.\
    Use this link to install [VS Code](https://code.visualstudio.com/download).

2. Install the C/C++ extension for VS Code

3. Install a Compiler

    **Windows:**
    download MinGW-w64 via [MSYS2](https://code.visualstudio.com/docs/cpp/config-mingw)

    **Mac:**
    ensure Clang is installed or download [Clang](https://code.visualstudio.com/docs/cpp/config-clang-mac)

    **Linux:**
    ensure GCC is installed or download [GCC](https://code.visualstudio.com/docs/cpp/config-linux)

# Printing Hello World

This is your first programming project in C++! You will learn the program's basic syntax. 

Start by opening VS Code and creating a new .cpp file.

**How to Comment on your Code:**
```cpp
// this is a comment

/* this is a 
multiline comment */
```

**Always Include:**
```cpp
#include <iostream> // this is a header file library that allows input and output objects
using namespace std; // this means we can use names for objects and variables
```

**Note:** C++ does not add new lines on its own. Use **<< endl** to create a new line.

**[View my Commented Code Here](helloworld.cpp)**

# Data Types and Naming Conventions

C++ has built-in types for:
* integers
* floating-points
* doubles
* booleans
* characters
* strings
* pointers
* arrays

Dictionaries are not built-in but can be implemented through libraries.

**Important Notes:**
* View [this link](https://www.geeksforgeeks.org/cpp/cpp-keywords/) to learn the reserved words
* Variables can contain letters, digits, and underscores and must begin with a letter or an underscore
* Statically Typed: data types must be declared when assigning variables
* Strongly Typed: strict about data type conversion
* Explicitly Typed: requires specific details such as variable types
* Strings, primitives, etc. are all mutable unless specified "const"
* Operators available include: +, -, *, /, %, ++, --, ==, >, <, >=, <=, !=, &&, ||
* Mixed type operations are allowed
* Identifier names and operator symbols are bound at compile time

**[View my Commented Code Here](dataTypes.cpp)**

# Selection, Loops, and Conditionals

**Overview:**
* Boolean values are expressed as true and false (MUST BE LOWERCASE) but are printed as 1 and 0
* Conditional statements are if/else and if/elseif/else
* Code blocks are delimited under each condition using curly braces {}
* C++ uses short-circuit evaluation, meaning the compiler stops evaluating logical expressions as soon as the value is determined

Short-Circuit Example:
```cpp
// if (a == b) is true, the compiler won't evaluate (c == d)

if (a == b) || (c == d) {
    // something happens
}
```

* The **"dangling else" problem** occurs in nested "if" statements where the "else" statement doesn't know which "if" to combine with. Make sure to use curly braces and indentation to prevent this problem
* C++ supports switch statements which utilize "break" to exit the statement; "continue" does not work
* There are 3 types of loops: **for loops, while loops, and do while loops**

    * for loops and while loops are entry-controlled loops, meaning they must check if the condition is true before executing
    * a do-while loop is an exit-controlled loop, which means the loop executes one time before checking the condition
    * the number of iterations is known beforehand in a for loop while this is based solely on condition in while and do while loops

* Loop code block variables and function code block variables are treated the same, scope-wise and lifetime-wise. The key difference is that loop code block variables are created and destroyed within each iteration.

**[View my Commented Code Here](Conditionals.cpp)**

# Functions

Functions are used to perform repetitive actions in code. The creation of a function consists of two parts: the type of return value and the name of your function. Data, known as parameters, can be passed into a function within the parenthesis. **void** can be used instead of a type (such as int or string) when a function does not have a return value.

**Syntax:**
```cpp
void myFunction() {

}
```

A **main function** is used to call functions:

```cpp
int main() {
    myFunction();
    return 0;
}
```

**Important Details:**

* Functions must be declared before they are called
* C++ supports recursive functions
* Multiple parameters of different data types can be passed into a function
* Multiple values can be returned at the same time using **pair**
* C++ is **pass-by-value**: the caller and the callee have 2 independent variables with the same value
* Arguments, parameters, and local variables declared within a function are stored in the stack during execution
* Pointers are stored through a reference to a heap on the stack (pointer stored in stack, value stored on heap)
* Side-effects are possible and there are no guard rails against them

**Scope of Variables:**

* **Local Scope** - can only be accessed within the function it is created in

* **Global Scope** - can be accessed anywhere

* variables with the same name inside and outside of a function will be treated as 2 separate variables

**[View my Commented Code Here](Functions.cpp)**

# Classes and Inheritance

**How to Implement Inheritance:**

```cpp
// parent class
class Person {

};

// child class
class Student : public Person {

};
```

**Inheriting Attributes from Parent to Child:**
```cpp
public:
    // attributes

    Student(string n, double a)
        : Person(n, a) {
        // attributes of child class
    }
```

* There is no standard function that allows information about objects to be printed such as toString() in Java or \_\_str\_\_ in python.
* C++ supports multiple inheritance
* Overloading does not work with inheritance

**[View my Commented Code Here](classesInheritance.cpp)**

# Sources:
[C++ Introduction](https://www.w3schools.com/cpp/cpp_intro.asp)\
[A Brief History of C++](https://www.perforce.com/blog/qac/misra-cpp-history#introduction-c-history)\
[What is C++ Used For?](https://www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for)\
[C++ Functions](https://www.w3schools.com/cpp/cpp_functions.asp)\
[C++ Variable Scope](https://www.w3schools.com/cpp/cpp_scope.asp)\
[Loops in C++](https://www.geeksforgeeks.org/cpp/cpp-loops/)\
[Short-circuit Evaluation in Programming](https://www.geeksforgeeks.org/c/short-circuit-evaluation-in-programming/)\
[Dangling-else Ambiguity](https://www.geeksforgeeks.org/compiler-design/dangling-else-ambiguity/)\
[Does overloading work with Inheritance?](https://www.geeksforgeeks.org/cpp/does-overloading-work-with-inheritance/)