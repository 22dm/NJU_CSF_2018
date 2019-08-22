#include <stdio.h>

void printBin(int n, int dig) {
  if (!dig) return;
  printBin(n >> 1, dig - 1);
  printf("%d", n & 1);
}

int main() {
  int n;
  scanf("%d", &n);
  printBin(n, 32);
}