#include <stdio.h>

int main() {
  // Declare the map.
  int m, n;
  scanf("%d%d", &m, &n);
  int map[m][n];

  // Go through the map.
  for (int row = 0; row < m; row++) {
    for (int col = 0; col < n; col++) {
      // If the grid is in the top row of the left-most column, initialize it with 1;
      if (row == 0 || col == 0) map[row][col] = 1;
      // otherwise the value of each grid equals the sum of the left and the above grids.
      else map[row][col] = map[row - 1][col] + map[row][col - 1];
    }
  }

  printf("%d", map[m - 1][n - 1]);
  return 0;
}