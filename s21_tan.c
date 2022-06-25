#include "s21_math.h"

/**
 * @brief 
 * вычисляет тангенс
 * @param x number (rad)
 * @return long double 
 */
long double s21_tan(double x) {
    if (S21_IS_NAN(x) || S21_IS_INF(x)) return S21_NAN_VAL;
    return s21_sin(x) / s21_cos(x);
}
