#include <stdio.h>

int main() {
    char c;
    do {
        scanf("%c", &c);
        if (c != ' ')
            printf("%c", c);
    } while (c != '\n');
}