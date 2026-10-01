// Program 1: Write a C program to read two numbers from user and add them using pointers.  

#include <stdio.h>
int sum(){
    int a,b,sum;
    int *p1, *p2;
    printf("enter two numbers: ");
    scanf("%d %d" , &a,&b);
    p1 = &a;
    p2 = &b;
    sum = *p1+*p2;
    printf("sum = %d" , sum);
    
}
int main() {
    sum();
    return 0;
}