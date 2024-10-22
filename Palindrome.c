#include <stdio.h>

int main()
{
    int N,R=0,S;

    printf("enter the number to find if it's palindrome");
    scanf("%d",&N);

    int original=N;

    while(N>0)
    {
      S=N%10;
      R=R*10 + S;
      N=N/10;
    }

    if(R==original)
    {
        printf("the palindrome number is palindrome");

    }
    else
    {
        printf("the number is not a palindrome");
    }

    return 0;
}