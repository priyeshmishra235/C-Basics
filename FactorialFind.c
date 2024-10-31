#include<stdio.h>

//program to find factorial of numbers whose factorial's are very large
unsigned long long int i,n=0,f=0;
unsigned long long int fac(int n);

int main()
{
    printf("enter the number you want factorial of:");
    scanf("%llu",&n);
    f=fac(n); 
    printf("factorial =%llu",f);

    return 0;
}
//recursive function to calculate factorial
unsigned long long int fac(int n)
{
    if(n==0||n==1){ //since factorial of 0 and 1 is 1
            return 1;
        }
        else{ //code to multiply n with n-1 
            f=n*fac(n-1);
        }
}
