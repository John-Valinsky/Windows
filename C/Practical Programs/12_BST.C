// Program to Create Binary Search Tree 
// and Performs Insert and Delete Operations using Linked List

#include<stdio.h>
#include<conio.h>

struct node
{
	int info;
	struct node *left;
	struct node *right;
};

typedef struct node NODE;
NODE *root=NULL;

// Include disp() code from example 8.2
// Include create() code from example 8.6

// Inorder successor in BST will be key in right subtree

NODE *getInSuccessor(NODE *ptr)
{
	while(ptr->left != NULL)
		ptr = ptr->left; // This will give the minimum key
		return ptr;
}

NODE * deletion(NODE *p, int item)
{
	NODE *temp;
	if(!p)
	{
		printf("Unable to delete. No such key exists. \n");
		return p;
	}
	else if(item > p->info)
		p->right = deletion(p->right, item);
	else if(item < p->info)
		p->left = deletion(p->left, item);

	// Execution else means got the key

	else
	{
		// Node has one child or no child

		if(p->left == NULL)
		{
			temp = p->right;
			free(p);
			return temp;
		}
		else if(p->right == NULL)
		{
			temp = p->left;
			free(p);
			return temp;
		}

		// Node with two children, interchange with inorder successor

		temp = getInSuccessor(p->right);
		p->info = temp->info;

		// Delete the inorder successor
		p->right = deletion(p->right, temp->info);
	}
	return p;
}




void create (int item)
{
	NODE *newnode, *currptr, *ptr;
	newnode = (NODE *) malloc (sizeof(NODE));
	newnode->info = item;
	newnode->left = NULL;
	newnode->right = NULL;

	if(root == NULL)
		root = newnode;
	else
	{
		currptr = root;
		while(currptr != NULL)
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



void main()
{
	int item, ch, n, i;
	clrscr();
	while(1)
	{
		clrscr();
		printf("\n Binary Searcch Tree Menu");
		printf("\n -------------------------");
		printf("\n 1. Insert");
		printf("\n 2. Delete");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n\n Enter the choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\n Enter the Number of Nodes: ");
					scanf("%d",&n);

					for(i=0; i<n; i++)
					{
					printf("\n Enter the data for the node: ");
					scanf("%d",&item);
					create(item);
					}
					break;

			case 2: printf("\n Enter an Item to be deleted: ");
					scanf("%d",&item);
					root=deletion(root, item);
					disp(root, 1);
					break;

			case 3: printf("\n The Binary Tree nodes are: \n\n\n\n");
					disp(root, 1);
					break;

			case 4: exit(1);
		}
	getch();
	}

}


disp(struct node *ptr,int level)
{
	int i;
	if(ptr != NULL)
	{
		disp(ptr -> right, level+1);
		for(i=0; i<level; i++)
			printf("   ");
		printf("%2d \n",ptr->info);
		disp(ptr->left,level+1);
	}
	return 0;
}