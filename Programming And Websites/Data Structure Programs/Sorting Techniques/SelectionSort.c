#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp;
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
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

    SelectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}