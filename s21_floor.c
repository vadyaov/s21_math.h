#include "s21_math.h"

/**
 * @brief 
 * возвращает ближайшее целое число, не превышающее заданное значение
 * @param x - number
 * @return long double 
 */
long double s21_floor(double x) {
    if (S21_IS_INF(x) || s21_fabs(x) >= s21_pow(2, 52)) return x;
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    if (!s21_fabs(x)) return x;
    long double res = __builtin_signbit(x) ? (long long)x - 1 : (long long)x;
    return res;
}
