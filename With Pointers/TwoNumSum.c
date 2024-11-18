#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declaring pointer and its memory size
    int *a = (int*)malloc(sizeof(a));
    int *b = (int*)malloc(sizeof(b));

    //getting input from the user and storing int the pointer
    printf("enter the value of a: ");
    scanf("%d",a);
    printf("enter the value of b: ");
    scanf("%d",b);

    //adding values and printing the values
    printf("sum of %d and %d is :%d",*a,*b,*a+*b);
    return 0;
}