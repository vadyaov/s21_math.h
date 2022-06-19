#include "s21_math.h"

/**
 * @brief 
 * вычисляет абсолютное значение целого числа
 * @param x - number
 * @return int 
 */
int s21_abs(int x) {
    return x > 0 ? x : -x;
}
