# Java Program: Reading and Writing Files using FileInputStream & FileOutputStream

Overview
--------
This Java program demonstrates how to read the contents of a file and write them to another file using:

* FileInputStream for reading from a file

* FileOutputStream for writing to a file



# Files Involved
----------------
Input File: sample.txt

Output File: data2.txt

Both files are located at:
C:\Users\John\Desktop\programs\



# Concepts Demonstrated
-----------------------
File I/O in Java

Byte-level reading and writing

Try-catch exception handling

Streams (FileInputStream, FileOutputStream)



# Program Flow
--------------
The readFile() method:

* Opens the input file sample.txt

* Reads its contents byte by byte

* Writes the bytes to the output file data2.txt


Once writing is complete, it prints:

content writen successfully



# Sample Output
---------------
content writen successfully



# How to Run
------------
Prepare Files:

* Make sure sample.txt exists at the specified path with some content.

* Save the code in a file named ReadWrite.java.



# Compile the program
---------------------
javac ReadWrite.java



# Run the program
-----------------
java ReadWrite



# Check Output
--------------
You will see data2.txt created (or overwritten) at the same location, containing the same content as sample.txt.



# Notes
-------
Ensure that the file paths are correct and exist on your system.

File operations may throw IOException, which is handled in a try-catch block.



# Use Cases
-----------
* File duplication

* Backup utilities

* Basic understanding of byte stream handling in Java