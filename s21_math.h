#ifndef SRC_S21_MATH_H
#define SRC_S21_MATH_H

#define EPS 1E-6

#define S21_M_PI 3.14159265358979323846264338327950288
#define S21_ME 2.71828182845904523536028747135266250
#define S21_LN2 0.693147180559945309417232121458176568
#define S21_M_PI2 1.5707963267948966192313216916397514

// https://gcc.gnu.org/onlinedocs/gcc-4.5.0/gcc/Other-Builtins.html

/** 
  * returns float infinite value
  * This function is suitable for implementing the ISO C99 macro INFINITY
  */ 
#define S21_HUGE_VAL (__builtin_inff())
/**
  * returns float NaN value
  */
#define S21_NAN_VAL (__builtin_nanf(""))
/**
  * check for infinity: returns 1 if infinite, -1 if -infinite and 0 if finite
  */
#define S21_IS_INF(x) __builtin_isinf_sign(x)
/**
 * check for nan value: returns 1 if NaN and 0 if not 
 */
#define S21_IS_NAN(x) __builtin_isnan(x)

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_exp(double x);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_cos(double x);

unsigned s21_factorial(unsigned n);
long double simple_s21_pow(long double x, int exp);

#endif  // SRC_S21_MATH_H
