#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
    char choice;

    while (1)
    {
        system("cls");

        printf("\n\t            SYSTEM RESTART ");
        printf("\n\t-------------------------------------\n");
        printf("\t x-x-x-x-| By John Valinsky |x-x-x-x");
        printf("\n\t-------------------------------------\n");

        printf("\n\tDo you want to restart the system?");
        printf("\n\n\tEnter 'Y' for Yes or 'N' for No : ");
        scanf(" %c", &choice);

        choice = toupper(choice);   // convert y/n to Y/N

        printf("\n\t-------------------------------------\n");

        if (choice == 'N')
        {
            getch();
            break;
        }
        else if (choice == 'Y')
        {
            printf("\n\tPress ENTER to restart...");
            getch();

            system("shutdown -r -t 0");
            break;
        }
        else
        {
            printf("\n\tInvalid input!");
            printf("\n\tPlease press any key and try again...");
            getch();
        }
    }

    return 0;
}
