#include "s21_math.h"

/**
 * @brief
 * вычисляет квадратный корень
 * @param x number (double)
 * @return long double 
 */
long double s21_sqrt(double x) {
    if (__builtin_signbit(x)) return S21_NAN_VAL;
    if (S21_IS_INF(x)) return S21_HUGE_VAL;
    return s21_pow(x, 0.5);
}