#include <stdio.h>

int Palindrome()
{
    //getting input N, R is reverse,
    int originalNum,reverNum=0,remStore;

    printf("enter the number to check if it's palindrome: ");
    scanf("%d",&originalNum);

    int OldoriginalNum=originalNum;
    while(originalNum>0)
    {
      remStore=originalNum%10;
      reverNum=reverNum*10 + remStore;
      originalNum/=10;
    }

    printf("\nThe number is %s palindrome.\n",(reverNum==OldoriginalNum) ? "a" : "not a");
    return 0;
}