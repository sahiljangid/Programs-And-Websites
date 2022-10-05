#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

// Insert node at the begnning of the circular linked list
void InsertionAtBegnning()
{
    int item;
    printf("Enter data : ");
    scanf("%d", &item);
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr;
    ptr = head;

    if (head == NULL)
    {
        head = temp;
        temp->data = item;
        temp->next = temp;
        printf("Node Inserted!\n\n");
    }
    else
    {
        while (ptr->next->data != head->data)
        {
            ptr = ptr->next;
        }

        temp->data = item;
        temp->next = head;
        ptr->next = temp;
        head = temp;
        printf("Node Inserted!\n\n");
    }
}

// Insert Node at the end of the circular linked list
void InsertionAtEnd()
{
    int item;
    printf("Enter data : ");
    scanf("%d", &item);
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr;
    ptr = head;

    if (head == NULL)
    {
        head = temp;
        temp->data = item;
        temp->next = temp;
        printf("Node Inserted!\n\n");
    }
    else
    {
        while (ptr->next->data != head->data)
        {
            /* code */
            ptr = ptr->next;
        }
        temp->data = item;
        temp->next = ptr->next;
        ptr->next = temp;
        printf("Node Inserted!\n\n");
    }
}

// Insert an node at specific location in circular linked list
void InsertionAtSpecificLocation()
{
    struct node *temp, *ptr;
    int item, loc;
    printf("Enter Location : ");
    scanf("%d", &loc);
    printf("Enter data : ");
    scanf("%d", &item);
    temp = (struct node *)malloc(sizeof(struct node *));
    ptr = head;

    if (ptr == NULL)
    {
        printf("Can't Insert\n\n");
    }
    else
    {

        while (ptr->data != loc)
        {
            ptr = ptr->next;
        }
        if (ptr->next == head)
        {
            temp->data = item;
            temp->next = ptr->next;
            ptr->next = temp;
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

// Delete an node at begnning of the circular linked list
void DeletionAtBegnning()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else if (head->next == head)
    {
        /* code */
        head = NULL;
    }
    else
    {
        while (ptr->next->data != head->data)
        {
            /* code */
            ptr = ptr->next;
        }
        struct node *first;
        first = ptr->next;
        ptr->next = first->next;
        head = first->next;
        first->next = NULL;
        free(first);
        printf("Node Deleted Successfully\n\n");
    }
}

// Delete the node at the end of the circular linked list
void DeletionAtEnd()
{
    struct node *ptr, *ptrprev;
    ptr = head;
    if (head == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else if (head->next == head)
    {
        /* code */
        head = NULL;
    }
    else
    {
        while (ptr->next->data != head->data)
        {
            /* code */
            ptrprev = ptr;
            ptr = ptr->next;
        }
        ptrprev->next = ptr->next;
        ptr->next = NULL;
        free(ptr);
        printf("Node Deleted Successfully\n\n");
    }
}


//Delete node at specific location in circular linked list

void DeletionAtSpecificLocation()
{
    struct node *ptr;
    int loc;
    ptr = head;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter Location : ");
        scanf("%d", &loc);
        if (head->next == head)
        {
            head = NULL;
            printf("Node Deleted Successfully\n\n");
        }
        else
        {
            while (ptr->next->data != loc)
            {
                ptr = ptr->next;
            }
            if (ptr->next->next == head)
            {
                /* code */
                ptr->next = ptr->next->next;
            }
            else if (loc == head->data)
            {
                /* code */
                struct node *ptr2;
                ptr2 = head;

                while (ptr2->next->data != head->data)
                {
                    /* code */
                    ptr2 = ptr2->next;
                }
                head = head->next;
                ptr2->next = head;
            }

            else
            {
                ptr->next = ptr->next->next;
            }

            printf("Node Deleted Successfully\n\n");
        }
    }
}

// Dispaly Circular linked list
void display()
{
    struct node *ptr;
    ptr = head;

    if (head == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        printf("Head--->");
        do
        {
            printf("[%d][%d]", ptr->data, ptr->next);
            if (ptr->next != head)
            {
                printf("--->");
            }
            ptr = ptr->next;

        } while (ptr != head);
        printf("--->Head");
        printf("\n\n");
    }
}

int main()
{
    int choice;
    printf("********************* WEL-COME *********************\n");

    do
    {
        printf("-->1.Insertion At Begnning\n-->2.Insertion At End\n-->3.Insertion At Specific Location\n-->4.Deletion At Begning\n-->5.Deletion At End\n-->6.Deletion At Specific Location\n-->7.Display Nodes\n-->8.Exit!\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
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
            DeletionAtBegnning();
            break;

        case 5:
            DeletionAtEnd();
            break;

        case 6:
            DeletionAtSpecificLocation();
            break;

        case 7:
            display();
            break;

        default:
            break;
        }
    } while (choice != 8);

    return 0;
}