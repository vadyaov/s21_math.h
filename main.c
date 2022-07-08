#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG 8.0

// tan pi/2 + pi*n not working!!!!!!
// ceil not working !!!

int main() {
    printf("lib: %f\nmy:  %02Lf", ceil(ARG), s21_ceil(ARG));
    return 0;
}
