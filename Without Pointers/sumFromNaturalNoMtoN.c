#include<stdio.h>

int sumFromNaturalNoMtoN()
{
    //getting input for initial and final digit
    int initialDigit,finalDig,sum=0;
    printf("you want sum from:");
    scanf("%d",&initialDigit); //input initial digit

    printf("upto:");
    scanf("%d",&finalDig); //input final digit

    //loop from initial to final digit to find the sum and store in sum variable
    for (initialDigit ; initialDigit<=finalDig ; initialDigit++)
    {
        sum=sum+initialDigit;
    }

    printf("the sum is: %d",sum);

    return 0;
}