#include<stdio.h>

int main()
{
    FILE *fp;

    int count = 0, line = 1;

    char c;

    fp = fopen("demo.txt","r");

    if (fp == NULL)
    {
        printf("File Doesn't exist.\n");
        return 0;
    }

    for(c = getc(fp); c != EOF; c = getc(fp))
    {
        count = count + 1;
        if (c == '\n')
        {
            line = line + 1;
        }
    }

    fclose(fp);
    printf("This file contains %d characters and %d lines.",count,line);
    

}