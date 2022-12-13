#include <stdio.h>

int adjust_point(int *n) {
    if (*n < 0) *n = 0;
    if (*n > 100) *n = 100;
}

int main() {
    int point;

    printf("test score: "); scanf("%d",&point);
    adjust_point(&point);
    printf("score is %d.", point);

    return 0;
}           