#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top;

void push()
{
    int item;
    printf("Enter data : ");
    scanf("%d", &item);
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Overflow!\n\n");
    }
    else
    {
        temp->data = item;
        temp->link = top;
        top = temp;
        printf("Data Inserted!\n\n");
    }
}


void pop()
{
    struct node *ptr;
    ptr = top;
    if(ptr == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        ptr = top;
        top = ptr->link;
        free(ptr);
        printf("Node Deleted Successfully\n\n");
    }
}




void isEmpty()
{
    struct node *ptr;
    ptr = top;
    if (ptr == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}


void peek()
{
    struct node *ptr;
    ptr = top;
    if (ptr == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        printf("Top element is: %d\n",top->data);
    }
}





void display()
{
    struct node *ptr;
    ptr = top;

    if (ptr == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        printf("Head--->");
        while (ptr != NULL)
        {
            printf("[%d][%d]", ptr->data, ptr->link);
            if (ptr->link != NULL)
            {
                printf("--->");
            }
            ptr = ptr->link;
        }
        printf("\n\n");
    }
}


int main()
{
    printf("***********************INSTRUCTIONS***********************\n");

    while (1)
    {
        int choice;
        printf("1.Push\n2.Pop\n3.isEmpty\n4.Peek top element\n5.Print Stack\n6.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            peek();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}