#include<stdio.h>

int main()
{
    int n,r,sum=0;

    printf("enter the number you want the sum of");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        sum=sum + r;
        n=n/10;
    }
    printf("the sum of digits of the number is %d",sum);
    
    return 0;
}