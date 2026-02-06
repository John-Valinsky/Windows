<!-- PROJECT SHIELDS -->
![Repo Size](https://img.shields.io/github/repo-size/John-Valinsky/Windows)
![Last Commit](https://img.shields.io/github/last-commit/John-Valinsky/Windows)
![Open Issues](https://img.shields.io/github/issues/John-Valinsky/Windows)
![Stars](https://img.shields.io/github/stars/John-Valinsky/Windows)

# String Reverser

A simple interactive C program that reverses user-entered strings in real time.

It runs in a loop, accepts any length of input, reverses it, and clears the screen for the next round.


# Features

* Reverses any string entered by the user.

* Runs continuously until manually stopped.

* Uses dynamic memory allocation (getline).


# Example Output
```bash
 Enter a string   ~ Hello World

 Reversed string  ~ dlroW olleH
```


# How It Works

* Reads user input using getline().

* Removes the newline character.

* Reverses the string using a custom function.

* Displays the reversed string.

* Waits for user input, clears the screen, and repeats.


# Code
```bash
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to reverse a string
void reverseString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char *str = NULL;
    size_t len = 0;

    while (1)
        {

        printf(" ____                                    \n");
        printf("|  _ \\ _____   _____ _ __ ___  ___ _ __ \n");
        printf("| |_) / _ \\ \\ / / _ \\ '__/ __|/ _ \\ '__|\n");
        printf("|  _ <  __/\\ V /  __/ |  \\__ \\  __/ |   \n");
        printf("|_| \\_\\___| \\_/ \\___|_|  |___/\\___|_|   \n");
        printf("                                        \n");

        printf("-----------------------------------------");
        printf("\n     ~ ~  By John Valinsky  ~ ~ \n");
        printf("-----------------------------------------\n");

        printf("\n Enter a string   ~ ");
        getline(&str, &len, stdin);

        // Remove newline character if present
        str[strcspn(str, "\n")] = '\0';

        reverseString(str);

        printf("\n\n Reversed string  ~ %s\n", str);

        // Pause to allow the user to copy the string
        printf("\n <~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~>\n");
        getchar(); // Wait for the user to press Enter

        // Clear the screen (platform dependent)
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        // Free the allocated memory and reset pointer and length
        free(str);
        str = NULL;
        len = 0;
    }

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