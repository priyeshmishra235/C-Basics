#include <stdio.h>

int Palindrome()
{
    //getting input N, R is reverse,
    int originalNum,reverNum=0,remStore;

    printf("enter the number to find if \nit's palindrome or not\n\n");
    scanf("%d",&originalNum);

    int OldoriginalNum=originalNum;

    while(originalNum>0)
    {
      remStore=originalNum%10;
      reverNum=reverNum*10 + remStore;
      originalNum=originalNum/10;
    }

    if(reverNum==OldoriginalNum)
    {
        printf("\nthe palindrome number is palindrome\n");

    }
    else
    {
        printf("\nthe number is not a palindrome\n");
    }

    return 0;
}