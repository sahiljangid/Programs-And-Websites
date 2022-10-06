#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int stk_arr[MAX];
int top = -1;

int Push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        stk_arr[top] = data;
        printf("%d Element Inserted Successful.\n", data);
    }
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
}

int Pop()
{
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        int item;
        item = stk_arr[top];
        top--;
        printf("%d Element deleted successfully.\n", item);
    }
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
}

int Peek()
{
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
    printf("%d Element is the top of the stack.\n", stk_arr[top]);
}

int isFull()
{
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full.\n");
    }
    
}

int isEmpty()
{
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        printf("Stack is not empty.\n");
    }
}

int size()
{
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
    printf("Elements availabel in stack : %d \n", top + 1);
}

int Print()
{
    int i;
    // int length = sizeof(stk_arr)/sizeof(stk_arr[0]);
    if (top == -1)
    {
        printf("Stack Is Empty.\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("|%d|\n", stk_arr[i]);
        }
        printf("````");
        printf("\n");
    }
}

int main()
{
    printf("***********************INSTRUCTIONS***********************\n");
    int choice, item;

    while (1)
    {

        printf("1.Push\n2.Pop\n3.Peek Top Element.\n4.Check Full?\n5.Check Empty\n6.Stack Size\n7.Print Stack\n8.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            printf("Enter Data: ");
            scanf("%d", &item);
            Push(item);

            break;

        case 2:
            Pop();
            break;

        case 3:
            Peek();
            break;
        case 4:
            isFull();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            size();
            break;
        case 7:
            Print();
            break;
        case 8:
            exit(0);
            break;

        default:
            printf("Enter valid Number\n");
            break;
        }
    }
    return 0;
}