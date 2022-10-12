#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char keyword[32][10] = {"auto","break","case","char","continue","do","default","const","double","else","enum","extern","for","if","goto","float","int","long","register","return","signed","static","sizeof","short","struct","switch","typedef","union","void","while","volatile","unsigned"};

    printf("Enter keyword which you want to check: ");
    char str[10];
    scanf("%s",&str);
    int flag = 0;
    for (int i = 0; i < 32; i++)
    {
        if (strcmp(keyword[i],str)==0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("Keyword Founded.\n");
    }
    else
    {
        printf("Keyword not founded.\n");
    }
    
    
}