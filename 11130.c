#define ESP 46438476 /* Exclusive Special Prize */
#define SP  54769852 /* Special Prize */
#define TP1 17858097 /* Top Prize 1 */
#define TP2 94045042 /* Top Prize 2 */
#define TP3 5236836  /* Top Prize 3 */
 
#include <stdio.h>

int main() {
  int n;
  int a[8] = {0};

  while (scanf("%d", &n) != EOF) {
    if (n == ESP) {
      a[0]++;
    }
    if (n == SP) {
      a[1]++;
    }
    if (n == TP1 || n == TP2 || n == TP3) {
      a[2]++;
    }
    else if ((n % 10000000) == (TP1 % 10000000) ||
             (n % 10000000) == (TP2 % 10000000) ||
             (n % 10000000) == (TP3 % 10000000)) {
      a[3]++;
    }
    else if ((n % 1000000) == (TP1 % 1000000) ||
             (n % 1000000) == (TP2 % 1000000) ||
             (n % 1000000) == (TP3 % 1000000)) {
      a[4]++;
    }
    else if ((n % 100000) == (TP1 % 100000) ||
             (n % 100000) == (TP2 % 100000) ||
             (n % 100000) == (TP3 % 100000)) {
      a[5]++;
    }
    else if ((n % 10000) == (TP1 % 10000) || 
             (n % 10000) == (TP2 % 10000) ||
             (n % 10000 == TP3 % 10000)) {
      a[6]++;
    } 
    else if ((n % 1000) == (TP1 % 1000) || 
             (n % 1000) == (TP2 % 1000) ||
             (n % 1000) == (TP3 % 1000)) {
      a[7]++;
    }
  }
  printf("Exclusive special prize: %d\n", a[0]);
  printf("Special prize: %d\n", a[1]);
  printf("Top prize: %d\n", a[2]);
  printf("Second prize: %d\n", a[3]);
  printf("Third prize: %d\n", a[4]);
  printf("Fourth prize: %d\n", a[5]);
  printf("Fifth prize: %d\n", a[6]);
  printf("Sixth prize: %d\n", a[7]);
  int total = a[0] * 10000000 + a[1] * 2000000 + a[2] * 200000 + a[3] * 40000 +
              a[4] * 10000    + a[5] * 4000    + a[6] * 1000   + a[7] * 200;
  printf("Total prize: %d", total);
}