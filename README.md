# Welcome to C++

C++ is one of the most popular programming languages. It can be found today in operating systems, Graphical User Interfaces, and embedded systems. This project is for my CS 330 Structure and Organization of Programming Languages class at Simmons University. I will provide a tutorial on how to code in C++.

# History

C++ was invented by Danish scientist Bjarne Stroustrup at AT&T Bell Labs in 1979. He was impressed by the program organization and concurrency features of Simula (another programming language) and wanted to implement them to C. This included the implementation of classes, public/private access control, constructors and destructors, friend classes, call and return functions (soon removed), and default arguments. The language was originally called "C with Classes" and then C84, but was finally changed to C++. C++ is a general-purpose programming language, meaning it has many uses and extensive features. It is also object-oriented. It is used to power search engines, VR applications, air travel, game development, and movie production, and is most popular for building large software infrastructure and applications that run on limited resources.

Sources: \
[C++ Introduction](https://www.w3schools.com/cpp/cpp_intro.asp)\
[A Brief History of C++](https://www.perforce.com/blog/qac/misra-cpp-history#introduction-c-history)\
[What is C++ Used For?](https://www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for)

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

# Coding Hello World

This is your first programming project in C++! Through printing "Hello, World!" you will learn the program's basic syntax. 

Start by opening VS Code and creating a new .cpp file.

**How to Comment on your Code:**
```cpp
// this is a comment

/* this is a 
multiline comment */
```

**Always Include at the Top**
```cpp
#include <iostream> // this is a header file library that allows input and output objects
using namespace std; // this means we can use names for objects and variables
```

View my commented code [here](helloworld.cpp)

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

**Note:** C++ does not add new lines on its own. Use **<< endl** to create a new line.

View my commented code [here](dataTypes.cpp)

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

* The "dangling else" problem occurs in nested "if" statements where the "else" statement doesn't know which "if" to combine with. Make sure to use curly braces and indentation to prevent this problem
* C++ supports switch statements which utilize "break" to exit the statement; "continue" does not work
* There are 3 types of loops: for loops, while loops, and do while loops

for loops and while loops are both entry-controlled loops, which means they must check if the condition is true before executing. The main difference between the two is that the number of iterations is known beforehand in a for loop, while this is based on the condition in a while loop. A do-while loop, on the other hand, is an exit-controlled loop, which means the loop executes one time before checking the condition. do-while loops are also based solely on condition.

* Loop code block variables and function code block variables are treated the same, scope-wise and lifetime-wise. The key difference is that loop code block variables are created and destroyed within each iteration.

View my commented code [here](Conditionals.cpp)

Sources: \
[Loops in C++](https://www.geeksforgeeks.org/cpp/cpp-loops/)\
[Short-circuit Evaluation in Programming](https://www.geeksforgeeks.org/c/short-circuit-evaluation-in-programming/)\
[Dangling-else Ambiguity](https://www.geeksforgeeks.org/compiler-design/dangling-else-ambiguity/)