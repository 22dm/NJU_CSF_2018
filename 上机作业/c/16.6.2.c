#include <stdio.h>

void StrCpy(char* firstStr, char* secondStr) {
  while (*firstStr++ = *secondStr++)
    ;
}

int main() {
  char str1[20], str2[20];
  printf("Enter first string: ");
  scanf("%s", str1);
  printf("Enter second string: ");
  scanf("%s", str2);
  StrCpy(str1, str2);
  printf(str1);
}