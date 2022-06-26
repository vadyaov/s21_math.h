#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG 0, 0

int main() {
    //printf("lib:%lf", fmod(10.41, 10.41));
    printf("lib:%lf\nmy: %Lf", fmod(ARG), s21_fmod(ARG));
    return 0;
}
