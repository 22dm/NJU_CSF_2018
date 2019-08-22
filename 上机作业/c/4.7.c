#include <stdio.h>

int main() {
    int result, n;
    result = 1;
    n = 9;
    while (n > 0)
        result *= n--;
    printf("9! = %d", result);
}
