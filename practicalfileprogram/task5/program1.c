#include <stdio.h>
int main() {
    int arr[5] = {12, 34, 9, 56, 23};
    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    printf("Second largest number: %d", secondLargest);
    return 0;
}