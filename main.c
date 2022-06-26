#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG -12412541251.12512515

int main() {
    //printf("lib:%lf", floor(ARG));
    printf("lib:%lf\nmy: %Lf", ceil(ARG), s21_ceil(ARG));
    return 0;
}
