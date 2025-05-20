//Q. Write a program to Copy the contents of one file to other.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;

    // Get file names from user
    cout << "Enter the source file name: ";
    cin >> sourceFile;
    cout << "Enter the destination file name: ";
    cin >> destinationFile;

    // Open the source file in read mode
    ifstream source(sourceFile, ios::in);

    // Check if source file exists
    if (!source) {
        cerr << "Source file not found!" << endl;
        return 1;
    }

    // Open the destination file in write mode
    ofstream destination(destinationFile, ios::out);

    // Check if destination file was opened successfully
    if (!destination) {
        cerr << "Failed to open destination file!" << endl;
        return 1;
    }

    // Copy contents from source to destination
    char ch;
    while (source.get(ch)) {
        destination.put(ch);
    }

    // Close both files
    source.close();
    destination.close();

    cout << "File content copied successfully!" << endl;

    return 0;
}
