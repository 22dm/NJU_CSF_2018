#include <stdio.h>

int main() {
    int a, b;
    printf("Input two numbers: ");
    scanf("%d%d", &a, &b);
    printf("%d is larger.", a > b ? a : b);
}
