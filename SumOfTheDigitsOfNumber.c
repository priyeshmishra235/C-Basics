#include<stdio.h>

int main()
{
    //declaring number , remainder and sum of its digits
    int num,rem,sum=0;
    //getting input
    printf("enter the number you want the sum of its digits of:\n");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10; //get the remaider
        sum=sum + rem; //add remainder to sum 
        num=num/10; //dividing by 10 to remove last digit 
    }
    printf("the sum of digits of the number is %d",sum);
    
    return 0;
}