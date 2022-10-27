#include <stdio.h>
 
int main() {
  int target;
  int arr[1000];
  int n = 0;
  scanf("%d", &target);

//while(scanf("%d", &arr[n]) != EOF)
  while(scanf("%d", arr + n) != EOF) {
    n++;
  }

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(arr[i] + arr[j] == target) {
        printf("[%d, %d]", i, j);
        return 0; // stop executing
      }
    }
  }
 
  return 0;
}