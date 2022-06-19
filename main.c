#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

int main() {
    printf("%.20lf\n%.20Lf", exp(-2), s21_exp(-2));
    return 0;
}
