# Caesar Cipher in C

A simple C program that implements the classic Caesar Cipher encryption technique. This program allows you to encrypt text messages by shifting each alphabetic character by a specified number of positions. Non-alphabetic characters remain unchanged.


# Features

* Encrypts both uppercase and lowercase letters.

* Handles shift values greater than 26 by wrapping around the alphabet.

* Keeps spaces, punctuation, and numbers unchanged.

* Easy-to-use console input/output interface.


# How It Works

The Caesar Cipher is a substitution cipher where each letter in the plaintext is shifted a certain number of places down the alphabet.

Example with a shift of 3:

Plaintext:  HELLO
Ciphertext: KHOOR

The program works with both uppercase and lowercase letters and leaves non-alphabetic characters unchanged.