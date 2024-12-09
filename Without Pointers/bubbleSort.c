#include <stdio.h>
int main()
{
    int size, choice;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("%dth element is: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the choice 1)Descendin Sort 2)Ascending Sort: ");
    scanf("%d", &choice);
    printf("\nOriginal unsorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    switch (choice)
    {
    case 1:
    {
        printf("\nDescending order array: ");
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                // for descending order sorting in bubble sort
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        break;
    }
    case 2:
    {
        printf("\nAscending order array: ");
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                // for ascending order sorting in bubble sort
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        break;
    }
    default:
    {
        printf("\nInvalid choice entered! Terminating Program.....");
        return 1;
    }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}