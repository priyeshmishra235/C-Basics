#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // Current element to be inserted
        int j = i - 1;

        // Shift elements of the sorted portion to the right
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key in its correct position
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {588335, 765073, 488301, 941038, 700383, 465748, 472120, 99833, 828517, 715114};

    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}