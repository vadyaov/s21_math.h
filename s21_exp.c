#include "s21_math.h"

/* возвращает значение e, возведенное в заданную степень
 */
long double s21_exp(double x) {
    long double res = 0;
    for (int k = 0; k < 6; k++) {

    }
}

double simple_s21_pow(double x, int exp) {
    double res = 0.0;
    if (exp > 0) {
        res = x;
        for (int i = 1; i < exp; i++) {
            res *= x;
        }
    }
    if (exp < 0) {
        res = 1 / x;
        for (int i = -1; i > exp; i--) {
            res *= 1 / x;
        }
    }
    return res;
}