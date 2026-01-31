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
