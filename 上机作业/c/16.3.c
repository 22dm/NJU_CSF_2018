#include <stdio.h>

int main() {
  int n[10], size = 10, i, j, k;

  printf("Enter ten nums: ");
  for (i = 0; i < size; i++) scanf("%d", &n[i]);

  for (i = 0; i < size; i++)
    for (j = i + 1; j < size; j++)
      if (n[i] == n[j]) {
        for (k = j; k < size - 1; k++) n[k] = n[k + 1];
        size--;
        j--;
      }

  for (i = 0; i < size; i++) printf("%d ", n[i]);
}
