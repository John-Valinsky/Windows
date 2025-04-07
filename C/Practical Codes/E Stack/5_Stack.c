// 6. Write a program to push 5,9,34,17,32 into stack and pop 3 times from the stack, also display the popped numbers. 

#include<stdio.h>
#include<conio.h>
#define MAXSTK 5

int TOP = -1;

int S[MAXSTK];

main()
{
	int choice;
	clrscr();

	while(1)
	{
		clrscr();
		printf("\n===============================\n");
		printf("\n1. Push \n");
		printf("\n2. Pop \n");
		printf("\n3. Display \n");
		printf("\n4. Quit \n");
		printf("\n===============================");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: push();
				break;

			case 2:	pop();
				break;

			case 3:  display();
				break;

			case 4:	exit(1);
				break;

			default: printf("\n Wrong Choice \n");
		}

	getch();
	}
}
push()
{
	int item;
	if(TOP == (MAXSTK-1))
		printf("\n Stack Overflow \n");

	else
	{
		printf("\n Enter the item to be pushed in stack: ");
		scanf("%d",&item);

		TOP = TOP+1;
		S[TOP] = item;
	}
	return 0;
}

pop()
{
	if(TOP == -1)
		printf("\n Stack Uderflow \n");
	else
	{
		printf("\n Popped element is: %d", S[TOP]);
		TOP = TOP-1;
	}
	return 0;
}

display()
{
	int i;
	if(TOP == -1)
		printf("\n Stack is empty \n");
	else
	{
		printf("\n Stack elements: ");
		for(i=TOP; i>=0; i--)
			printf("\n\n=> %d",S[i]);
	}
	return 0;
}