#include<stdio.h>

int main()
{
    //delaring num1 , num2 and temporary variable
    int a , b , temp;

    printf("enter two numbers to be swapped\n");
    scanf("%d%d",&a,&b); //getting input for two numbers
    printf("Numbers entered are a=%d\tb=%d\n",a,b);

    temp=a; //storing a in temp
    a=b; //making a equals to value of b
    b=temp; //now making b equals to value of temp which was made equal to a

    printf("Swapped Numbers entered are a=%d\tb=%d",a,b);
    
}