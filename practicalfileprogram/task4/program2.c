#include <stdio.h>

int main() {
    int start , end;
    printf("Enter the Start and End values: ");
    scanf("%d %d", &start, &end);

    printf("even numbers between %d and %d are:\n");
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    printf("odd numbers between %d and %d are:\n");
    for(int i = start; i <= end; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    
    return 0;
}