#include <stdio.h>

void concatinate(char str1[] , char str2[]){

    int i = 0;
    int j = 0;
    while (str1[i] != '\0'){
        i++;
    }
    while (str2[j] != '\0'){
        str1[i] = str2[j];

        i++;
        j++;
    }
    
    printf("%s" , str1);
}
int main() {
    char name[] = "Rakshit";
    char surname[] = "Jain";
    concatinate(name , surname);
    return 0;
}