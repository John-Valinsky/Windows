// 14. Write a program to Sort the following elements using heap sort {9.16,32,8,4,1,5,8,0).

#include<stdio.h>

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2 * i+1;
	int right = 2 * i + 2;
	int temp;

	if(left < n && arr[left] > arr[largest])
		largest = left;

	if(right < n && arr[right] > arr[largest])
		largest = right;

	if(largest != i)
	{
		temp = arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		heapify(arr, n, largest);
	}  
}

void heapsort(int arr[], int n)
{
	int i, temp;
	for(i=n/2 -1; i >=0; i--)
		heapify(arr, n, i);

	for(i=n - 1; i>0; i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr, i, 0);
	}
}

int main()
{
	int arr[20];
	int n, i;
	clrscr();

	printf("\n Enter the size of the array: ");
	scanf("%d",&n);

	printf("\n Enter the elements: ");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	heapsort(arr, n);
		printf("\n Sorted array is: ");
	for(i=0; i<n; ++i)
		printf(" %d", arr[i]);

	getch();
	return 0;
}