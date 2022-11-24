#include "Check_Valid.h"
#include <stdbool.h>

bool isValid(int *id) {
  int sum = 0;
  for (int i = 0; i < 10; ++i) {
    sum += i * id[i];
  }
  return (sum % 10 == 0);
}