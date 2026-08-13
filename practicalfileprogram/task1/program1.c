#include <stdio.h>

int main() {
    char name[50];
    int age;
    printf("enter name and age: \n");
    scanf("%s %d", name, &age);
    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}