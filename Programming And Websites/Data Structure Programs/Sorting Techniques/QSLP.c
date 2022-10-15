#include <stdio.h>

int Partition(int arr[], int first, int last)
{
    int k = arr[last];
    int i = first - 1;
    int j = last + 1;
    do
    {
        do
        {
            i++;
        } while (arr[i] < k);

        do
        {
            j--;
        } while (arr[j] >= k);

        if (i < j)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    int temp;
    temp = arr[i];
    arr[i] = arr[last];
    arr[last] = temp;
    return i;
}

void QS(int arr[], int first, int last)
{
    if (first < last)
    {
        int p = Partition(arr, first, last);
        QS(arr, first, p - 1);
        QS(arr, p + 1, last);
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Elements one by one: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your Array Elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    QS(arr, 0, size - 1);

    printf("\nYour Sorted Array Elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}