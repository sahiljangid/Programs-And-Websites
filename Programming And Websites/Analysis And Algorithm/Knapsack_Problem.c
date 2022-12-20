#include<stdio.h>

void knapsack(int num, float weight[], float profit[], float capacity)
{
    float x[20], tp = 0;
    int i,j,v;
    v = capacity;

    for(i = 0; i<num; i++)
    {
        x[i] = 0.0;
    }
    for(i = 0; i<num; i++)
    {
        if(weight[i]>v)
        {
            break;
        }
        else
        {
            x[i] = 1.0;
            tp = tp + profit[i];
            v = v-weight[i];
        }
    }
    if(i<num)
    {
        x[i] = v/weight[i];
        tp = tp + (x[i]*profit[i]);
    }
    printf("\n The Result Vector is: ");
    for(i = 0; i<num; i++)
    {
        printf("%f\t",x[i]);
    }
    printf("\n Maximum profit is : %f",tp);
}

int main()
{
    float weight[20], profit[20], capacity;
    int num, i, j;
    float ratio[20], temp;
    printf("\nEnter the number of objects: ");
    scanf("%d",&num);

    printf("\nEnter the weights of each objects: ");
    for(i=0; i<num; i++)
    {
        scanf("%f",&weight[i]);
    }
    
    printf("\nEnter the profits of each objects: ");
    for(i=0; i<num; i++)
    {
        scanf("%f",&profit[i]);
    }

    printf("\nEnter the capacity of knapsack: ");
    scanf("%f",&capacity);

    for(i=0; i<num; i++)
    {
        ratio[i] = profit[i]/weight[i];
    }

    for(i=0; i<num; i++)
    {
        for(j = i+1; j<num; j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }

    knapsack(num,weight,profit,capacity);
    
    return 0;
}