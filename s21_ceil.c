#include "s21_math.h"


/**
 * @brief 
 * возвращает ближайшее целое число, не меньшее заданного значения
 * @param x 
 * @return long double 
 */
long double s21_ceil(double x) {
    if (S21_IS_INF(x) || s21_fabs(x) >= s21_pow(2, 52) || !s21_fabs(x) || !s21_fmod(x, (long long)x)) return x;
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    long double res = __builtin_signbit(x) ? (long long)(x) : (long long)(x + 1);
    if (__builtin_signbit(x) && !res) res *= -1.0L;
    return res;
}
