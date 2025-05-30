File Copy Program in C++

# Program Title
===============
Copy Contents of One File to Another Using C++


# Description
=============
This program allows the user to copy the content from a source file to a destination file using file handling operations in C++. It ensures that both files are properly opened, reads content character-by-character from the source, and writes it to the destination.



# Features
==========
* Prompts user to enter source and destination file names.

*  Reads content from the source file.

* Writes content to the destination file.

* Handles file opening errors gracefully.



# Key Concepts Used
===================
Concept	Description

ifstream	Used to open and read from the source file.
ofstream	Used to open and write to the destination file.
get() and put()	Character-based file handling functions to copy file contents.
File Validation	Checks if files opened successfully before proceeding.



# Code Overview
===============
* User Input

cin >> sourceFile;
cin >> destinationFile;

File Opening and Validation

ifstream source(sourceFile, ios::in);
ofstream destination(destinationFile, ios::out);


* Copy Logic

char ch;
while (source.get(ch)) {
    destination.put(ch);
}


* File Closing

source.close();
destination.close();



# Sample Output
===============
Enter the source file name: input.txt

Enter the destination file name: output.txt
File content copied successfully!

If the source file doesn't exist:
Source file not found!



# How to Compile and Run
========================
Compile:
g++ file_copy.cpp -o filecopy



# Run
=====
./filecopy

Make sure input.txt exists in the same directory before running.
