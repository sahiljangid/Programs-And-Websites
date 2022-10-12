#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int mul(int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p*2;
        printf("\t%d == %d\n",i,p);
    }
    return p;
    
}


int main()
{
    int n;
    printf("Enter the power of 2 you want: ");
    scanf("%d",&n);
    int p = mul(n);
    printf("The %d power of 2 is : %d",n,p);

    return 0;
}