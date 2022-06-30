#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG -S21_NAN_VAL

int main() {
    //printf("lib:%lf", floor(ARG));
    printf("lib:%lf\nmy: %Lf", acos(ARG), s21_acos(ARG));
    return 0;
}
