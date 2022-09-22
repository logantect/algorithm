#include <stdio.h>

int factorial(int n) {
    printf("factorial(%d)\n", n);
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int result = factorial(3);
    printf("%result", result);
    return 0;
}