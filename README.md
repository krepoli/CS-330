# Welcome to C++

C++ is one of the most popular programming languages. It can be found today in operating systems, Graphical User Interfaces, and embedded systems. This project is for my CS 330 Structure and Organization of Programming Languages class at Simmons University. I will provide a tutorial on how to code in C++.

# Table of Contents

1. [History](#history)
2. [Installation and Setup](#installation-and-setup)
3. [Printing Hello World](#printing-hello-world)
4. [Selection, Loops, and Conditionals](#selection-loops-and-conditionals)
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

### Built-in Data Types
* Integers (`int`)
* Floating-points (`float`)
* Doubles (`double`)
* Booleans (`bool`)
* Characters (`char`)
* Strings (`string`)
* Pointers
* Arrays

Dictionaries are **not built-in** but can be implemented through libraries.

### Language Characteristics
* **Statically Typed**<br>
Data types must be declared when variables are defined.
* **Strongly Typed**<br>
C++ enforces strict data type conversion.
* **Explicitly Typed**<br>
Variables require specified data types.

### Variable Naming Rules
* Variable names can contain:
    * Letters (`a-z`,`A-Z`)
    * Digits (`0-9`)
    * Underscores (`_`)
* Variable names **must begin** with a letter or an underscore.
* Variable names **cannot** be reserved words.

[View the list of C++ reserved words](https://www.geeksforgeeks.org/cpp/cpp-keywords/)

### Mutability
* By default, **strings, primitives, and other variables** are mutable.
* Use `const` keyword to declare something unmutable.

### Operators
C++ supports a wide range of operators, including:

**Arithmetic**
```cpp
+    -    *    /    %
```
**Increment/Decrement**
```cpp
++    --
```
**Comparison**
```cpp
==    !=    >    <    >=    <=
```
**Logical**
```cpp
&&    ||
```
* Mixed type operations are allowed.
* Identifier names and operator symbols are **bound at compile time.**

### Example Code

**[View my Commented Code Here](dataTypes.cpp)**

# Selection, Loops, and Conditionals

### Overview
* C++ supports `switch` statements which utilize "break" to exit a case.<br>
("continue" **does not work** in a switch)
* Boolean values are written as `true` and `false` (lowercase) but appear as `1` and `0` when printed.
* Code blocks are delimited under each condition using curly braces `{ }`.
* C++ uses **short-circuit evaluation**<br>
Evaluation stops as soon as the result is known.
* The **"dangling else" problem"** occurs in nested if statements when an else combines with the wrong if.<br>
Use curly braces and proper indentation to avoid this.
* **Variable scope in loops** is the same as function-block scoping.<br>
Loop code block variables are created and destroyed each iteration.

### Conditionals

`if / else`
```cpp
if (condition) {
    // code
} else {
    // code
}
```

`if / else if / else`
```cpp
if (condition) {
    // code
} else if (condition) {
    // code
} else {
    // code
}
```

`switch`
```cpp
switch (expression) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    default:
        // code
        break;
}
```

### Short-Circuit Evaluation

if `(a == b)` is true, `(c == d)` will **not** be evaluated:
```cpp

if (a == b) || (c == d) {
    // something happens
}
```

### Loops

**General Rules**
* `for` loops: used when the number of iterations is known in advance.
* `while` and `do-while` loops: used when iteration depends on a condition.
* **Entry-controlled loops**
    * `for`, `while` - condition is checked before execution
* **Exit-controlled loops**
    * `do-while` - loop executes once before checking condition

`for` Loop
```cpp
for (initialization; condition; update) {
    // do something
}
```

`while` Loop
```cpp
while (condition) {
    // do something
}
```

`do-while` Loop
```cpp
do {
    // something
} while (condition);
```

### Example Code

**[View my Commented Code Here](Conditionals.cpp)**

# Functions

Functions are used to perform **repetitive or reusable** actions in code.


A function definition consists of:
1. **return type**
2. **function name**
3. **optional parameters** (inside parentheses)


If a function does not return a value, `void` is used instead of a data type.

### Basic Syntax
```cpp
void myFunction() {
    // function body
}
```

### Main Function
A `main` function is the **entry point** of a C++ program and is responsible for calling other functions.

```cpp
int main() {
    myFunction();
    return 0;
}
```

### Important Details

* Functions must be declared before they are called.
* C++ supports **recursive functions.**
* Functions can accept **multiple parameters of different data types.**
* Multiple values can be returned at the same time using `pair`.
* C++ is **pass-by-value**
    * The caller and the callee each have independent copies of variables.
* Arguments, parameters, and local variables are stored on the stack during execution.
* Pointers: the pointer itself is stored on the stack and the data it points to is stored on the heap.
* **Side-effects are possible** and there are no guard rails against them.

### Variables Scope

**Local Scope**
* Variables declared inside a function.
* Accessible only within that function.

**Global Scope**
* Variables declared outside all functions.
* Accessible from anywhere in the program.

Variables with the same name inside and outside of a function are treated as 2 separate variables.

### Example Code

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

* There is no standard function that allows information about objects to be printed such as toString() in Java or \_\_str\_\_() in python.
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