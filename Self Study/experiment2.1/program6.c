#include <stdio.h>

int generateFibonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else{
        return generateFibonacci(n-1) + generateFibonacci(n-2);
    }
}

int main() {
    int n = 10;
    printf("The %dth Fibonacci number is: %d", n, generateFibonacci(n));
    return 0;
}