#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top = -1;
char stk[100];

void push(char c)
{
    top++;
    stk[top] = c;
}

int pop()
{
    char c;
    c = stk[top];
    top--;
    return c;
}

int main()
{
    printf("Wel-come to Reverse string program\n");
    printf("Enter an string :\n");
    char str[100];
    int l;
    gets(str);
    l = strlen(str);
    // printf("%d",l);

    for (int i = 0; i < l; i++)
    {
        push(str[i]);
    }
    printf("Reverse string is: \n");
    int ch;
    for (int i = 0; i < l; i++)
    {
        ch = pop();
        printf("%c", ch);
    }

    return 0;
}