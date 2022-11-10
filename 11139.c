#include <stdio.h>

int main() {
  int arr[10][10];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 1; i < 9; i++) {
    for (int j = 1; j < 9; j++) {
      if (arr[i][j] == 1 && arr[i - 1][j - 1] == 1 && arr[i + 1][j - 1] == 1 &&
          arr[i - 1][j + 1] == 1 && arr[i + 1][j + 1] == 1 && arr[i - 1][j] == 0 && 
          arr[i + 1][j] == 0 && arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
        printf("X is centered at (%d, %d).", i, j);
        return 0; // End this program.
      }
    }
  }

  printf("There is no X.");

  return 0;
}