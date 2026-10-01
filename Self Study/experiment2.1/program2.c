#include <stdio.h>

int reversedDigit(int n){
    int y = 0;
    while(n){
        y = y*10 + n%10;
        n/=10;
    }
    return y;
}

int main() {
    printf("%d is the reversed number " , reversedDigit(25));

    return 0;
}