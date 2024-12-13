#include <stdio.h>
//Traversing array using pointer arrays
//error in this code use gpt to know fault
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int *arr[size];
    
    for(int i=0;i<size;i++)
    {
        printf("%dth element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Traversed Array using Pointer Arrays: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}