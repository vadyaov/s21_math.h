#include "s21_math.h"

/**
 * @brief 
 * вычисляет косинус
 * @param x number (rad)
 * @return long double 
 */
long double s21_cos(double x) {
    if (S21_IS_NAN(x) || S21_IS_INF(x)) return S21_NAN_VAL;
    if (s21_fabs(x) < EPS) return 1.0L;
    while (x > 2 * S21_M_PI) {
        x -= 2 * S21_M_PI;
    }
    if (s21_fabs(x / S21_M_PI2) == 1.0L) {
        if (x > S21_M_PI2 && x < 3 * S21_M_PI2) return -0.0L;
        else return 0.0L;
    }
    long double res = 1.0L;
    long double ch = 1.0L;
    int i = 1;
    while(s21_fabs(ch / res) > 1e-100) {
        ch = (-ch * x * x) / ((2.0 * i - 1) * (2.0 * i));
        res += ch;
        i++;
    }
    return res;
}
