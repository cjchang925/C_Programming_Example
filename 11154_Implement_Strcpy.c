#include <stdio.h>

void strcpy(char* source, char* target, int length) {
  for (int i = 0; i < length; ++i) {
    target[i] = source[i];
  }
  return;
}

int main() {
  int length;
  scanf("%d", &length);

  char eatEndLine;
  scanf("%c", &eatEndLine);

  char source[200] = {0};
  char target[200] = {0};

  for (int i = 0; i < length; ++i) {
    scanf("%c", &source[i]);
  }

  strcpy(source, target, length);

  printf("%s", target);

  return 0;
}