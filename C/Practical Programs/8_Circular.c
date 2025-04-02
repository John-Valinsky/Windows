// 8. Write a program to inert the elements {5,7,0,0,3,9} into circular queue and delete 6,9&5 from it(using linked 
// Write a Program to implement a Circular Queue Using Linked List

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>

struct queue
{
		int info;
		struct queue *link;
};

struct queue *front = NULL,*rear = NULL;

void QInsert(int item)
{
	struct queue *new_node;
	new_node = (struct queue*)malloc(sizeof(struct queue));
	new_node->info = item;
	new_node->link =NULL;
	
	if(front == NULL && rear == NULL)
	{
		front = rear = new_node;
		rear->link = front;
	}
	else
	{
		rear->link = new_node;
		rear = new_node;
		rear->link=front;
	}
}

void QDelete()
{
	struct queue *ptr;
	ptr = front;

	if(front == NULL && rear == NULL)
		printf("\n Queue is Empty");
	else if(front == rear) 
	{
		front=rear=NULL;
		printf("\n The value being deleted is: %d", ptr->info);
		free(ptr);
	}
	else
	{
		front = front->link;
		rear->link = front;
		printf("\n The value being deleted is: %d", ptr->info);
		free(ptr);
	}

}

void Display()
{
	struct queue *ptr;
	ptr = front;

	if(front == NULL && rear == NULL)
		printf("\n The Queue is Empty");
	else
	{
		printf("\n The Queue Elements are: ");
		do
		{
			printf(" %d", ptr->info);
			ptr = ptr->link;
		}
		while(ptr != front);
	}
}

void main()
{
	int val, choice;
	clrscr();

	do
	{
		printf("\n\n ****MAIN MENU****\n");
		printf("\n 1. Insert");
		printf("\n 2. Delete");
		printf("\n 3. Display");
		printf("\n 4. Exit\n");
		printf("\n Enter your option: ");
		scanf("%d",&choice);
		clrscr();
		switch(choice)
		{
		case 1: printf("\n Enter the number to insert into Queue: ");
				scanf("%d",&val);
				QInsert(val);
				break;

		case 2: QDelete();
				break;

		case 3: Display();
				break;
		}
	}
	while(choice !=4);
	getch();
}