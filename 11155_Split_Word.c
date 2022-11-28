#include <ctype.h>
#include <stdio.h>

int main() {
  char x[1000];
  int index = 0;
  while (scanf("%c", &x[index]) != EOF) {
    index++;
  }
  int length = index;
  for (int i = 0; i < length; i++) {
    if (isalnum(x[i])) {
      printf("%c", x[i]);
    }
    else if (isspace(x[i])) {
      printf("\n");
    }
  }
  return 0;
}