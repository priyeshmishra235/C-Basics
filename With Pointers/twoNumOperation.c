#include <stdio.h>
#include <stdlib.h>

float add(float *num1, float *num2)
{
    return (*num1 + *num2);
}

float sub(float *num1, float *num2)
{
    return (*num1 - *num2);
}

float mul(float *num1, float *num2)
{
    return (*num1 * *num2);
}

float divi(float *num1, float *num2)
{
    return (*num1 / *num2);
}

int main()
{
    float *num1 = (float *)malloc(sizeof(float));
    float *num2 = (float *)malloc(sizeof(float));

    printf("enter number 1: \n");
    scanf("%f", num1);
    printf("enter number 2: \n");
    scanf("%f", num2);
    printf("Enter the operation to perform: \n"
           "1.Addition\n"
           "2.Subtraction\n"
           "3.Multiplication\n"
           "4.Division\n");
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            printf("addition of %f and %f is: %f", *num1, *num2, add(num1, num2));
            break;
        }
        case 2:
        {
            printf("Subtraction of %f and %f is: %f", *num1, *num2, sub(num1, num2));
            break;
        }
        case 3:
        {
            printf("Multiplication of %f and %f is: %f", *num1, *num2, mul(num1, num2));
            break;
        }
        case 4:
        {
            printf("Division of %f and %f is: %f", *num1, *num2, divi(num1, num2));
            break;
        }
        default:
        {
            printf("None of the choice mentioned entered!");
        }
        
    }
    free(num1);
    free(num2);
    return 0;
}