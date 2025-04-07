// 1. Given {4,7,3,2,1,7,9,0, find the location of 7 using Binary search and also display its first occurrence. 

#include<stdio.h>
#include<conio.h>

int binsearch(int A[], int n, int key)
{
	int first, last, mid;
	first 	= 0;
	last 	= n-1;
	while (first<=last)
	{
		mid = (first + last)/2;
		if(key==A[mid])
			return mid;
		else if (key < A[mid])
			last = mid -1;
		else
			first = mid + 1;
	}
	return -1;
}

void main()
{
	int A[20], n, i, key, pos;
	clrscr();

	printf("\n Enter Number of Elements: ");
	scanf("%d", &n);

	printf("\n Enter Elements of an Array in Ascending Order \n\n");
	for(i = 0; i < n; i++)
	{
		printf(" Enter Element %d: ", i+1);
		scanf("%d",&A[i]);
	}
	printf("\n Enter an Element to be Searched: ");
	scanf("%d",&key);

	pos=binsearch(A,n,key);

	if(pos==-1)
		printf("\n The element %d is not found in Array \n",key);
	else
		printf("\n The element %d is found at Position %d \n", key, pos+1);

	getch();
}




