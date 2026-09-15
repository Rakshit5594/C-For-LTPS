// #include <stdio.h>

// void fibonacci(int n) {
//     int t1 = 0, t2 = 1, nextTerm;

//     printf("Fibonacci Series: ");

//     for (int i = 1; i <= n; ++i) {
//         printf("%d, ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     fibonacci(n);
    
//     return 0;
// }

#include <stdio.h>

int main(){
    
    int n, m;

    printf("Enter number of Rows: ");
    scanf("%d", &n);

    printf("Enter the number of Column: ");
    scanf("%d", &m);

    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int value;
            printf("Enter the value for element location ( %d , %d ) : ", i, j);
            scanf("%d", &value);
            array[i][j] = value;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array[i][j]);

        }
        printf("\n");
        
    }
    
    return 0;
}