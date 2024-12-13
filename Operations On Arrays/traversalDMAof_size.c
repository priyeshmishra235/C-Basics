#include <stdio.h>
#include <stdlib.h>
//Traversing array using dynamically allocated size of array

//code tries to mix dma and static memory allocation which is a 
//fault .
//I am trying to use dynamically allocated size of a array
//on a static array. It is no longer used in modern c. 
//static VLA's were introduced in c99.
int main()
{
    int *size=(int *)malloc(sizeof(int));
    printf("Enter the size of array: ");
    scanf("%d",size);
    int arr[*size];

    
    for(int i=0;i<*size;i++)
    {
        printf("%dth element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Traversed Array using dma of size of array: ");
    for(int i=0;i<*size;i++)
    {
        printf("%d ",arr[i]);
    }

    free(size);
    return 0;

}