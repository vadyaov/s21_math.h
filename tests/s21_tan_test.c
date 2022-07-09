#include "test.h"

START_TEST(s21_tan_test_1) {
    ck_assert_double_eq_tol(tan(0.123456), s21_tan(0.123456), EPS);
} END_TEST

START_TEST(s21_tan_test_2) {
    ck_assert_double_nan(s21_tan(S21_NAN_VAL));
} END_TEST

START_TEST(s21_tan_test_3) {
    ck_assert_double_nan(s21_tan(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_tan_test_4) {
    ck_assert_double_nan(s21_tan(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_tan_test_5) {
    ck_assert_double_eq_tol(tan(-0.123456), s21_tan(-0.123456), EPS);
} END_TEST

START_TEST(s21_tan_test_6) {
    ck_assert_double_eq_tol(tan(11115.123456), s21_tan(11115.123456), EPS);
} END_TEST

START_TEST(s21_tan_test_7) {
    ck_assert_double_eq_tol(tan(-11115.123456), s21_tan(-11115.123456), EPS);
} END_TEST

START_TEST(s21_tan_test_8) {
    ck_assert_double_eq_tol(tan(0.000001), s21_tan(0.000001), EPS);
} END_TEST

START_TEST(s21_tan_test_9) {
    ck_assert_double_eq_tol(tan(-0.0), s21_tan(-0.0), EPS);
}
END_TEST

START_TEST(s21_tan_test_10) {
    ck_assert_double_nan(s21_tan(-0.0/0.0));
} END_TEST

START_TEST(s21_tan_test_11) {
    for (double i = 1.0; i >= -1.0; i -= 0.0001)
        ck_assert_ldouble_eq_tol(tan(i), s21_tan(i), EPS);
} END_TEST