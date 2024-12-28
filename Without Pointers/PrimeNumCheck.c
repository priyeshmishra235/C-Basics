#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &num);
    int Prime = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            Prime = 0;
            break;
        }
    }
    if (Prime)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}
