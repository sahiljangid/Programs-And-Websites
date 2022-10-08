#include <stdio.h>
#include <stdlib.h>

int ls(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("Element founded at position: %d\n", i + 1);
            continue;
        }
        else
        {
            printf("");
        }
    }
}
int main()
{
    int length;
    printf("Enter size of array: ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter %d Elements one by one : \n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements is : \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    int x;
    printf("Enter an number for search: ");
    scanf("%d", &x);
    ls(arr, length, x);
    return 0;
}