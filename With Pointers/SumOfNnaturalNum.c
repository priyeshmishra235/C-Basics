#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *sum=(int *)malloc(sizeof(int));
    if(sum==NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    else
        *sum=0;
    int num;
    printf("Enter the number upto which you want sum: ");
    scanf("%d",&num);

    while(num>0)
    {
        *sum=*sum+num;
        num--;
    }
    printf("the sum is %d",*sum);
    free(sum);

    return 0;
}