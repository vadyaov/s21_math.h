#include "s21_math.h"

unsigned s21_factorial(unsigned n) {
    return (n < 2) ? 1 : n * s21_factorial(n - 1);
}
