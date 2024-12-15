#include <stdio.h>
//Traversing array using pointer arrays
//error in this code use gpt to know fault
int main()
{
    int *arr[5],num[5]={2,53,67,2,45};

    for (int i=0;i<5;i++)
    {
        arr[i]=&num[i];
        printf("%d ",*arr[i]);
    }
    
}