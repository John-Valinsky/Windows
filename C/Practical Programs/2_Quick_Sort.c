// 2. Given {5,3,1,6,0,2,4} order the numbers in ascending order using Quick Sort. 

#include<stdio.h>

void quicksort(int A[10], int low, int high)
{
	int j;
	if(low < high)
	{
		j=partiton(A,low,high);
		quicksort(A,low,j-1);
		quicksort(A,j+1,high);
	}
}

int partiton(int A[10], int low, int high)
{
	int pivot, j, temp, i;
	pivot	= low;
	i 		= low;
	j 		= high;
	while(i<j)
	{
		while(i<high && A[i]<=A[pivot])
			i++;
		while(A[j]>A[pivot])
			j--;
		if(i<j)
		{
			temp	= A[i];
			A[i] 	= A[j];
			A[j] 	= temp;
		}
	}

	temp 		= A[pivot];
	A[pivot] 	= A[j];
	A[j] 		= temp;
	return j; 
}

void main()
{
	int i, n, A[10];
	clrscr();

	printf("\n Enter the number of elements of array: ");
	scanf("%d",&A[i]);

	quicksort(A,0,n-1);

	printf("\n Sorted list of elements: ");
	for(i=0; i<n; i++)
		printf(" %d", A[i]);
	getch();
}