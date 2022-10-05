#include<stdio.h>

int main(int argc, char const *argv[])
{

    int a1[5] = {5, 63, 78, 45, 65};
    int i;
    //Traversing
    printf("Array Elements Are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ",a1[i]);
    } 

    //Insertion
    // printf("\nEnter position for you want to insert an element :\n");
    // int pos,element;
    // scanf("%d",&pos);
    // printf("Enter element : ");
    // scanf("%d",&element);
    // for(i = 4; i >= pos-1; i--)
    // {
    //     a1[i+1] = a1[i];
    // }
    // a1[pos-1] = element;
    // printf("After Insertion:\n");
    // for(i = 0; i < 6; i++);
    // {
    //     printf("%d ", a1[i]);
    // }



    //Deletion
    printf("After Deletion:\n");
    for(i = 0; i < 4; i++)
    {
        printf("%d ",a1[i]);
    }

    //Search
    printf("\nEnter Search Element:");
    int data, j = 0;
    scanf("%d",&data);
    while(j < 5)
    {
        if(a1[j] == data)
        {
            break;
        }

        j++;

    } 

    printf("Search Element %d are found at index %d", data, j+1);

    //Updation
    a1[2] = 80;
    printf("\nAfter Updation:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ",a1[i]);
    } 


    return 0;
}
