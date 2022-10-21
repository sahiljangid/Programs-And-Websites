#include<stdio.h>
#include<conio.h>


void merge(int arr[], int first,int p, int last)
{
    int n1 = p-first+1;
    int n2 = last-p;

    int L[n1],R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[first+i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[p+1+j];
    }
    int i = 0, j = 0, k = first;

    while (i<n1&&j<n2)
    {
        if (L[i]<=R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
        
    }

    while (i<n1)
    {
        arr[k++] = L[i++];
    }
    while (j<n2)
    {
        arr[k++] = R[j++];
    }
}










void ms(int arr[], int first, int last)
{
    if (first<last)
    {
        int p = (first + last)/2;
        ms(arr,first,p);
        ms(arr,p+1,last);
        merge(arr,first,p,last);
    }
    
}








int main()
{
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d Elements one by one : \n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }

    ms(arr,0,size-1);
    
    printf("\nYour Sorted Array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }



    return 0;
}