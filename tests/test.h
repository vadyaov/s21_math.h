#ifndef SRC_TESTS_TEST_H_
#define SRC_TESTS_TEST_H_

#include <check.h>
#include <math.h>
#include <stdlib.h>
#include "../s21_math.h"
#include <limits.h>

Suite *s21_Suite_abs();
Suite *s21_Suite_fabs();
Suite *s21_Suite_fmod();
Suite *s21_Suite_floor();
Suite *s21_Suite_ceil();
Suite *s21_Suite_exp();
Suite *s21_Suite_log();
Suite *s21_Suite_pow();
Suite *s21_Suite_sqrt();
Suite *s21_Suite_sin();
Suite *s21_Suite_asin();
Suite *s21_Suite_cos();
Suite *s21_Suite_acos();
Suite *s21_Suite_tan();
Suite *s21_Suite_atan();

#endif  // SRC_TESTS_TEST_H_