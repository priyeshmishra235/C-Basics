#include<stdio.h>

int main()
{
    //getting the  input for the number of elements in array
    int n;
    printf("Enter how many numbers you want to enter to sort them in descending order: ");
    scanf("%d",&n);
    //getting input for the elements of the array
    int numbers[n];
    printf("\nEnter the numbers:\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the %dth number:",i+1);
        scanf("%d",&numbers[i]);
    }
    //displaying the input values
    for(int i=0;i<n;i++)
    {
        printf("%d, ",numbers[i]);
    }
    printf("\n");
    //logic to sort the array
    int sorted[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int big=0;
            if(big<numbers[i])
            {
                big=numbers[i];
                sorted[i]=big;
            }
            if(numbers[i]==big)
            {
                int temp=i;
            }
        }
    }
    //displaying the sorted values
    for(int i=0;i<n;i++)
    {
        printf("%d, ",sorted[i]);
    }






    return 0;
}