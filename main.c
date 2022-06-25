#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

int main() {
    printf("%lf\n%Lf", tan(-2 * S21_M_PI / 3), s21_tan(-2 * S21_M_PI / 3));
    return 0;
}
