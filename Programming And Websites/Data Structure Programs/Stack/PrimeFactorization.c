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


int pop()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        int item;
        item = stk[top];
        top--;
        return item;
    }
    
}



void primefact(int num)
{
    int i = 2;
    while (num != 1)
    {
        while(num%i == 0)
        {
            push(i);
            num = num/i;
        }
        i++;
    }
    while (top != -1)
    {
        printf("%d ", pop());
    }
}





int main()
{
    printf("\n************Program that find Prime Factorization of an number************\n");

    int num;
    printf("Enter an number: ");
    scanf("%d",&num);
    primefact(num);
    return 0;

}