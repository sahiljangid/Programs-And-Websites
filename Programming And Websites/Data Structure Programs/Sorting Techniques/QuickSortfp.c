#include<stdio.h>
#include<conio.h>

int Partition(int arr[], int first, int last)
{
    int x = arr[first];
    int i = first;
    for (int j = first+1; j <= last; j++)
    {
        if (arr[j] <= x)
        {
            i = i + 1;
			int temp;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
        }
    }
    int temp;
    temp = arr[i];
    arr[i] = arr[first];
    arr[first] = temp;
    return i; 
    
}



void QuickSort(int arr[], int first, int last)
{
    if (first<last)
    {
        int p = Partition(arr,first,last);
        QuickSort(arr,first,p-1);
        QuickSort(arr,p+1,last);
    }
    
}





int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d Elements one by one: \n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Your Entered Array Is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    QuickSort(arr,0,size-1);

    printf("\n\nYour Sorted Array Is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }    
}