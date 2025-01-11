#include <stdio.h>

// Function to shift elements to the right
void shifting(int index, int arr[], int size, int num);

int main() {
  int size, index, num;

  // Input the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Declare an array with space for one additional element
  int arr[size + 1];

  // Input array elements
  for (int i = 0; i < size; i++) {
    printf("Enter the %dth element: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Input the position and validate it
  printf("At what index do you want to insert the element? ");
  if (scanf("%d", &index), index < 0 || index > size) {
    printf("Invalid position! Please enter a position between 1 and %d.\n",
           size + 1);
    return 1;
  }

  // Input the new element
  printf("What number do you want to insert? ");
  scanf("%d", &num);

  // Shift elements and insert the new element
  shifting(index, arr, size, num);

  // Print the updated array
  printf("Updated array: ");
  for (int i = 0; i < size + 1; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

// Function to shift elements to the right
void shifting(int index, int arr[], int size, int num) {
  for (int i = size; i > index; i--) {
    arr[i] = arr[i - 1];
  }
  arr[index] = num;
}
