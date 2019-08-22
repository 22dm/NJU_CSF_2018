#include <stdio.h>

int main() {
    char c;
    do {
        scanf("%c", &c);
        printf("%c", c - 32 * (c >= 'a' && c <= 'z'));
    } while (c != '\n');
}