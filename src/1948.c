#include<stdio.h>
#include<math.h>

int division(int num1, int num2) {
    int temp = 1, quotient = 0;
    while (num2 <= num1) {
        num2 <<= 1;
        temp <<= 1;
    }
    while (temp > 1) {
        num2 >>= 1;
        temp >>= 1;
        if (num1 >= num2) {
            num1 -= num2;
            quotient += temp;
        }
    }
    return quotient;
}

int getMaxPrimeFactor(int n) {
    int i, max = -1;
    while (n % 2 == 0) {
        max = 2;
        n = division(n, 2);
    }
    for (i = 3; i <= sqrt(n); i=i+2) {
        while (n % i == 0) {
            max = i;
            n = division(n, i);
        }
    }
    if (n > 2) {
        max = n;
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", getMaxPrimeFactor(n));
}


