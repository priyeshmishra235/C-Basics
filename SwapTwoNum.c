#include<stdio.h>

int main()
{
    int a , b , temp;
    printf("enter two numbers to be swapped");
    scanf("%d%d",&a,&b);
    printf("Numbers entered are a=%d\tb=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped Numbers entered are a=%d\tb=%d",a,b);
    
}