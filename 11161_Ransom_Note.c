#include <stdio.h>
#include <string.h>

int main() {
  char target[100];
  char magazine[500];
  scanf("%s %s", target, magazine);

  int target_length = strlen(target);
  int magazine_length = strlen(magazine);

  for (int target_index = 0; target_index < target_length; ++target_index) {
    // Go through "target"
    for (int magazine_index = 0; magazine_index < magazine_length; ++magazine_index) {
      if (target[target_index] == magazine[magazine_index]) {
        // Find same characters
        magazine[magazine_index] = '-';
        break;
      }
      // If we cannot find the same character, print "false"
      if (magazine_index == magazine_length - 1) {
        printf("false");
        return 0;
      }
    }
  }

  printf("true");
  return 0;
}