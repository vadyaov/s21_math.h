#include "s21_math.h"

/**
 * @brief 
 * вычисляет тангенс
 * @param x number (rad)
 * @return long double 
 */
long double s21_tan(double x) {
    if (S21_IS_NAN(x) || S21_IS_INF(x)) return S21_NAN_VAL;
    // if (!s21_fmod(x, S21_M_PI2)) return __builtin_signbit(x) ? -16331239353195370 : 16331239353195370.0;
    return s21_sin(x) / s21_cos(x);
}
