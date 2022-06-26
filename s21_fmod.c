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
    y = s21_fabs(y);
    if (x > 0) {
        while (x >= y) {
            x -= y;
        }    
    }
    if (x < 0) {
        while (x <= 0) {
            x += y;
        }
        if (x > 0) x -= y;
        if (x == 0.0L) x = -0.0L;
    }
    return (long double)x;
}
