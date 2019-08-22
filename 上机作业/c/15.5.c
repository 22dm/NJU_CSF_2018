#include <stdio.h>

int isPrime(int n) {
  int i;
  for (i = 2; i < n; i++)
    if (!(n % i)) return 0;
  return n > 1;
}

int main() {
  int i;
  for (i = 1; i < 100; i++)
    if (isPrime(i)) printf("%d ", i);
}