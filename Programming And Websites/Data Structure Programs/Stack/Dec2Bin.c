#include<stdio.h>
#include<stdlib.h>

#define max 100

int stk[max];
int top = -1;

void push(int data)
{
    if (top == max-1)
    {
        printf("Stack is full.\n");
    }
    else
    {
        top++;
        stk[top] = data;
    }
}

void dec2bin(int n)
{
    while (n != 0)
    {
        push(n%2);
        n = n/2;
    }
    
}


int print()
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
            printf("%d  ", stk[i]);
        }
        printf("\n");
    }
}



int main()
{
    printf("**********Wel-Come in Decimal to Binary Conversion Program**********\n");
    int num;
    printf("Enter an number: ");
    scanf("%d",&num);

    dec2bin(num);
    print();

    return 0;
}