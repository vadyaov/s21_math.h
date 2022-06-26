#include "s21_math.h"
#include <stdio.h>

/**
 * @brief 
 * возвращает ближайшее целое число, не меньшее заданного значения
 * @param x 
 * @return long double 
 */
long double s21_ceil(double x) {
    if (S21_IS_INF(x) || s21_fabs(x) >= s21_pow(2, 52)) return x;
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    if (!s21_fabs(x)) return x;
    long double res = __builtin_signbit(x) ? (long long)(x) : (long long)(x + 1);
    if (__builtin_signbit(x) && !res) res *= -1.0L;
    return res;
}
