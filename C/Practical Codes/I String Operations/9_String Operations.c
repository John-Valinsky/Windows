// 9. Given S1={"Flowers"} ; S2={"are beautiful"},
// a) Find the length of Si.
// b) Concatenate Si and S2. 
// c) Extract the substring "low" from Si. 
// d) Find "are" in S2 and replace it with "is".

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int LENGTH(char *str) {
    int i=0;
    while(str[i] !='\0')
	i++;
    return i;
}

void CONCAT(char *str1, char *str2) {
    int i=0, j=0;
    while(str1[i]!='\0')
	i++;
    while(str2[j]!='\0') {
	str1[i]=str2[j];
	i++;
	j++;
    }
    // Append '\0' to the end of the first string
    str1[i]='\0';
}

void SUBSTR(char str[], int pos, int len)
{
    char sub[50];
    int slen = strlen(str);
    int j, max_ext;

    if(pos <= 0 || pos > slen || len <= 0)
    {
	printf("\n Invalid Position or Substring Length ");
	return;
    }

    max_ext = slen - pos + 1;
    if(len > max_ext)
    {
	printf("\n Invalid Substring Length ");
	return;
    }

    for(j = 0; j < len; j++)
    {
	sub[j] = str[pos - 1 + j];
    }
    sub[j] = '\0';

    printf("\n Substring = %s", sub);
}

void REPLACE(char str[], char substr[], char replacestr[])
{
    char output[50];
    int i=0, j=0, flag=0, start=0;

    // To check whether substring present in a string or not
    while(str[i] != '\0')
    {
	if (str[i] == substr[j])
	{
	    if(!flag)
		start = i;
	    j++;
	    if(substr[j] == '\0')
		break;
	    flag = 1;
	}
	else
	{
	    flag = start = j = 0;
	}
	i++;
    }
    if(substr[j] == '\0' && flag)
    {
	for(i=0; i<start; i++)
	    output[i] = str[i];
	// Replace substring with another string
	for(j=0; j<strlen(replacestr); j++)
	{
	    output[i] = replacestr[j];
	    i++;
	}
	// Copy remaining portion of the input string "str"
	for(j = start + strlen(substr); j< strlen(str); j++)
	{
	    output[i] = str[j];
	    i++;
	}
	// Print the final string
	output[i] = '\0';
	printf("\n Output: %s\n", output);
    }
    else
	printf("\n %s is not a substring of %s\n", substr, str);
}

int main()
{
    char str1[50], str2[50], substr[50], repstr[50];
    int len, pos, ch;
    clrscr();

    while(1)
    {
	printf("\n****************************");
	printf("\n 1.String Operations");
	printf("\n 2.String Concatenation");
	printf("\n 3.Extracting Substring");
	printf("\n 4.Replace a String");
	printf("\n 5.Exit");
	printf("\n****************************\n");
	printf("\n Enter your choice:  ");
	scanf("%d",&ch);
	fflush(stdin);
	clrscr();

	switch(ch)
	{
	    case 1: printf("\n Enter the String: ");
		    scanf("%s",&str1);
		    printf("\n The length of a String: %d", LENGTH(str1));
		    break;

	    case 2: printf("\n Enter the First String: ");
		    scanf("%s",&str1);
		    printf("\n Enter the Second String: ");
		    scanf("%s",&str2);
		    CONCAT(str1, str2);
		    printf("\n Concatenated String: %s",str1);
		    break;

	    case 3: printf("\n Enter the String: ");
		    scanf("%s",&str1);
		    printf("\n Enter the Position of a Substring: ");
		    scanf("%d",&pos);
		    printf("\n Enter the Length of a Substring: ");
		    scanf("%d",&len);
		    SUBSTR(str1,pos,len);
		    break;

	    case 4: printf("\n Enter the String: ");
		    scanf("%s",&str1);
		    printf("\n Enter the string to be removed: ");
		    scanf("%s",&substr);
		    printf("\n Enter the string to replace: ");
		    scanf("%s",&repstr);
		    REPLACE(str1, substr, repstr);
		    break;

	    case 5: exit(0);

	    default: printf("\n Invalid Option");
		     break;
	}

	getch();
    }
}
