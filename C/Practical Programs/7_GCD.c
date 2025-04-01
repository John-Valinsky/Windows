//6. Write a recursive program to find GCD of 4,6,8. 

#include <stdio.h>
#include <string.h>

// Global password variable (easily found in the executable)
char correct_password[] = "SuperSecret123";  // Visible in `strings` output

int main() {
    char user_password[100];

    // Display a hidden hint (which will show up in strings)
    //printf("DEBUG: Password stored as SuperSecret123\n");

    // Ask user for password input
    printf("Enter your password: ");
    scanf("%99s", user_password);

    // Check if the entered password matches the correct password
    if (strcmp(user_password, correct_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Error: Incorrect password.\n");
    }

    return 0;
}
