#include <stdio.h>
#include <string.h>

typedef struct student {
  int id;
  char name[20];
  char date[4];
  int year;
} Student;

int main() {
  Student arr[5];
  for (int i = 0; i < 5; ++i) {
    scanf("%d %s %s %d", &(arr[i].id), arr[i].name, arr[i].date, &(arr[i].year));
  }

  for (int big = 4; big > 0; --big) {
    for (int small = 0; small < big; ++small) {
      if (strcmp(arr[big].name, arr[small].name) < 0) {
        Student temp = arr[big];
        arr[big] = arr[small];
        arr[small] = temp;
      }
    }
  }

  for (int i = 0; i < 5; ++i) {
    printf("%d %s %s %d\n", arr[i].id, arr[i].name, arr[i].date, arr[i].year);
  }

  return 0;
}