#include<stdio.h>
int Ack(int , int);
int main()
{
    int m,n;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d",Ack(m,n));
    
}
int Ack(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }

    if(m>0 && n==0)
    {
        return Ack(m-1,1);
    }
    if(m>0 && n>0)
    {
        return Ack(m-1,Ack(m,n-1));
    }
}