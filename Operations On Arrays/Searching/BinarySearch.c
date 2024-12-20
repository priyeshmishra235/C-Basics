#include <stdio.h>
int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target)
            low = mid + 1;
        else if (arr[mid] > target)
            high = mid - 1;
        else if (arr[mid] == target)
            return mid;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 16;
    int returnValue = binarySearch(arr, size, target);
    if (returnValue == -1)
        printf("Target not found");
    else
        printf("Target found at index %d",returnValue);
    return 0;
}