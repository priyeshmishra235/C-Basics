#include<stdio.h>

int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
        printf("It is a number");
    else if(ch>=33 && ch<=47 )
        printf("It is a Symbol");
    else if(ch>=58 && ch<=64)
        printf("It is a Symbol");
    else if(ch>=91 && ch<=96)
        printf("It is a Symbol");
    else if(ch>=123 && ch<=126)
        printf("It is a Symbol");
    else if(ch>=65 && ch<=90)
        printf("Starts with Capital Letter");
    else if(ch>=97 && ch<=122)
        printf("Starts with Small Letter");
    else 
        printf("Illegal Input");
}