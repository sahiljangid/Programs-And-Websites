#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int pindex = s+1;

    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    int temp;
    temp = arr[s];
    arr[s] = arr[pindex-1];
    arr[pindex-1] = temp;

    return pindex-1;
}

void QuickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = Partition(arr, s, e);
        QuickSort(arr, s, p - 1);
        QuickSort(arr, p + 1, e);
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements one by one : \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    QuickSort(arr, 0, size-1);

    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}