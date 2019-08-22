#include <stdio.h>

int main() {
    int n, i;
    printf("Input n: ");
    scanf("%d", &n);
    for (i = 31; i >= 0; --i)
        printf("%d", n >> i & 1);
}