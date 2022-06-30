#include "s21_math.h"

/**
 * @brief 
 * вычисляет арккосинус
 * @param x 
 * @return long double 
 */
long double s21_acos(double x) {
    long double res = 0.0L;
    if (x >= 0 && x <= 1) {
        res = s21_atan((s21_sqrt(1.0 - s21_pow(x, 2))) / x);
    } else if (x >= -1 && x < 0) {
        res = S21_M_PI + s21_atan((s21_sqrt(1.0 - s21_pow(x, 2))) / x);
    } else {
        res = S21_NAN_VAL;
    }
    return res;
}
