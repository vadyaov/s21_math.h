#include "s21_math.h"
#include <stdio.h>

/**
 * @brief 
 * вычисляет натуральный логарифм
 * @param x number
 * @return long double 
 */
long double s21_log(double x) {
    if (!x || s21_fabs(x) < EPS) return -S21_HUGE_VAL;
    if (S21_IS_INF(x) == 1) return S21_HUGE_VAL;
    if (x == 2) return S21_LN2;
    if (s21_fabs(x - 1.0) < EPS) return 0.0L;
    if (s21_fabs(x - S21_ME) <= 1e-15) return 1.0L;
    if (__builtin_signbit(x) || S21_IS_INF(x) == -1) return S21_NAN_VAL;
    long double res = 0.0L;
    if (x < (2.0 - EPS)) {
        long double num = (long double)x - 1.0L;
        long double sign = 1.0L;
        long double delim = 1.0L;
        long double ch = num;
        while (ch > 1E-25) { // 0 < x < 2
            res += ch / delim * sign;
            ch *= num;
            sign *= -1.0L;
            delim += 1.0L;
        }      
    } else {
        long double del = 0.0L;
        long double how_much = 0.0L;
        while (x - 2.0L > EPS) {
            del = x / 2.0L;
            x /= 2.0L;
            how_much++;
        }
        res = how_much *S21_LN2 + s21_log(del);
    }
    
    return res;
}
