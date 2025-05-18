//Q. Write a program to perform + operator overloading for string concatenation.

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char str[100];
    public:

    // Constructor
    MyString(const char* s = "") {
        strcpy(str, s);
    }

    // Overload + operator
    MyString operator+(const MyString& obj) {
    MyString result;
    strcpy(result.str, str);         // Copy first string
    strcat(result.str, obj.str);     // Concatenate second string
    return result;
    }

    // Display function
    void display() {
    cout << str << endl;
    }
};

    int main() {
    MyString s1("Hello "), s2("World!"), s3;

    cout << "First String: ";
    s1.display();
