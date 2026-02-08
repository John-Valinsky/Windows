//Q. Create the Person class. Create some objects of this class (by taking information from the user).
//Inherit the class Person to create two classes Teacher and Student class.
//Maintain the respective information in the classes and create, display and delete
//objects of these two classes (Use Runtime Polymorphism).

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    // Virtual function to display details (runtime polymorphism)
    virtual void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Virtual function to display details (runtime polymorphism)
    virtual void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Virtual destructor
    virtual ~Person() {
        cout << "Person object deleted." << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    string subject;

    void getDetails() override {
        Person::getDetails();
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void showDetails() override {
        Person::showDetails();
        cout << "Subject: " << subject << endl;
    }

    // Destructor for Teacher
    ~Teacher() {
        cout << "Teacher object deleted." << endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    int rollNo;

    void getDetails() override {
        Person::getDetails();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showDetails() override {
        Person::showDetails();
        cout << "Roll Number: " << rollNo << endl;
    }

    // Destructor for Student
    ~Student() {
        cout << "Student object deleted." << endl;
    }
};

int main() {
    // Base class pointer
    Person* personPtr;

    // Create Teacher object
    personPtr = new Teacher();
    personPtr->getDetails();  // Call getDetails() of Teacher
    personPtr->showDetails(); // Call showDetails() of Teacher
    delete personPtr;         // Delete Teacher object

    // Create Student object
    personPtr = new Student();
    personPtr->getDetails();  // Call getDetails() of Student
    personPtr->showDetails(); // Call showDetails() of Student
    delete personPtr;         // Delete Student object

    return 0;
}
