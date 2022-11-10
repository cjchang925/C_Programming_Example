#include <stdio.h>

int main() {
  int numberOfStrings;
  scanf("%d", &numberOfStrings);

  char name[10];
  for (int i = 0; i < numberOfStrings; ++i) {
    scanf("%s", name);
    
    // If the input is the last name
    if (i == numberOfStrings - 1) {
      printf("%s", name);
    }
    else {
      printf("%c. ", name[0]);
    }
  }
  
  return 0;
}