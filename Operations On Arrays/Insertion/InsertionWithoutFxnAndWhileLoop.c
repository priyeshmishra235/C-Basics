#include <stdio.h>

//Just fucking write clean code 
//not a pile of shit like this
//such a simple logic, and cannot inplement even that correct
//why always array overflow? keep track of array size.
//this shit is not even modular,neither configurable

int main()
{
    int arr[100] = {2, 34, 6, -45, 24}, size = 5, index, num;
    printf("At what position(starting 1) you want to insert the element? ");
    scanf("%d", &index);
    index--;
    if (index < 0 || index > size)
    {
        printf("Enter index between 1 and %d",size + 1);
        return 0;
    }
    printf("What number? ");
    scanf("%d", &num);

    while(size>=index)
    {
        arr[size+1]=arr[size];
        size--;
    }
    arr[index]=num;

    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

        return 0;
}