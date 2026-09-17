#include <stdio.h>
#include<string.h>
int main() {
    char name[] = "Rakshit";
    char surname[] = "Jain";

    int len = strlen(name);
    
    strrev(name);
    printf("%s" , name);
    int compare  =  strcmp(name , surname);
    char temp[20];
    strcpy(temp , name);
    printf("%s" , temp);
    strcat(name , surname);
    printf("%s" , name);
    
    

    return 0;
}