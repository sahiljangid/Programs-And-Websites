#include<stdio.h>
#include<stdlib.h>

//Creating Node Structure
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;

//Insertion At The Begnning Of the Linked list
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
        temp->next = NULL;
        temp->data = item;
        temp->prev = NULL;
        head = temp;
        printf("++++++++++++++++ NODE CREATED SUCCESSFULLY ++++++++++++++++\n");
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        temp->data = item;
        temp->prev = NULL;
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
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        printf("++++++++> ENTER DATA: ");
        scanf("%d",&item); 
        temp->next = NULL;
        temp->data = item;
        temp->prev = ptr;
        ptr->next = temp;
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
        if (ptr->next == NULL)
        {
            temp->next = NULL;
            temp->data = item;
            ptr->next = temp;
            temp->prev = ptr;  
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
    else if (ptr->next == NULL)
    {
        /* code */
        head = NULL;
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
    }
    else
    {
        ptr->next->prev = NULL;
        head = ptr->next;
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
    else if (ptr->next == NULL)
    {
        /* code */
        head = NULL;
        printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
    }
    else
    {
        while (ptr->next->next != NULL)
        {
            /* code */
            ptr = ptr->next;
        }
        ptr->next->prev = NULL;
        ptr->next = NULL;
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
    else if (head->next == NULL)
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
        if (ptr->next == NULL)
        {
            /* code */
            ptr->prev->next = NULL;
            ptr->prev = NULL;
            free(ptr);
            printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
        }
        else if (ptr->prev == NULL)
        {
            /* code */
            ptr->next->prev = NULL;
            head = ptr->next;
            ptr->next = NULL;
            free(ptr);
            printf("-------------------- NODE DELETED SUCCESSFULLY --------------------\n");
        }
        else
        {
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
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
        while (ptr != NULL)
        {
            printf("[%d][%d][%d]", ptr->prev, ptr->data, ptr->next);
            if (ptr->next != NULL)
            {
                /* code */
                printf("--><--");
            }
            ptr = ptr->next;
        }
        printf("\n");
    }
}


//Program Entry Point are here

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
    

printf("&&&&&&&&&&&                      &&&&&&&&&&&\n");
printf("&&&&&&&&&&&          MADE        &&&&&&&&&&&\n");
printf("&&&&&&&&&&&           BY         &&&&&&&&&&&\n");
printf("&&&&&&&&&&&          SAHIL       &&&&&&&&&&&\n");
printf("&&&&&&&&&&&          JANGID      &&&&&&&&&&&\n");
printf("&&&&&&&&&&&         THANK YOU    &&&&&&&&&&&\n");
printf("&&&&&&&&&&&                      &&&&&&&&&&&\n");
    return 0;

}