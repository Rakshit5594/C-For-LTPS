#include <stdio.h>


int isPerfectNumber(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return (sum == n);
}
int main() {
    int number = 28;
    printf("%d is a perfect number: %s", number, isPerfectNumber(number) ? "true" : "false");
    return 0;
}