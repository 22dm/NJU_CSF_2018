#include <stdio.h>

int main() {
    double pi;
    int n, i;
    printf("Input n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (i % 2)
            pi += 4 / (2 * i - 1.);
        else
            pi -= 4 / (2 * i - 1.);
    printf("PI = %.10f", pi);
}
