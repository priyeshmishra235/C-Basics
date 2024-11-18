#include<stdio.h>
#include<string.h>

int add(int n)
{
   int sum =0;
   if(n!=0)
   {
        int rem=0;
        sum=(n%10)+add(n/10);
   }
   else
    return 0;
   return sum;
}
int main()
{
    int num;
    printf("enter the number you want the sum of its digits of:\n");
    scanf("%d",&num);
    printf("the sum of numbers is %d ",add(num));
   
    return 0;
}