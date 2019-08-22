#include <stdio.h>

int main() {
    char result;
    int input;
    printf("Input an integer:");
    scanf("%d", &input);
    if (input % 7)
        result = 'F';
    else
        result = 'T';
    printf("The result is %c\n", result);
}
