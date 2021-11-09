#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionSort(int arr[], int n)
{
	int i, j, min_ind;

	
	for (i = 0; i < n-1; i++)
	{
		
		min_ind = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_ind])
			min_ind = j;

		
		swap(&arr[min_ind], &arr[i]);
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int arr[] = {40,50,12,30,40,18,6,60};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
