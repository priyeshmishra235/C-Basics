#include<stdio.h>

int main()
{
    int m,n,i,sum=0;
    printf("you want sum from:");
    scanf("%d",&m);
    printf("upto:");
    scanf("%d",&n);

    for (m;m<=n;m++)
    {
        sum=sum+m;
    }

    printf("the sum is: %d",sum);



    return 0;
}