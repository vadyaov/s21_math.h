#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#define ARG 12.5

int main() {
    // for (int R = 20; R >= -20; R -= 4) {
    //     for (double k = 2 * S21_M_PI; k > -2 * S21_M_PI; k -= S21_M_PI / 9) {
    //         //ck_assert_double_eq_tol(tan(k + R * s21_M_PI), s21_tan(k + R * s21_M_PI), 1e-5);
    //         printf("k = %lf\nR = %d\norig = %lf\nnash = %Lf\n\n", k, R, sin(k + R * S21_M_PI), s21_sin(k + R * S21_M_PI));
    //     }
    // }
    printf("lib: %lf\nmy: %02Lf", exp(5 * log(ARG)), s21_exp(5 * s21_log(ARG)));
    return 0;
}
