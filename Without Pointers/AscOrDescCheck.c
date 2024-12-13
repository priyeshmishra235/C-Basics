#include <stdio.h>
#include <stdbool.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    if(scanf("%d", &size) !=1)
    {
        printf("Enter valid size of array! Terminating process");
        return 1;
    }
        
    int arr[size];
    bool isAsc = 0, isDesc = 0;

    for (int i = 0; i < size; i++)
    {
        printf("%dth element is: ", i + 1);
        if(scanf("%d", &arr[i]) != 1)
        {
            printf("Input only interger value");
            return 2;
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1]) isAsc = 1;
        else isDesc = 1; 
    }

    if (isAsc && isDesc)
    {
        printf("No Order");
        return 3;
    }
    if (isAsc) printf("Ascending order");
    else if (isDesc) printf("Descending order");

    return 0;
}