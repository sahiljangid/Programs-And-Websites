#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
struct node *head;


//Insertion------------->>>>>>>>>>>>

void InsertionAtBegnning()
{
    int item;
    printf("Enter data : ");
    scanf("%d",&item);
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    if(temp == NULL)
    {
        printf("Overflow!\n\n");
    }
    else
    {
        temp->data = item;
        temp->next = head;
        head = temp;
        printf("Node Inserted!\n\n");
    }


}


void InsertionAtSpecificLocation()
{
    struct node *temp, *ptr;
    int item, loc;
    printf("Enter Location : ");
    scanf("%d",&loc);
    printf("Enter data : ");
    scanf("%d",&item);
    temp = (struct node*)malloc(sizeof(struct node*));
    ptr = head;

    if(ptr == NULL)
    {
        printf("Can't Insert\n\n");
    }
    else
    {
        
        while(ptr->data != loc)
        {
            ptr = ptr->next;
        }
        if(ptr->next == NULL)
        {
            temp->data = item;
            ptr->next = temp;
            temp->next = NULL;
            printf("Node Inserted Successfully!\n\n");
        }
        else
        {
            temp->next = ptr->next;
            ptr->next = temp;
            temp->data = item;
            printf("Node Inserted Successfully!\n\n");
        }
        
    }

}


void InsertionAtEnd()
{
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    int item;
    printf("Enter data : ");
    scanf("%d",&item);

    if(head == NULL)
    {
        head = temp;
        temp->data = item;
        temp->next = NULL;
        printf("Node inserted successfully!\n\n");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->data = item;
        temp->next = NULL;
        printf("Node inserted successfully!\n\n");
    }
}


//Deletion-------------->>>>>>>>>>>>

void DeletionAtBegning()
{
    struct node *ptr;
    
    if(head == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("Node Deleted Successfully\n\n");
    }
}


void DeletionAtSpecificLocation()
{

    struct node *ptr;
    int loc;
    printf("Enter Location : ");
    scanf("%d",&loc);
    ptr = head;

    if(head->next == NULL)
    {
        head = NULL;
        printf("Node Deleted Successfully\n\n");
    }
    else if(ptr->next->next == NULL)
    {
        ptr->next = NULL;
        printf("Node Deleted Successfully\n\n");
    }
    else
    {
        
        while(ptr->next->data != loc)
        {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        printf("Node Deleted Successfully\n\n");
    }
}



void DeletionAtEnd()
{
    struct node *ptr, *ptrprev;
    ptr = head;
    if(head == NULL)
    {
        printf("List is Empty!");
    }
    else if(ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        printf("Node Deleted Successfully\n\n");
    }
    else
    {
        while(ptr->next != NULL)
        {
            ptrprev = ptr;
            ptr = ptr->next;
        }
        ptrprev->next = NULL;
        free(ptr);
        printf("Node Deleted Successfully\n\n");
    }

}




void display()
{
    struct node *ptr;
    ptr = head;
    
    if(ptr == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        printf("Head--->");
        while(ptr != NULL)
        {
            printf("[%d][%d]",ptr->data,ptr->next);
            if(ptr->next != NULL)
            {
                printf("--->");
            }
            ptr = ptr->next;

        }
        printf("\n\n");
    }
}



int main()
{
    printf("**************************Wel-Come**************************\n");
    int choice;

    do
    {
        printf("1.Insertion At Begnning\n2.Insertion At End\n3.InsertionAtSpecificLocation\n4.DeletionAtBegning\n5.DeletionAtEnd\n6.DeletionAtSpecificLocation\n9.Display Nodes\n0.Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            InsertionAtBegnning();
            break;
        case 2:
            InsertionAtEnd();
            break;
        case 3:
            InsertionAtSpecificLocation();
            break;
        case 4:
            DeletionAtBegning();
            break;
        case 5:
            DeletionAtEnd();
            break;
        case 6:
            DeletionAtSpecificLocation();
            break;
        case 9:
            display();
            break;

        
        default:
            break;
        }

    } while (choice != 0);
    
    return 0;

}