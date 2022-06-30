#include "s21_math.h"
#include <stdio.h>

/**
 * @brief 
 * вычисляет арксинус
 * @param x 
 * @return long double 
 */
long double s21_asin(double x) {
    if (s21_fabs(x) > 1.0L || S21_IS_INF(x) || S21_IS_NAN(x))
        return S21_NAN_VAL;
    return s21_atan(x / s21_sqrt(1 - s21_pow(x, 2)));
}
