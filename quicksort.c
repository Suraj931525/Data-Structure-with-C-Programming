#include <stdio.h>

// Swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition the array
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start + 1;

    for(int j = start + 1; j <= end; j++)
    {
        if(arr[j] < pivot)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    // Place pivot in correct position
    swap(&arr[start], &arr[i - 1]);

    return i - 1;
}

// Quick Sort
void quicksort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pivotIndex = partition(arr, start, end);

        quicksort(arr, start, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, end);
    }
}

// Print Array
void printarray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main Function
int main()
{
    int arr[] = {23, 45, 12, 67, 34, 89, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printarray(arr, size);

    quicksort(arr, 0, size - 1);

    printf("Sorted Array:\n");
    printarray(arr, size);

    return 0;
}