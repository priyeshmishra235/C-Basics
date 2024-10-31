#include<stdio.h>

int main()
{
    //declaring variable and getting input
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)//checking for number
        printf("It is a number");
    else if(ch>=33 && ch<=47 )//checking for symbol
        printf("It is a Symbol");
    else if(ch>=58 && ch<=64)//checking for symbol
        printf("It is a Symbol");
    else if(ch>=91 && ch<=96)//checking for symbol
        printf("It is a Symbol");
    else if(ch>=123 && ch<=126)//checking for symbol
        printf("It is a Symbol");
    else if(ch>=65 && ch<=90)//checking for capital letter
        printf("Starts with Capital Letter");
    else if(ch>=97 && ch<=122)//checking for small letter
        printf("Starts with Small Letter");
    else //if none of ascii value compared against here matches
        printf("Illegal Input");
}