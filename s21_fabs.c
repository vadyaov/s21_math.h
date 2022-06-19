#include "s21_math.h"

/**
 * @brief 
 * вычисляет абсолютное значение числа с плавающей точкой
 * @param x number
 * @return long double 
 */
long double s21_fabs(double x) {
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    if (S21_IS_INF(x)) return S21_HUGE_VAL;
    return __builtin_signbit(x) ? -x : x;
}
