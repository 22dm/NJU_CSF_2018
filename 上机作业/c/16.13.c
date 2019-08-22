#include <stdio.h>
#include <string.h>

int main() {
  char n[10][8];
  int size = 10, i, j, k;

  printf("Enter ten strings: ");
  for (i = 0; i < size; i++) scanf("%s", &n[i]);

  for (i = 0; i < size; i++)
    for (j = i + 1; j < size; j++)
      if (!strcmp(n[i], n[j])) {
        for (k = j; k < size - 1; k++) strcpy(n[k], n[k + 1]);
        size--;
        j--;
      }

  for (i = 0; i < size; i++) printf("%s ", n[i]);
}
