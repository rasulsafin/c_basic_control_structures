#include <stdio.h>

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 0;
    }

    printf("%d", fibonacci(n));

    return 0;
}
