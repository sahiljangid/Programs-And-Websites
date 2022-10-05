#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;


void InsertionAtBegnning()
{
    int item;
    struct node *ptr;
    printf("++++++++> ENTER DATA: ");
    scanf("%d",&item);  
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    if (ptr == NULL)
    {   
        head = temp;
        temp->next = head;
        temp->data = item;
        temp->prev = temp;
        
        printf("++++++++++++++++ NODE CREATED SUCCESSFULLY ++++++++++++++++\n");
    }
    else
    {
        while (ptr->next->data != head->data)
        {
            ptr = ptr->next;
        }
        temp->data = item;
        head->prev = temp;
        temp->next = head;
        temp->prev = ptr;
        ptr->next = temp;
        head = temp;
        // free(ptr);
        printf("++++++++++++++++ NODE CREATED SUCCESSFULLY ++++++++++++++++\n");
    }
    
}



//Insert node at end of the linked list
void InsertionAtEnd()
{
    int item;
    struct node *ptr;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    ptr = head; 
    if(ptr == NULL)
    {
        printf("----------------- LIST IS EMPTY -----------------\n");
    }
    else
    {
        while (ptr->next->data != head->data)
        {
            ptr = ptr->next;
        }
        printf("++++++++> ENTER DATA: ");
        scanf("%d",&item); 
        temp->data = item;
        temp->next = ptr->next;
        ptr->next = temp;
        temp->prev = ptr;
        head->prev = temp;
        printf("++++++++++++++++ NODE CREATED SUCCESSFULLY ++++++++++++++++\n");
    }
}



//Insert node at specific location
void InsertionAtSpecificLocation()
{
    int item;
    struct node *ptr;  
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    if (ptr == NULL)
    {
        /* code */
        printf("----------------- LIST IS EMPTY -----------------\n");
    }
    else
    {
        int pos;
        printf("?????????????? CHOOSE YOUR POSITION ??????????????\n");
        scanf("%d", &pos);
        printf("++++++++> ENTER DATA: ");
        scanf("%d",&item);
        while (ptr->data != pos)
        {
            ptr = ptr->next;
        }
        if (ptr->next == head)
        {
            temp->data = item;
            temp->next = ptr->next;
            ptr->next = temp;
            temp->prev = ptr;
            head->prev = temp;
            printf("++++++++++++++++ NODE CREATED SUCCESSFULLY ++++++++++++++++\n");
        }
        else
        {
            temp->next = ptr->next;
            ptr->next->prev = temp;
            ptr->next = temp;
            temp->prev = ptr;
            temp->data = item;
            printf("++++++++++++++++ NODE CREATED SUCCESSFULLY ++++++++++++++++\n");
        }
    }
}



//Delete an node at begnning of linked list
void DeletionAtBegnning()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        /* code */
        printf("----------------- LIST IS EMPTY -----------------\n");
    }
    else if (ptr->next == head)
    {
        /* code */
        head = NULL;
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
    }
    else
    {

        struct node *ptr2;
        ptr2 = head; 
        while (ptr2->next->data != head->data)
        {
            ptr2 = ptr2->next;
        }

        ptr->next->prev = ptr2;
        head = ptr->next;
        ptr2->next = ptr->next;
        ptr->prev = NULL;
        ptr->next = NULL;
        free(ptr);
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
        
    }
    
    
}


//Delettion at end of the linked list
void DeletionAtEnd()
{
    struct node *ptr;
    ptr = head;

    if (ptr == NULL)
    {
        /* code */
        printf("----------------- LIST IS EMPTY -----------------\n");
    }
    else if (ptr->next == head)
    {
        /* code */
        head = NULL;
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
    }
    else
    {
        while (ptr->next->next->data != head->data)
        {
            /* code */
            ptr = ptr->next;
        }
        
        struct node *ptr2;
        ptr2 = head; 
        while (ptr2->next->data != head->data)
        {
            ptr2 = ptr2->next;
        }

        ptr->next = ptr2->next;
        head->prev = ptr;
        
        ptr2->prev = NULL;
        ptr2->next = NULL;
        free(ptr2);
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
    }
}


//Deletion at specific position in linked list
void DeletionAtSpecificLocation()
{
    struct node *ptr;
    ptr = head;

    if (ptr == NULL)
    {
        /* code */
        printf("----------------- LIST IS EMPTY -----------------\n");
    }
    else if (ptr->next == head)
    {
        /* code */
        head = NULL;
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
    }
    else
    {
        int pos;
        printf("?????????????? CHOOSE YOUR POSITION ??????????????\n");
        scanf("%d", &pos);

        while (ptr->data != pos)
        {
            /* code */
            ptr = ptr->next;
        }
        if (ptr->next == head)
        {
            /* code */
            struct node *ptr2;
            ptr2 = head; 
            while (ptr2->next->data != ptr->data)
            {
                ptr2 = ptr2->next;
            }
            
            ptr2->next = ptr->next;
            ptr->prev = NULL;
            ptr->next = NULL;
            free(ptr);
            head->prev = ptr2;
            printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
        }
        else if (ptr->prev == head->prev)
        {
            /* code */
            struct node *ptr2;
            ptr2 = head; 
            while (ptr2->next->data != head->data)
            {
                ptr2 = ptr2->next;
            }

            head = ptr->next;
            ptr2->next = ptr->next;
            ptr->next->prev = ptr2;
            ptr->next = NULL;
            ptr->prev = NULL;
            printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
        }
        else
        {
            struct node *ptr2;
            ptr2 = head; 
            while (ptr2->next->data != ptr->data)
            {
                ptr2 = ptr2->next;
            }
            
            struct node *ptr3;
            ptr3 = head; 
            while (ptr3->prev->data != ptr->data)
            {
                ptr3 = ptr3->next;
            }


            ptr2->next = ptr3;
            ptr3->prev = ptr2;
            ptr->next = NULL;
            ptr->prev = NULL;
            free(ptr);
            printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
        }
        
    }
}



//Display the doubly linked list 
void display()
{
    struct node *ptr;
    ptr = head;

    if(ptr == NULL)
    {
        printf("----------------- LIST IS EMPTY -----------------\n");
    }
    else
    {
        printf("Head-->");
        do
        {
            printf("[%d][%d][%d]", ptr->prev, ptr->data, ptr->next);
            if (ptr->next != head)
            {
                /* code */
                printf("--><--");
            }
            ptr = ptr->next;
        }while (ptr != head);
        printf("-->Head");
        printf("\n");
    }
}


//Program entry point are here
int main()
{
    int choice;
    printf("********************* WEL-COME *********************\n");

    do
    {
        printf("-->1.Insertion At Begnning\n-->2.Insertion At End\n-->3.Insertion At Specific Location\n-->4.Deletion At Begning\n-->5.Deletion At End\n-->6.Deletion At Specific Location\n-->7.Display Nodes\n-->8.Exit!\n");
        printf("Enter Your Choice: ");
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
    }while(choice != 8);
    
    return 0;

}
