#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG - 5 * S21_M_PI2

//tan pi/2 + pi*n not working!!!!!!

int main() {
    //for (double i = -1.000000; i <= 1.000000; i += 0.0001)
        printf("lib: %.30f\tmy:  %.30Lf\n", tan(ARG), s21_tan(ARG));
    return 0;
}
