// Program 1: Implement a function to find the maximum and minimum among a set of
// numbers

#include <stdio.h>

void findMaxMin(int numbers[], int size, int *maximum, int *minimum)
{
    *maximum = numbers[0];
    *minimum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *maximum)
            *maximum = numbers[i];

        if (numbers[i] < *minimum)
            *minimum = numbers[i];
    }
}

int main()
{
    int numbers[100], size;
    int maximum, minimum;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    findMaxMin(numbers, size, &maximum, &minimum);

    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}