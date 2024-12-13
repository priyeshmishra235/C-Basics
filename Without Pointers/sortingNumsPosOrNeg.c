#include <stdio.h>

int main()
{
    int n, posCount = 0, negCount = 0, zeroCount = 0;
    printf("How many numbers you want to compare?");
    scanf("%d", &n);
    int num[n], positive[n], negative[n], zeros[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth number: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] > 0)
            positive[posCount++] = num[i];
        else if (num[i] < 0)
            negative[negCount++] = num[i];
        else
            zeros[zeroCount++] = num[i];
    }

    printf("\nTotal postive numbers=%d\n", posCount);
    for (int i = 0; i < posCount; i++)
        printf(" %d,", positive[i]);

    printf("\nTotal negative numbers=%d\n", negCount);
    for (int i = 0; i < negCount; i++)
        printf(" %d,", negative[i]);

    printf("\nTotal zeros=%d\n", zeroCount);
    for (int i = 0; i < zeroCount; i++)
        printf(" %d,", zeros[i]);
}