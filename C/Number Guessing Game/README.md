# Number Guessing Game (C)

A simple command-line Number Guessing Game written in C.

The program randomly selects a number between 1 and 100, and the player must guess it in as few attempts as possible.


# How the Game Works

* The program generates a random number between 1 and 100.

* The user is prompted to enter a guess.

* After each guess, the program tells the user:

    * Too high.

    * Too low.

* The game continues until the correct number is guessed.

* The total number of attempts is displayed at the end.


# Source Code
```bash
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Try to guess it!\n");

    // Loop until the player guesses the number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
```


# Concepts Used

* rand() and srand() for random number generation.

* time() to seed randomness.

* do-while loop.

* Conditional statements (if, else if, else).

* Standard input/output (scanf, printf).


# Possible Improvements

* Add input validation (handle non-numeric input).

* Allow difficulty levels (different number ranges).

* Store high scores.

* Add replay option.

* Limit number of attempts.