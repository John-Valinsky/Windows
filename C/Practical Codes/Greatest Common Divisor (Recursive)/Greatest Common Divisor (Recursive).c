#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b, c, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Compute GCD of three numbers
    result = gcd(gcd(a, b), c);

    printf("GCD of %d, %d, and %d is: %d\n", a, b, c, result);

    return 0;
}


