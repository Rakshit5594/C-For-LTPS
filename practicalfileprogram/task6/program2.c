#include <stdio.h>
int countStr(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count ++;
    }
    return count;
    
}
int main() {
    char str[] = "rakshit";
    printf("%d" , countStr(str));
    
    return 0;
}