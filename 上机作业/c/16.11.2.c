#include <stdio.h>

void T(int *p, int m, int n, int *q) {
  int i, j;
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) q[j * m + i] = p[i * n + j];
}

int main() {
  int p[3][4], q[4][3];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("p[%d][%d] = ", i, j);
      scanf("%d", &p[i][j]);
    }
  }

  T(*p, 3, 4, *q);
  
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) printf("%d ", q[i][j]);
    printf("\n");
  }
}