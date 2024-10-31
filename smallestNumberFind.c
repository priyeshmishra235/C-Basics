#include<stdio.h>

int main()
{
    //getting input from user for the size of the array
    int size,small=999999999;//putting small as very large so that any number will be smaller than this
    printf("enter number for the size of the array\n");
    scanf("%d",&size);
    int num[size];

    //getting input from user to fill array
    for(int i=0;i<size ; i++)
    {
        printf("enter %dth place number to add to arrray\n",i+1);
        scanf("%d",&num[i]);
    }

    //checking numbers entered in the array
    printf("the numbers in the arrays are\n");
    for(int d=0;d<size;d++)
    {
        printf("[%d]\t",num[d]);
    }

    printf("\n");

    //finding smallest number from array
    for(int i=0;i<size;i++)
    {
        if(small>num[i])
        {
            small=num[i];
        }

    }
    printf("Smallest number is %d",small); 

    return 0;
}