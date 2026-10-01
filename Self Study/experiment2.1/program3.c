#include <stdio.h>
#include<stdbool.h>
bool isPalindrome(int n){
    int reversed = 0;
    int original = n;
    while(n){
        reversed = reversed*10 + n%10;
        n/=10;
    }

    return (original == reversed);
}
int main() {
    int number = 121;
    printf("%d is palindrome: %s" , number, isPalindrome(number) ? "true" : "false");
    return 0;
}

