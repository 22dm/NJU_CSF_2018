
#include <stdio.h>

int main() {
    int a, b;
    int max;
    printf("Input two numbers: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        max = a;
    else
        max = b;
    printf("%d is larger.", max);
}
