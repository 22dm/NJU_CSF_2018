#include <stdio.h>

double power(double x, int y) {
  double p = 1;
  int neg = 0;
  if (y < 0) {
    neg = 1;
    y = -y;
  }
  while (y--) p *= x;
  return neg ? 1 / p : p;
}

int main() {
  double x;
  int y;
  scanf("%lf %d", &x, &y);
  printf("%f", power(x, y));
}