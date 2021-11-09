#include <stdio.h>

void SelectionSort(int arr[], int i, int j, int len, int flag)
{
    if (i < len - 1) {
        if (flag)
            j = i + 1;

        if (j < len) {
            if (arr[i] > arr[j]) 
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
            SelectionSort(arr, i, j + 1, len, 0);
        }
        SelectionSort(arr, i + 1, 0, len, 1);
    }
}

int main()
{
    int arr[] = {40,50,12,30,90,18,6,60};
    int i = 0;

    printf("Array before sorting: \n");
    for (i = 0; i < 8; i++)
        printf("%d  ", arr[i]);

    SelectionSort(arr, 0, 0, 5, 1);

    printf("\nArray after sorting: \n");
    for (i = 0; i < 8; i++)
        printf("%d  ", arr[i]);

    printf("\n");

    return 0;
}
