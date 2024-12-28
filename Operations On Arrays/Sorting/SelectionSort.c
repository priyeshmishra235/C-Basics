#include <stdio.h>

void selectionsort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int currSmallest = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[currSmallest] > arr[j])
                currSmallest = j;
        }
        if (currSmallest != i)
        {
            int temp = arr[i];
            arr[i] = arr[currSmallest];
            arr[currSmallest] = temp;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {755288, 493124, 786116, 738923, 768427, 856419, 62969, 75752, 917346, 720866};

    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);

    return 0;
}