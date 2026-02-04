#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ANSI escape codes for color
#define PURPLE "\033[0;35m"
// White color escape code
#define WHITE "\033[0;97m"
#define RESET_COLOR "\033[0m"


int main()
{

// Change the cmd window color to purple
// system("color 05");
    printf("\033[1;32m"); // Set text color to green

    printf("\n  .o88b.  .d88b.  d8b   db        d88888b d888888b ");
    printf("\n d8P  Y8 .8P  Y8. 888o  88        88'       `88'   ");
    printf("\n 8P      88    88 88V8o 88        88ooo      88    ");
    printf("\n 8b      88    88 88 V8o88 C8888D 88~~~      88    ");
    printf("\n Y8b  d8 `8b  d8' 88  V888        88        .88.   ");
    printf("\n  `Y88P'  `Y88P'  VP   V8P        YP      Y888888P \n");

    printf("\n               ~ ~  John Valinsky  ~ ~");
    printf("\n                 ~ | Version 1.0 | ~");

    printf("\033[0m"); // Reset text color to default
    printf("\n");

    printf("\n=====================================================\n");

    char WiFiList[2000]; // Assuming a maximum of 2000 characters for the list
    char profileName[100]; // Assuming a maximum of 100 characters for the profile name

    // Execute netsh command to list available WiFi profiles and capture the output
    FILE *pipe = _popen("netsh wlan show profile", "r");
    if (!pipe)
    {
        printf("Error executing 'netsh wlan show profile' command.\n");
        return 1;
    }

    // Read and display the WiFi names
    printf("\t\tAvailable WiFi Profiles:\n\n");
    while (fgets(WiFiList, sizeof(WiFiList), pipe) != NULL)
    {
        if (strstr(WiFiList, "All User Profile"))
        {
            printf("%s", WiFiList + 27); // Display WiFi name starting from the 27th character
        }
    }

    _pclose(pipe);

    printf("=====================================================\n");

    printf("\033[1;31m"); // Set text color to red

    // Ask the user for the WiFi profile name
    printf("\nEnter the WiFi profile name: ");
    fgets(profileName, sizeof(profileName), stdin);
    // Remove the trailing newline character
    profileName[strcspn(profileName, "\n")] = '\0';

    // Construct the netsh command with the provided profile name
    char command[200]; // Assuming a maximum of 200 characters for the command
    snprintf(command, sizeof(command), "netsh wlan show profile name=\"%s\" key=clear", profileName);

    // Execute the netsh command and capture the output
    pipe = _popen(command, "r");
    if (!pipe)
    {
        printf("Error executing 'netsh wlan show profile' command.\n");
        return 1;
    }

    // Read and display only the "Security settings" section of the WiFi profile
    int securitySettingsFound = 0; // Flag to indicate if security settings are found
    while (fgets(WiFiList, sizeof(WiFiList), pipe) != NULL)
    {
        if (strstr(WiFiList, "Security settings"))
        {
            securitySettingsFound = 1;
            printf("%s", WiFiList); // Print the section header
        }
        else if (securitySettingsFound) {
            // Continue printing lines within the "Security settings" section
            printf("%s", WiFiList);
        }
    }

    _pclose(pipe);

    if (!securitySettingsFound)
    {
        printf("Security settings not found for the selected WiFi profile.\n");
    }

    getch();

    printf("\033[0m"); // Reset text color to default

    return 0;
}

