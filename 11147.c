#include <stdio.h>

int main() {
  int stack[100] = {0};
  int endIndex = 0;
  char operation;
  int element;

  while (scanf("\n%c %d", &operation, &element) != EOF) {
    if (operation == 'I') {
      stack[endIndex] = element;
      endIndex++;
    } else {
      stack[endIndex - 1] = 0;
      endIndex--;
    }
  }
  if (endIndex == 0) {
    printf("The stack is empty.");
  }
  for (int i = 0; i < endIndex; ++i) {
    printf("%d", stack[i]);
    if (i != endIndex - 1) printf(" ");
  }

  return 0;
}