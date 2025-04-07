//13. Write a program to create binary search tree with the elements {2,5,1,3,9,0,6) and perform inorder, preorder and post order traversal. 

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *left;
	struct node *right;
};

typedef struct node NODE;
NODE *root=NULL;

disp(struct node *ptr, int level)
{
	int i;
	if(ptr!=NULL)
	{
		disp(ptr->right, level+1);
		for(i=0; i<level; i++)
			printf(" ");
		printf("%2d\n",ptr->info);
		disp(ptr->left,level+1);
	}
	return 0;
}

void create(int item)
{
	NODE *newnode, *currptr, *ptr;
	newnode = (NODE *) malloc (sizeof(NODE));
	newnode -> info = item;
	newnode -> left = NULL;
	newnode -> right = NULL;
	if(root == NULL)
		root = newnode;
	else
	{
		currptr = root;
		while(currptr !=NULL)
		{
			ptr = currptr;
			currptr = (item > currptr -> info) ? currptr -> right : currptr -> left;
		}
		if(item < ptr -> info)
			ptr -> left = newnode;
		else
			ptr -> right = newnode;
	}
}


void in_order(NODE * ptr)
{
	if(ptr)
	{
		in_order(ptr -> left);
		printf("%d", ptr -> info);
		in_order(ptr -> right);
	}
}


void pre_order(NODE *ptr)
{
	if(ptr)
	{
		printf("%d", ptr -> info);
		pre_order (ptr -> left);
		pre_order (ptr -> right);
	}
}

void post_order(NODE *ptr)
{
	if(ptr)
	{
		post_order (ptr -> left);
		post_order (ptr -> right);
		printf("%d", ptr -> info);
	}
}


void main()
{
	int item, ch, n, i;
	clrscr();
	while(1)
	{
		printf("\n Binary Search Tree Menu");
		printf("\n------------------------");
		printf("\n 1. Create");
		printf("\n 2. Display");
		printf("\n 3. Preorder");
		printf("\n 4. Inorder");
		printf("\n 5. Postorder");
		printf("\n 6. Exit");
		printf("\n\n Enter your choice: ");
		scanf("%d",&ch);
		clrscr();

		switch(ch)
		{
		case 1 : printf("\n Enter the Number of Nodes: ");
				scanf("%d",&n);
				for(i=0; i<n; i++)
				{
					printf("\n Enter the data for the node: ");
					scanf("%d",&item);
					create(item);
				}
				break;


		case 2 : printf("\n The Binary Tree Nodes are:\n\n\n\n");
				 disp(root,1);
				 break;

		case 3 : printf("\n Preorder traverrsal is: ");
				 pre_order(root);
				 break;

		case 4 : printf("\n Inorder traverrsal is: ");
				 in_order(root);
				 break;

		case 5 : printf("\n Postorder traverrsal is: ");
				 post_order(root);
				 break;

		case 6 : exit(1);
		}

	}
}

