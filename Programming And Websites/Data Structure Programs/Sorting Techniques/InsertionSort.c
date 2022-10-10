#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int SelectionSort(int arr[],int n)
{
    int i,j,key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j]>key)
        {
            arr[j+1] =arr[j];
            j = j-1;
        }
        arr[j+1] = key;
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