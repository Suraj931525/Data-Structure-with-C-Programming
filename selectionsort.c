#include<stdio.h>
void selectionsort(int arr[],int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min_index=i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index=j;
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);
    selectionsort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}