#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("%dth element is: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    printf("Reversed array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}