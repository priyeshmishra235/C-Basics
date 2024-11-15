#include <stdio.h>
#include <string.h>

void numbers(char digit, int line)
{
    switch(digit)
    {
        case '0':
        {
            if(line==0) printf(" ***   ");
            if(line==1) printf("*   *  ");
            if(line==2) printf("*   *  ");
            if(line==3) printf("*   *  ");
            if(line==4) printf(" ***   ");
            break;
        }
        case '1':
        {
            if(line==0) printf("  *    ");
            if(line==1) printf(" **    ");
            if(line==2) printf("  *    ");
            if(line==3) printf("  *    ");
            if(line==4) printf(" ***   ");
            break;
        }
        case '2':
        {
            if(line==0) printf(" ***   ");
            if(line==1) printf("*   *  ");
            if(line==2) printf("   *   ");
            if(line==3) printf("  *    ");
            if(line==4) printf("*****  ");
            break;
        }
        case '3':
        {
            if(line==0) printf(" ***   ");
            if(line==1) printf("    *  ");
            if(line==2) printf("  **   ");
            if(line==3) printf("    *  ");
            if(line==4) printf(" ***   ");
            break;

        }
        case '4':
        {
            if(line==0) printf("   *   ");
            if(line==1) printf("  **   ");
            if(line==2) printf(" * *   ");
            if(line==3) printf("*****  ");
            if(line==4) printf("   *   ");
            break;
        }
        case '5':
        {
            if(line==0) printf("*****  ");
            if(line==1) printf("*      ");
            if(line==2) printf("****   ");
            if(line==3) printf("    *  ");
            if(line==4) printf("****   ");
            break;
        }
        case '6':
        {
            if(line==0) printf(" ***   ");
            if(line==1) printf("*      ");
            if(line==2) printf("****   ");
            if(line==3) printf("*   *  ");
            if(line==4) printf(" ***   ");
            break;
        }
        case '7':
        {
            if(line==0) printf("*****  ");
            if(line==1) printf("    *  ");
            if(line==2) printf("   *   ");
            if(line==3) printf("  *    ");
            if(line==4) printf(" *     ");
            break;
        }
        case '8':
        {
            if(line==0) printf(" ***   ");
            if(line==1) printf("*   *  ");
            if(line==2) printf(" ***   ");
            if(line==3) printf("*   *  ");
            if(line==4) printf(" ***   ");
            break;
        }
        case '9':
        {
            if(line==0) printf(" ***   ");
            if(line==1) printf("*   *  ");
            if(line==2) printf(" ****  ");
            if(line==3) printf("    *  ");
            if(line==4) printf(" ***   ");
            break;
        } 
    }
}   

void printNumbers(char *input)
{
    for (int line=0;line<5;line++)
    {
        for (int i=0;i<strlen(input);i++)
        {
            numbers(input[i],line);
        }
        printf("\n");
    }
}
int NumInBig() 
{
    char NumInput[100];
    printf("Enter the number you want to print in big\n"); 
    scanf("%s",NumInput);

    printNumbers(NumInput);
    
    return 0;
}
