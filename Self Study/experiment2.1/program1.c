#include <stdio.h>

int countNumberOfDigits(int n){
    int count = 0;
    while(n){
        n/=10;
        count++;

    }
    return count;
}
int main() {
    int count = countNumberOfDigits(100101);
    printf("%d is the count of the number " , count);
    return 0;
}