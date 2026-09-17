#include <stdio.h>
int main() {
    int arr[6] = {12, 34, 9, 56, 23}; // Array with space for 6 elements
    int pos = 4, newElem = 211;
    // Shift elements to the right
    for (int i = 4; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = newElem; // Insert the new element
    printf("Array after insertion: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
