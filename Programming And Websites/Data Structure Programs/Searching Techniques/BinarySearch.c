#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int BinarySearch(int arr[], int left, int right, int k)
{

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == k)
        {
            printf("Element founded at position %d",mid+1);
            return mid;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("Element not founded\n");
    return -1;
}

int BubbleSort(int arr[], int n)
{
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
    int length;
    printf("Enter the size of array: ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter %d Elements one by one: \n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    BubbleSort(arr, length);
    printf("Sorted Array is:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    int k;
    printf("\nWhich element you want to search in array?\n");
    scanf("%d", &k);

    
    printf("\n");
    BinarySearch(arr, 0, length, k);
    
    
    return 0;
}