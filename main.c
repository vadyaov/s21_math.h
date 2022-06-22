#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

int main() {
    printf("%.6lf\n%.6Lf", sin(62.830), s21_sin(62.830));
    return 0;
}
