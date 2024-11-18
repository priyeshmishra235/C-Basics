#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *sum=(int*)malloc(sizeof(int));
    *sum=0;
    int iniDigit=0,finDigit=0;

    printf("You want sum from: ");
    scanf("%d",&iniDigit);
    printf("Upto: ");
    scanf("%d",&finDigit);

    while(finDigit>=iniDigit)
    {
        *sum=*sum+finDigit;
        finDigit--;
    }

    printf("The sum is %d ",*sum);

    return 0;
}