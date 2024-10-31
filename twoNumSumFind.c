#include<stdio.h>

int main()
{
    //declating two variables
    int a;
    int b;
    printf("enter a ");
    scanf("%d",&a); //getting input for a 

    printf("enter b ");
    scanf("%d",&b); //getting input for b

    int sum; //declating sum var
    sum= a+b; //adding a and b and storing value to sum
    printf("Sum of a and b is : %d", sum);

    return 0;
}