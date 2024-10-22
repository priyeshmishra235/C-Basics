#include<stdio.h>

int main()
{
    //getting input from user for the size of the array
    int n,c,small=999999999;//putting small as very large so that any number will be smaller than this
    printf("enter number for the size of the array\n");
    scanf("%d",&n);
    int num[n];

    //getting input from user to fill array
    for(int i=0;i<n ; i++)
    {
        printf("enter %dth place number to add to arrray\n",i+1);
        scanf("%d",&num[i]);
    }

    //checking numbers entered in the array
    printf("the numbers in the arrays are\n");
    for(int d=0;d<n;d++)
    {
        printf("[%d]\t",num[d]);
    }

    printf("\n");

    //finding smallest number from array
    for(c=0;c<n;c++)
    {
        if(small>num[c])
        {
            small=num[c];
        }

    }
    printf("Smallest number is %d",small); 

    return 0;
}