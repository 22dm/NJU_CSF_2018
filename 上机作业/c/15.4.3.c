#include <stdio.h>

double sqr(double x, double y) {
  double yn = (y + x / y) / 2;
  return yn - y < 1E-6 && yn - y > -1E-6 ? y : sqr(x, yn);
}

int main() {
  double x;
  scanf("%lf", &x);
  printf("%f", sqr(x, 1));
}