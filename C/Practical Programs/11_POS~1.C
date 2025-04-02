// 11. Write a program to evaluate a postfix expression 53+82-*.
// Postfix | Input: 53+82-* | Output: 48

#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 20

int s[MAX], top=0;

void main()
{
	char postfix[MAX],ch;
	int i,op1,op2,res;
	clrscr();

	printf("\n\t\t Program to Evaluate Postfix Expression\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	printf("\n Enter the postfix expression: ");
	scanf("%s",&postfix);

	for(i=0; i<strlen(postfix); i++)
	{
		ch=postfix[i];
		if(isdigit(ch))
		
			push(ch -'0');
		
		else
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case '+' : res = op1 + op2; break;
				case '-' : res = op1 - op2; break;
				case '*' : res = op1 * op2; break;
				case '/' : res = op1 / op2; break;
				case '^' : res = pow(op1,op2); break;

				default  : printf("\n Invalid Character \n");
			}
			push(res);
		}
	}
				printf("\n Result of above expression is: %d \n",pop());

getch();
}

push(int element)
{
	++top;
	s[top]=element;
	return 0;
}

int pop()
{
	int element;
	element = s[top];
	--top;
	return(element);
}