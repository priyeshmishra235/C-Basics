#include<stdio.h>
#include<math.h>

int main()
{
    //getting input for coefficients
    float arr[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the coefficient arr[%d]: ",i);
        scanf("%f",&arr[i]);
    }
    //calculating disciminant
    float discri=(arr[1]*arr[1])-4*arr[0]*arr[2];
    if(discri>=0)
    {
        float r1=(-arr[1]+sqrt(discri))/(2*arr[0]);
        float r2=(-arr[1]-sqrt(discri))/(2*arr[0]);
        printf("Roots are real and are: %f and %f",r1,r2);
    }
    if(discri<0)
    {
        discri=sqrt(-discri);
        float real=-arr[1]/(2*arr[0]);
        float imag=discri/(2*arr[0]);
        printf("Roots are imaginary and are: %f + %f i and %f - %f i",
                real,imag,real,imag);
    }


    return 0;
}