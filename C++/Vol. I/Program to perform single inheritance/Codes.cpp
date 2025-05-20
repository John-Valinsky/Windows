//Q. Write a program to perform single inheritance.

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class (inherits from Person)
class Student : public Person {
public:
    int rollNo;

    void getStudentDetails() {
        getDetails();  // Call base class function
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentDetails() {
        showDetails();  // Call base class function
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;
    cout << "--- Enter Student Information ---" << endl;
    s.getStudentDetails();

    cout << "\n--- Student Information ---" << endl;
    s.showStudentDetails();

    return 0;
}
