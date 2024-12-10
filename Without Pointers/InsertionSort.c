#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("%dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        for (int j = i; j >= 0; j--) 
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = key;
                key = temp;
            }
        }
    }
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}