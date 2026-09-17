#include <stdio.h>

int main() {
    int arr[] = {1,221,3,21,4};
    int pos = 3;
    for (int i = pos; i<4;i++){
        arr[i] = arr[i+1];
    }
    printf("array after deletion: \n");
    for (int i = 0; i<4; i++){
        printf("%d , " , arr[i]);
    }
    return 0;
}