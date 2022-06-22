#include "s21_math.h"
#include <stdio.h>

/**
 * @brief 
 * вычисляет синус
 * @param x number (rad)
 * @return long double 
 */
long double s21_sin(double x) {
    if (S21_IS_NAN(x) || S21_IS_INF(x)) return S21_NAN_VAL;
    if (s21_fabs(x) < EPS) return x;
    while (x > 2 * S21_M_PI) {
        x -= 2 * S21_M_PI;
    }
    if (s21_fabs((x / (2 * S21_M_PI))) == 1.0L) x *= -1.0L; 
    long double res = (long double)x;
    long double factor = 1.0L;
    long double ch = res;
    int i = 1;
    while (s21_fabs(ch / factor) > 1e-10 && i < 100) {
        factor *= ((2 * i) * (2 * i + 1));
        ch *= -1.0L * (long double)x * (long double)x;
        res += ch / factor;
        i++;
    }
    return res;
}
