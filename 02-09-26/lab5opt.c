#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double a[n], b[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a num: ");
        scanf("%lf", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Enter a num: ");
        scanf("%lf", &b[i]);
    }

    double r = b[n-1] + a[n-1];

    for (int i = n-2; i>= 0; i--) {
        double parallel = (r * b[i]) / (r + b[i]);
        r = a[i] + parallel;
    }

    printf("Effective resistance: %.4f\n", r);

    return 0;
}

