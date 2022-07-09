#include "s21_math.h"

/**
 * @brief 
 * возводит число в заданную степень
 * @param base number
 * @param exp power
 * @return long double
 */
long double s21_pow(double base, double exp) {
    if (!exp) return 1.0L;
    if (S21_IS_NAN(base) || S21_IS_NAN(exp)) return S21_NAN_VAL;
    if ((S21_IS_INF(base) && __builtin_signbit(exp)) ||
        (!S21_IS_INF(base) && s21_fabs(base) != 1.0L && s21_fabs(base) != 0.0L && S21_IS_INF(exp) == -1))
        return 0.0L;
    if (S21_IS_INF(base) == -1 && (exp / s21_floor(exp) == 1.0L && s21_fmod(exp, 2) == 1.0)) return -S21_HUGE_VAL;
    if (S21_IS_INF(base) && !__builtin_signbit(exp)) return S21_HUGE_VAL;
    if (!base && __builtin_signbit(exp)) return S21_HUGE_VAL;
    if (s21_fabs(base) == 1.0L && S21_IS_INF(exp)) return 1.0L;
    if (!base && S21_IS_INF(exp) == 1) return 0.0L;
    if (!S21_IS_INF(base) && S21_IS_INF(exp) == 1) return S21_HUGE_VAL;
    long double res = 0.0L;
    if (base < 0 && exp / s21_floor(exp) == 1.0L) {
        if (s21_fmod(exp, 2) == 1) res = -s21_exp(exp * s21_log(s21_fabs(base)));
        else res = s21_exp(exp * s21_log(s21_fabs(base)));
    } else if (base > 0) {
        res = s21_exp(exp * s21_log(s21_fabs(base)));
    } else if (!base){
        res = 0.0L;
    } else {
        res = S21_NAN_VAL;
    }
    return res;
}
