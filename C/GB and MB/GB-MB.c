#include <stdio.h>
#include <stdlib.h>

// Function to convert GB to MB
int convertGBtoMB(double gigabytes) {
    return (int)(gigabytes * 1024);
}

int main() {
    double gigabytes;
    char buffer;

    while (1) {
        // Clear the screen
        printf("\033[H\033[J");

        // Print the text art
        printf("   _____   ____              __  __   ____  \n");
        printf("  / ____| |  _ \\            |  \\/  | |  _ \\ \n");
        printf(" | |  __  | |_) |    /\\/|   | \\  / | | |_) |\n");
        printf(" | | |_ | |  _ <    |/\\/    | |\\/| | |  _ < \n");
        printf(" | |__| | | |_) |           | |  | | | |_) |\n");
        printf("  \\_____| |____/            |_|  |_| |____/ \n");
        printf("                                            \n");
        printf("                                            \n");

        printf("---------------------------------------------");
        printf("\n        ~ ~  By John Valinsky  ~ ~ \n");
        printf("---------------------------------------------\n\n\n\n");

        // Ask the user for the number of gigabytes
        printf("|~|<------------------------------------->|~|");
        printf("\n\n\t   GB ~ ");
        scanf("%lf", &gigabytes);

        // Convert GB to MB
        int megabytes = convertGBtoMB(gigabytes);

        // Print the result
        printf("\n\t\t\t MB ~ %d \n\n", megabytes);
        printf("|~|<------------------------------------->|~| \n");

        // Wait for the user to press Enter
        //printf("<------------------------------------------->\n");
        getchar(); // To consume the newline character left by scanf
        getchar(); // To wait for the actual Enter key press
    }

    return 0;
}
