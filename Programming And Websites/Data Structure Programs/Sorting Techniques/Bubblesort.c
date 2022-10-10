#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int BubbleSort(int arr[], int n)
{
    int i, j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    BubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}