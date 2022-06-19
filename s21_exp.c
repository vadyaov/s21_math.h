#include "s21_math.h"
#include <stdio.h>

/* возвращает значение e, возведенное в заданную степень
 */
long double s21_exp(double x) {
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    if (S21_IS_INF(x) == 1) return S21_HUGE_VAL;
    if (S21_IS_INF(x) == -1) return 0;
    return 2;
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
