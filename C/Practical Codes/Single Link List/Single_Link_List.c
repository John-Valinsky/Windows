4. Write a program to insert the elements 61,16,8,27 into singly linked list and delete 8,61,27 from the list. 

#include<stdio.h>
#include<conio.h>

void Merge(int A[10], int low, int mid,int high)
{
    int i,j,k,c[10];
    i=low;
    k=low;
    j=mid+1;

    while((i<=mid) && (j<=high))
    {
	if(A[i] <= A[j])
	{
	    c[k]=A[i];
	    i++;
	    k++;
	}
	else
	{
	    c[k] = A[j];
	    j++;
	    k++;
	}

    }

    while(i<=mid)
    {
	c[k] = A[i];
	k++;
	i++;
    }

    while(j<=high)
    {
	c[k]=A[j];
	k++;
	j++;
    }

    for(i=low; i<=k-1; i++)
    A[i]=c[i];
}
void MergeSort(int A[10], int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MergeSort(A,low,mid);
	   MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}

void main()
{
    int i, n, A[10];
    clrscr();

    printf("\n Enter the number of elements of array: ");
    scanf("%d",&n);

    printf("\n Enter the elements of the array: ");
    for(i=0; i<n; i++)
	scanf("%d",&A[i]);

    MergeSort(A,0,n-1);

    printf("\n Sorted list of elements: ");
    for(i=n-1; i>=0; i--)
	printf(" %d", A[i]);

    getch();
}

