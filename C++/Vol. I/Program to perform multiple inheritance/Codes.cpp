//Q. Write a program to perform multiple inheritance.

#include <iostream>
using namespace std;

// First base class
class Teacher {
public:
    string subject;

    void getSubject() {
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void showSubject() {
        cout << "Subject: " << subject << endl;
    }
};

// Second base class
class Staff {
public:
    int staffID;

    void getStaffID() {
        cout << "Enter staff ID: ";
        cin >> staffID;
    }

    void showStaffID() {
        cout << "Staff ID: " << staffID << endl;
    }
};

// Derived class from Teacher and Staff
class Faculty : public Teacher, public Staff {
public:
    void showFacultyDetails() {
        showSubject();
        showStaffID();
    }
};

int main() {
    Faculty f;

    cout << "--- Enter Faculty Details ---" << endl;
    f.getSubject();
    f.getStaffID();

    cout << "\n--- Faculty Details ---" << endl;
    f.showFacultyDetails();

    return 0;
}
