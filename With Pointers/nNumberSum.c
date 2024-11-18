#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *sum=(int *)malloc(sizeof(int));
    int *num=(int *)malloc(sizeof(int));

    if(sum==NULL||num==NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    else
        *sum=0,*num=0;
        
    printf("How many numbers you want to add? ");
    scanf("%d",&n);

    while(n>0)
    {
        printf("Enter the %dth number",n);
        scanf("%d",num);
        *sum=*sum+*num;
        n--;
    }
    printf("The sum of numbers is %d",*sum);
    free(sum);
    free(num);

    return 0;
}