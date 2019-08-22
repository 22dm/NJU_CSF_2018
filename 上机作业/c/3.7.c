#include <stdio.h>

int main() {
    int time;
    printf("Input time in seconds: ");
    scanf("%d", &time);
    printf("%02d:%02d:%02d", time / 3600, time / 60 % 60, time % 60);
}
