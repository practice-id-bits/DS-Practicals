#include <stdio.h>

int SMALLEST(int arr[], int i, int n)
{
    int smallest = arr[i];
    int pos = i;

    for (int j = i + 1; j < n; j++)
    {
        if (smallest > arr[j])
        {
            smallest = arr[j];
            pos = j;
        }
    }
    return pos;
}

void SELECTION_SORT(int arr[], int n)
{
    int pos;

    for (int i = 0; i < n - 1; i++)
    {

        pos = SMALLEST(arr, i, n);

        if (pos != i)
        {
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    SELECTION_SORT(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}