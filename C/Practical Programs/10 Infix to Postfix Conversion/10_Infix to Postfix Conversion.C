// 10. Write a program to convert an infix expression x^y/(5*2)+2 to its postfix expression. Converting Infix to Postfix

#include<stdio.h>
#include<string.h>
#define MAX 20
char s[MAX];
int top=0;

int precedence(char elem);
void push(char elem);
int pop();
void main()
{
	char infix[MAX], postfix[MAX],ch,elem;
	int i=0,j=0;

	clrscr();
	printf("\n\t\t Program to Convert Infix to Postfix Expression");
	printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n Enter the infix expression: ");
	scanf("%s", infix);
	push('#');

	for(i=0; i<strlen(infix); i++)
	{
		ch=infix[i];
		if(isalnum(ch))
			postfix[j++]=ch;
		else if(ch=='(')
			push(ch);
		else if(ch==')')
		{
			while(s[top]!='(')
				postfix[j++] = pop();
			      //elem = pop();
		}
		else
		{
			while(precedence(s[top]) >= precedence(ch))
			postfix[j++] = pop();
			push(ch);
		}
	}


	while(s[top] != '#')
	postfix[j++]=pop();
	postfix[j]='\0';
	printf("\n Postfix Expression Converion is: %s",postfix);

getch();
}
int precedence(char elem)
{
	switch(elem)
	{
	case '+':
	case '-': return(1);
	case '*':
	case '/': return(2);
	case '^': return(3);
	case '(':
	case '#': return(0);
	}
	return 0;
}

void push(char elem)
{
	++top;
	s[top]=elem;
}

int pop()
{
	char elem;
	elem=s[top];
	--top;
	return(elem);
}