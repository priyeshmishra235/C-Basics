#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("%dth element is: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            if (arr[i - 1] > arr[i])
            {
                printf("No Order");
                return 0;
            }
            if (i == size - 2)
            {
                printf("ascending ");
            }
        }
        else
        {
            if (arr[i] > arr[i + 1])
            {
                if (i == 0)
                {
                    if (arr[0] < arr[1])
                    {
                        printf("No Order");
                        return 0;
                    }
                }
                if (i > 0)
                {
                    if (arr[i - 1] < arr[i])
                    {
                        printf("No Order");
                        return 0;
                    }
                }

                if (i == size - 2)
                {
                    printf("descending ");
                }
            }
        }
    }

    return 0;
}