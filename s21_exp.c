#include "s21_math.h"

/**
 * @brief 
 * возвращает значение e, возведенное в заданную степень
 * @param x показатель степени
 * @return long double 
 */
long double s21_exp(double x) {
    if (S21_IS_NAN(x)) return S21_NAN_VAL;
    if (S21_IS_INF(x) == 1) return S21_HUGE_VAL;
    if (S21_IS_INF(x) == -1) return 0;
    long double res = 1.0;
    long double chlen = 1.0;
    int k = 1;
    while (s21_fabs(chlen / res) > 1e-50) {
        chlen *= (long double)x / k++;
        res += chlen;
    }
    return res;
}
