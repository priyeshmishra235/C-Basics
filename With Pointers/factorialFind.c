#include<stdio.h>
#include<stdlib.h>
int factorial(int n);
int main()
{
    int num;
    printf("Enter the number upto which you want factorial: ");
    scanf("%d",&num);
    
    int *fac=(int*)malloc(sizeof(int));
    *fac=0;

    *fac=factorial(num);
        
    printf("The factorial of %d is %d",num,*fac);
    free(fac);

    return 0;
}
int factorial(int n)
{
    if(n>1)
        n=n*factorial(n-1);
    else
        return n;
    
    return n;
}