#include<stdio.h>

int main() {
    int status = 0, count = 0;
    char ch;

    printf("Input a string: ");

    do {
        scanf("%c", &ch);
        if (status == 0)
            if (ch == 'i')
                status = 1;
            else
                status = 0;
        else if (status == 1)
            if (ch == 'i')
                status = 1;
            else if (ch == 'n')
                status = 2;
            else
                status = 0;
        else if (status == 2)
            if (ch == 'i')
                status = 1;
            else if (ch == 't')
                status = 3;
            else
                status = 0;
        else if (status == 3) {
            count++;
            if (ch == 'i')
                status = 1;
            else
                status = 0;
        }
    } while (ch != '\n');

    printf("%d times.", count);
}