<!-- PROJECT SHIELDS -->
![Repo Size](https://img.shields.io/github/repo-size/John-Valinsky/Windows)
![Last Commit](https://img.shields.io/github/last-commit/John-Valinsky/Windows)
![Open Issues](https://img.shields.io/github/issues/John-Valinsky/Windows)
![Stars](https://img.shields.io/github/stars/John-Valinsky/Windows)

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


# Usage

* Enter your message and the shift value when prompted.

* See the encrypted message displayed on the console.


# Example

Enter a message: Hello World!
Enter shift value: 3

Encrypted message: Khoor Zruog!


# Codes
```bash
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char text[], int shift)
{
    char ch;
    shift = shift % 26;   // Handle shifts greater than 26

    for (int i = 0; text[i] != '\0'; i++)
    {
        ch = text[i];

        // Encrypt uppercase letters
        if (isupper(ch))
        {
            text[i] = (ch - 'A' + shift) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch))
        {
            text[i] = (ch - 'a' + shift) % 26 + 'a';
        }
        // Non-alphabetic characters remain unchanged
    }
}

int main()
{
    char message[1000];
    int shift;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    caesarCipher(message, shift);

    printf("\nEncrypted message: %s", message);

    return 0;
}
```


# License

MIT License

Copyright (c) 2026 John Valinsky

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files, to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
