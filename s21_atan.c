#include "s21_math.h"
#include <stdio.h>

/**
 * @brief 
 * вычисляет арктангенс
 * @param x 
 * @return long double 
 */
long double s21_atan(double x) {
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    if (S21_IS_INF(x) == 1) return S21_M_PI2;
    if (S21_IS_INF(x) == -1) return -S21_M_PI2;
    long double res = s21_fabs(x);
    long double num = res * res;
    long double ch = res;
    long double del = 1.0L;
    if (res > 1.0) {
        res = S21_M_PI2 - s21_atan(1.0 / res);
    } else {
        while (s21_fabs(ch / del) > 1e-8) {
            del += 2;
            ch *= num * (-1);
            res += ch / del;
        }
    }
    return __builtin_signbit(x) ? -res : res;
}
