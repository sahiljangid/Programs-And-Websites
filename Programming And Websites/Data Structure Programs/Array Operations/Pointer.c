#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int *b, **c;
    b = &a;
    c = &b;
    printf("%d\n",a);
    printf("%d\n",*(&a));
    printf("%d\n",&a);
    printf("%d\n",b);
    printf("%d\n",&b);
    printf("%d\n",*b);
    printf("%d",c);


    return 0;
}
