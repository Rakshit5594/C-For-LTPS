// #include <stdio.h>

// int main() {
//     int num;
//     printf("ENTER A NUMber");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//         printf("the number is even");
//     return 0;
// } 

// #include <stdio.h>

// int main() {
//     int m,n;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &m, &n);
//     if (m > n)
//         printf("The greater number is: %d\n", m);
//     else
//         printf("The greater number is: %d\n", n);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if ((year % 4 == 0 && year % 100 != 0)
//         || (year % 400 == 0))
//         printf("%d is a leap year.\n", year);
//     else
//         printf("%d is not a leap year.\n", year);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int x,y,z;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &x, &y, &z);
//     if (x > y && x > z)

//         printf("The greatest number is: %d\n", x);
//     else if (y > x && y > z)
//         printf("The greatest number is: %d\n", y);
//     else
//         printf("The greatest number is: %d\n", z);
//     return 0;
// }

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is a positive number.\n", num);
    else if (num < 0)
        printf("%d is a negative number.\n", num);
    else
        printf("The number is zero.\n");
    return 0;
}