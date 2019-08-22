#include <stdio.h>

int main() {
  char str[20], *p = str;
  int n;
  printf("Enter a string: ");
  scanf("%s", str);
  printf("Enter a number: ");
  scanf("%d", &n);
  while (*p) {
    if (*p > 126 - n)
      *p -= (94 - n);
    else
      *p += n;
    p++;
  }
  printf(str);
}