#include <iostream>
using namespace std;

// parent class
class Person {
    public:
        // attributes:
        string name;
        double age;

        Person(string n, double a) {
            this->name = n;
            this->age = a;
        }

        // functions:
        void setName(string name) {
            this->name = name;
        }

        void setAge(double age) {
            this->age = age;
        }

        string getName() {
            return this->name;
        }

        double getAge() {
            return this->age;
        }

        void display() {
            cout << this->name << " is " << this->age << " years old." << endl; 
        }

};

// child class (inherits from Person class)
class Student : public Person {
    public:
        // attributes
        int id;
        string major;

    Student(string n, double a, int id, string m)
        : Person(n, a) {
        this->id = id;
        this->major = m;
    }

    // functions:
    void setID(int id) {
        this->id = id;
    }

    void setMajor(string major) {
        this->major = major;
    }

    int getID() {
        return this->id; 
    }

    string getMajor() {
        return this->major;
    }

    void display() {
        cout << "ID " << this->id << ": " << this->name << " is " << this->age << " years old and a " << this->major << " major." << endl;
    }
};

int main() {
    Student student("Katie", 20, 1, "Data Science"); // create an object of Student
    student.display();
    // Output: ID 1: Katie is 20 years old and a Data Science major.
    student.setMajor("Computer Science");
    student.display();
    // Output: ID 1: Katie is 20 years old and a Computer Science major.

    return 0;
}

/* Sources:
https://www.w3schools.com/cpp/cpp_classes.asp
https://www.geeksforgeeks.org/cpp/inheritance-in-c/
https://stackoverflow.com/questions/6905598/c-equivalent-to-java-this
https://stackoverflow.com/questions/59911036/c-using-parent-class-attributes */