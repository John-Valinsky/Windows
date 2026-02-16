#include <stdio.h>
#include <stdlib.h>

int main() {
    char exeFile[256];
    char manifestFile[256];
    char command[512];

    printf("___  ___               _   __             _   \n");
    printf("|  \\/  |              (_) / _|           | |  \n");
    printf("| .  . |  __ _  _ __   _ | |_   ___  ___ | |_ \n");
    printf("| |\\/| | / _` || '_ \\ | ||  _| / _ \\/ __|| __|\n");
    printf("| |  | || (_| || | | || || |  |  __/\\__ \\| |_ \n");
    printf("\\_|  |_/ \\__,_||_| |_||_||_|   \\___||___/ \\__|\n");

    printf("==============================================\n");

    printf("----------------------------------------------");
    printf("\n        ~ ~  By John Valinsky  ~ ~ \n");
    printf("----------------------------------------------\n");


    // Prompt the user for the .exe file
    printf("Enter the name of the .exe file: ");
    scanf(" %[^\n]s", exeFile);

    // Prompt the user for the .manifest file
    printf("Enter the name of the .manifest file (e.g., app.manifest): ");
    scanf(" %[^\n]s", manifestFile);

    // Construct the mt.exe command with quotes
    snprintf(command, sizeof(command), "mt.exe -manifest \"%s\" -outputresource:\"%s\";1", manifestFile, exeFile);

    // Execute the command
    printf("Executing command: %s\n", command);
    int result = system(command);

    // Check the result
    if (result == 0) {
        printf("Command executed successfully.\n");
    } else {
        printf("Error executing command. Make sure mt.exe is installed and the files are correct.\n");
    }

    return 0;
}
