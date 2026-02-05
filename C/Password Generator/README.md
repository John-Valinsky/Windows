# Password Generator using C

A simple yet effective strong password generator written in C, designed to create random passwords using a mix of uppercase letters, lowercase letters, numbers, and special characters.

This program runs in the terminal and allows users to generate multiple passwords of custom lengths in one session.


# Features

* Generates strong random passwords.

* Ensures at least:

    * 1 uppercase letter

    * 1 lowercase letter

    * 1 digit

    * 1 special character

* Fully randomized & shuffled.

* User-defined password length.

* Loop-based generation (generate multiple passwords without restarting).

* Clean ASCII banner output.

* Written in pure C (no external libraries).


# How It Works

* The program seeds the random number generator using the current time.

* It guarantees minimum password strength by selecting characters from each category.

* Remaining characters are chosen randomly.

* The password is shuffled to remove predictable patterns.

* The final password is displayed to the user.


# Code
```bash
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_UPPER 26
#define NUM_LOWER 26
#define NUM_DIGITS 10
#define NUM_SPECIAL 16

void generatePassword(int length) {
    // Define character sets
    const char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char lower[] = "abcdefghijklmnopqrstuvwxyz";
    const char digits[] = "0123456789";
    const char special[] = "!@#$%^&*()-_=+[]{}|;:',.<>?/";

    if (length < 4) {
        printf("\n Password length should be at least 4 to ensure it's strong.\n");
        return;
    }

    char password[length + 1]; // +1 for null terminator
    int i;

    // Ensure at least one character from each set
    password[0] = upper[rand() % NUM_UPPER];
    password[1] = lower[rand() % NUM_LOWER];
    password[2] = digits[rand() % NUM_DIGITS];
    password[3] = special[rand() % NUM_SPECIAL];

    // Fill the rest of the password
    for (i = 4; i < length; i++) {
        int category = rand() % 4;
        switch (category) {
            case 0:
                password[i] = upper[rand() % NUM_UPPER];
                break;
            case 1:
                password[i] = lower[rand() % NUM_LOWER];
                break;
            case 2:
                password[i] = digits[rand() % NUM_DIGITS];
                break;
            case 3:
                password[i] = special[rand() % NUM_SPECIAL];
                break;
        }
    }

    // Shuffle the password
    for (i = 0; i < length; i++) {
        int j = rand() % length;
        char temp = password[i];
        password[i] = password[j];
        password[j] = temp;
    }

    // Null-terminate and print the password
    password[length] = '\0';
    printf("\n Generated Password: %s\n", password);
}

int main() {
    int length;
    char dummy;

    // Seed random number generator
    srand((unsigned int)time(NULL));

        printf("        ______   ___                  _____  _____  _   _\n");
        printf("        | ___ \\ / _ \\                |  __ \\|  ___|| \\ | |\n");
        printf("        | |_/ // /_\\ \\       /       | |  \\/| |__  |  \\| |\n");
        printf("        |  __/ |  _  |         /     | | __ |  __| | . ` |\n");
        printf("        | |    | | | |               | |_\\ \\| |___ | |\\  |\n");
        printf("        \\_|    \\_| |_/                \\____/\\____/ \\_| \\_/\n");

        //printf("-----------------------------------------------------------------");
        printf("\n\n                   ~ ~ By John Valinsky ~ ~ \n");
        //printf("-----------------------------------------------------------------\n\n");

    while (1)
        {
        printf("\n=================================================================");
        printf("\n Enter the desired length for the password (or 0 to exit): ");
        scanf("%d", &length);

        if (length == 0) {
            break; // Exit the loop if the user enters 0
        }

        generatePassword(length);

        // Clear the input buffer to handle extra newline characters
        while ((dummy = getchar()) != '\n' && dummy != EOF);
    }

    printf("Exiting program.\n");

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

