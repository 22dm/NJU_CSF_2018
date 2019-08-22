#include <stdio.h>

char diag(int x) {
  if (x > 1 && x < 8) return 'a' + 3 * (x - 2);
  if (x >= 8 && x <= 9) return 'a' + 3 * (x - 2) + 1;
  return 'z' + 1;
}

int main() {
  int n;
  scanf("%d", &n);
  char a, b;
  for (a = diag(n / 10); a < diag(n / 10 + 1); a++)
    for (b = diag(n % 10); b < diag(n % 10 + 1); b++) printf("%c%c ", a, b);
}