#include <stdio.h>

int main() {
  int m[10][10];
  for (int i = 0; i < 100; i++) scanf("%d", m[0] + i);
  for (int y = 1; y < 9; y++)
    for (int x = 1; x < 9; x++) {
      for (int i = -1, count = 1; i <= 1; i++)
        for (int j = -1; j <= 1; j++, count++)
          if (count % 2 == 1 && m[y + i][x + j] == 0)
            goto Fail;
          else if (count % 2 == 0 && m[y + i][x + j] == 1)
            goto Fail;
      printf("X is centered at (%d, %d).\n", y, x);
      return 0;
    Fail:
      continue;
    }
  printf("There is no X.\n");
}