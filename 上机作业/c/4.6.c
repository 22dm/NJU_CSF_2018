#include <stdio.h>

int main() {
    int n, i;
    int f1, f2, tmp;
    f1 = f2 = 1;
    printf("Input n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++) {
        tmp = f1;
        f1 = f2;
        f2 = tmp + f1;
    }
    printf("F_%d = %d", n, f2);
}
