#include "s21_math.h"
#include <stdio.h>

/* возвращает значение e, возведенное в заданную степень
 */
long double s21_exp(double x) {
    return simple_s21_pow(EXPO, x);
}

long double simple_s21_pow(long double x, int exp) {
    long double res = 0.0;
    if (exp > 0) {
        res = x;
        for (int i = 1; i < exp; i++) {
            res *= x;
        }
    }
    if (exp < 0) {
        res = 1.0 / x;
        for (int i = -1; i > exp; i--) {
            res *= 1 / x;
        }
    }
    if (!exp) res = 1.0;
    return res;
}
