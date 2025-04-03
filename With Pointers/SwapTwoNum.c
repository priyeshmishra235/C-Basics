#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2) {
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
int main() {
  int a, b;

  printf("Enter the number 1:");
  scanf("%d", &a);
  printf("Enter the number 2:");
  scanf("%d", &b);
  printf("Numbers before Swapping: num1= %dand num2= %d\n", a, b);
  swap(&a, &b);
  printf("Numbers before Swapping: num1= %dand num2= %d\n", a, b);
  return 0;
}
