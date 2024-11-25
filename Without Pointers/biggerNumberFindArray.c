#include <stdio.h>

int biggerNumberFindArray()
{
    //getting input from user for the size of the array
    int size;
    printf("enter number for the size of the array\n");
    scanf("%d",&size);
    int num[size];

    //getting input from user to fill array
    for(int i=0;i<size ; i++)
    {
        printf("enter %dth place number to add to arrray\n",i+1);
        scanf("%d",&num[i]);
    }

    //printing numbers entered in the array
    printf("the numbers in the arrays are\n");
    for(int d=0;d<size;d++)
    {
        printf("[%d]\t",num[d]);
    }

    printf("\n");
    
    //now comparing numbers to get greatest number between them
    for(int i=0;i<size;i++)
    {
        if(num[0]<num[i])
        {
            num[0]=num[i];
        }

    }
    printf("biggest number is %d",num[0]);

    return 0;
}