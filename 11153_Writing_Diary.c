#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int* b = a[0];
    int** c = &b;
    
    int* d = a[1];
    int** e = &d;

    int* f = a[2];
    int** g = &f;

    printf("Today is %d%d/%d%d, and the midterm is so fun!\n", c[0][0], c[0][0], c[0][1], c[0][0]);
    printf("Last weekend, Dwight Howard got %d%d points, %d%d rebounds and %d assists!",
            c[0][2], g[0][1], c[0][1], e[0][1], g[0][2]);
    
    return 0;
}