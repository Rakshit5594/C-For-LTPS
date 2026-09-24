// Program 2: Write a recursive function to calculate the factorial of a given number.
// Algorithm:

#include <stdio.h>

int factorial(int n){
    if(n == 0|| n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    printf("the factorial is %d" , factorial(9));

    return 0;
}