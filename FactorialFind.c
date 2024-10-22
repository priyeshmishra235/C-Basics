#include<stdio.h>\

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
unsigned long long int fac(int n)
{
    if(n==0||n==1){
            return 1;
        }
        else{
            f=n*fac(n-1);
        }
}
