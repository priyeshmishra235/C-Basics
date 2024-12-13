#include <stdio.h>
//traversing a array without pointers
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("%dth element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Traversed Array without pointers: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}