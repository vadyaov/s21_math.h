#ifndef SRC_TESTS_TEST_H_
#define SRC_TESTS_TEST_H_

#include <check.h>
#include <math.h>
#include <stdlib.h>
#include "../s21_math.h"
#include <limits.h>

Suite *s21_Suite_abs();
Suite *s21_Suite_fabs();
Suite *s21_Suite_exp();
Suite *s21_Suite_log();

Suite *s21_Suite_factorial();

#endif  // SRC_TESTS_TEST_H_