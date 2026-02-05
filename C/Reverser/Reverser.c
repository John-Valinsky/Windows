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
        printf("\n     ~ ~  By John Lalremruata  ~ ~ \n");
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
