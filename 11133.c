#include <stdio.h>

int main() {
  int length;
  scanf("%d", &length);

  int arr[length];

  // Input to the array.
  for (int i = 0; i < length; ++i) {
    scanf("%d", &arr[i]);
  }

  // Bubble sorting (you may also use other way to implement bubble sort.)
  for (int i = length - 1; i > 0; --i) {
    for (int j = 0; j < i; ++j) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // We aim to find the Nth smallest element.
  int N;
  scanf("%d", &N);

  // "counter" means how many different numbers we have encountered.
  int counter = 1;
  for (int i = 1; i < length; ++i) {
    /* 
     * If the number and the last number are different,
     * "counter" is added by 1 and we check whether we
     * have encountered sufficient different numbers.
     */
    if (arr[i] != arr[i - 1]) {
      counter++;
      // If we have met N different numbers
      if (counter == N) {
        printf("%d", arr[i]);
        break;
      }
    }
  }

  return 0;
}