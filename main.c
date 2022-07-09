#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG MAXFLOAT

// tan pi/2 + pi*n not working!!!!!!
// ceil not working !!!

int main() {
    //for (double i = -1.000000; i <= 1.000000; i += 0.0001)
        printf("lib: %f\tmy:  %02Lf\n", tan(ARG), s21_tan(ARG));
    return 0;
}
