#include <stdio.h>
#include <conio.h>

int rear = -1;
int front = -1;


int enq(int arr[], int data,int n)
{
    if (rear == n)
    {
        printf("++++++++++Queue is full++++++++++\n");
    }
    else if (rear == -1 && front == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = data;
    printf("%d Element Inserted Successfull.\n", data);

    }
    else
    {
        rear = rear + 1;
        arr[rear] = data;
    printf("%d Element Inserted Successfull.\n", data);

    }
}

int deq(int arr[])
{
    int data;
    if (rear == -1 && front == -1)
    {
        printf("---------------Queue is empty---------------\n");
    }
    else if (rear == front)
    {
        data = arr[rear];
        rear = -1;
        front = -1;
        printf("%d Element Deleted Successful.\n", data);

    }
    else
    {
        data = arr[front];
        front++;
        printf("%d Element Deleted Successful.\n", data);
    }
}

void show(int arr[])
{
    int i;
    if (rear == -1 && front == -1)
    {
        printf("---------------Queue is empty---------------\n");
    }
    else
    {

        for (i = front; i <= rear; i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, data,size;
    
    printf("*************Wel-come to Linear Queue Program*************\n");
    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    int arr[size];
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Show Queue\n4.Exit\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data\n");
            scanf("%d", &data);
            enq(arr,data,size-1);
            break;
        case 2:
            deq(arr);
            break;
        case 3:
            show(arr);
            break;
        }
    } while (choice != 4);

    return 0;
}