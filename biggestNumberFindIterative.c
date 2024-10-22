#include<stdio.h>
int main()
{
    int a,n,sum;
    printf("how many number sum you want");
    scanf("%d",&a);

    for (int i=0;i<a;i++)
    {
        printf("enter %dth number",i+1);
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("sum of them is %d",sum);
   return 0;
}