#include "s21_math.h"

/**
 * @brief 
 * остаток операции деления с плавающей точкой
 * @param x делимое
 * @param y делитель
 * @return long double 
 */
long double s21_fmod(double x, double y) {
    if (!y) return S21_NAN_VAL;
    if (x > 0) {
        if (__builtin_signbit(y)) y *= -1.0;
        while (x >= y) {
            x -= y;
        }    
    }
    if (x < 0) {
        if (__builtin_signbit(y)) y *= -1.0;
        while (x <= 0) {
            x += y;
        }
        if (x > 0) x -= y;
        if (x == 0.0L) x = -0.0L;
    }
    return (long double)x;
}
