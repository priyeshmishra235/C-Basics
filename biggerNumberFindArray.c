#include <stdio.h>

int main()
{
    //getting input from user for the size of the array
    int n,c,big=0;
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
    
    //now comparing numbers to get greatest number between them
    for(c=0;c<n;c++)
    {
        if(big<num[c])
        {
            big=num[c];
        }

    }
    printf("biggest number is %d",big);

    return 0;
}