#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

// Function Prototypes
int LENGTH(const char *str);
void CONCAT(char *str1, const char *str2);
void SUBSTR(const char *str, int pos, int len);
void REPLACE(const char *str, const char *substr, const char *replacestr);

int LENGTH(const char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

void CONCAT(char *str1, const char *str2) {
    strcat(str1, str2);
    printf("\nConcatenated String: %s\n", str1);
}

void SUBSTR(const char *str, int pos, int len) {
    int strLen = strlen(str);
    if (pos < 1 || pos > strLen || len < 1 || (pos - 1 + len) > strLen) {
        printf("\nInvalid Position or Length for Substring.\n");
        return;
    }

    char sub[50];
    strncpy(sub, str + pos - 1, len);
    sub[len] = '\0';
    printf("\nSubstring: %s\n", sub);
}

void REPLACE(const char *str, const char *substr, const char *replacestr) {
    char result[MAX_LEN] = "";
    const char *pos = strstr(str, substr);

    if (pos == NULL) {
        printf("\n'%s' is not found in '%s'\n", substr, str);
        return;
    }

    // Copy characters before substring
    strncpy(result, str, pos - str);
    result[pos - str] = '\0';

    // Concatenate replacement string
    strcat(result, replacestr);

    // Concatenate remaining string after substring
    strcat(result, pos + strlen(substr));

    printf("\nModified String: %s\n", result);
}

int main() {
    char str1[MAX_LEN], str2[MAX_LEN], substr[50], replacestr[50];
    int choice, pos, len;

    while (1) {
        printf("\n========== STRING OPERATIONS ==========\n");
        printf("1. Find Length of a String\n");
        printf("2. Concatenate Two Strings\n");
        printf("3. Extract a Substring\n");
        printf("4. Replace a Word in a String\n");
        printf("5. Exit\n");
        printf("=======================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline from previous input

        switch (choice) {
            case 1:
                printf("\nEnter the string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline
                printf("Length of string: %d\n", LENGTH(str1));
                break;

            case 2:
                printf("\nEnter the first string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter the second string: ");
                fgets(str2, MAX_LEN, stdin);
                str2[strcspn(str2, "\n")] = '\0';

                CONCAT(str1, str2);
                break;

            case 3:
                printf("\nEnter the string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter the starting position: ");
                scanf("%d", &pos);
                printf("Enter the length of substring: ");
                scanf("%d", &len);
                getchar();

                SUBSTR(str1, pos, len);
                break;

            case 4:
                printf("\nEnter the original string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter the word to replace: ");
                fgets(substr, sizeof(substr), stdin);
                substr[strcspn(substr, "\n")] = '\0';

                printf("Enter the new word: ");
                fgets(replacestr, sizeof(replacestr), stdin);
                replacestr[strcspn(replacestr, "\n")] = '\0';

                REPLACE(str1, substr, replacestr);
                break;

            case 5:
                printf("\nExiting program. Goodbye!\n");
                exit(0);

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}
