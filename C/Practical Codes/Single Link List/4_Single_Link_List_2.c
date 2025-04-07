#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int INFO;
 struct node *LINK;
};
typedef struct node NODE;
NODE *start=NULL;

void create()
{
 int i=0;
 char ch;
 NODE *CURRPTR,*NEWNODE;
 CURRPTR=(NODE*)malloc(sizeof(NODE));
 start=CURRPTR;
 while(1)
 {
  printf("\n\n Enter the node %d: ",i+1);
  scanf("%d",&CURRPTR->INFO);
  printf("\n\n Do you wish to insert more node(Y/N): ");
  ch=getch();
  if(toupper(ch)=='Y')
  {
   NEWNODE=(NODE*)malloc(sizeof(NODE));
   CURRPTR->LINK=NEWNODE;
   CURRPTR=NEWNODE;
  }
  else
  {
   CURRPTR->LINK=NULL;
   break;
  }
  i++;
 }
}
void display()
{
 NODE *CURRPTR=start;
 if(start==NULL)
  printf("\n The linked list is empty");
 else
 {
  while(CURRPTR!=NULL)
  {
   printf("%d", CURRPTR->INFO);
   printf("->");
   CURRPTR=CURRPTR->LINK;
  }
  printf("NULL");
 }
}
void delete_item(int item)
{
 NODE *CURRPTR=start,*PREVPTR=NULL;
 if(start==NULL)
 {
  printf("\n The linked list id empty");
  return;
 }
 else if (start->INFO==item)
 {
  start=start->LINK;
  free(CURRPTR);
  return;
 }
 else
 {
  while (CURRPTR !=NULL && CURRPTR->INFO!=item)
  {
   PREVPTR=CURRPTR;
   CURRPTR=CURRPTR->LINK;
  }
  if(CURRPTR==NULL)
  {
   printf("\n The item is not found in the linked list");
  }
  else
   PREVPTR->LINK=CURRPTR->LINK;
 }
}
void main()
{
	int choose,item;
	 clrscr();
	 while(1)
	{
		printf("\n===========================");
		printf("\n Choose from the following:");
		printf("\n\n 1. Create Linked List");
		printf("\n 2. Display");
		printf("\n 3. Delete item");
		printf("\n 4. Exit");
		printf("\n===========================");
		printf("\n Choose by Number: ");
		scanf("%d",&choose);
		clrscr();

		switch(choose)
		{
			case 1: start=NULL;
				create();
				printf("\n\n ");
				display();
				break;

			case 2: display();
				break;

			case 3: printf("\n\n ");
				display();
				printf("\n\n Enter the item to be deleted: ");
				scanf("%d",&item);
				printf("\n Before deletion: ");
				display();
				delete_item(item);
				printf("\n After Deletion: ");
				display();
				break;

			case 4: exit(0);
		}
	}
}