#include<stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1;
    int op = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", op);
        t1 = t2;
        t2 = op;
        op = t1 + t2;
    }

    return 0;
}
