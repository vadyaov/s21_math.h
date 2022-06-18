#include "test.h"

START_TEST(s21_pow_test1) {
    long double res1 = pow(2, 3);
    long double res2 = s21_pow(2, 3);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

START_TEST(s21_pow_test2) {
    long double res1 = pow(0, 0);
    long double res2 = s21_pow(0, 0);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

START_TEST(s21_pow_test3) {
    long double res1 = pow(3, -1);
    long double res2 = s21_pow(3, -1);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

Suite *s21_Suite_factorial() {
    Suite *s;
    s = suite_create("Pow Unit Test");

    TCase *tc1_s21_pow = tcase_create("test1_s21_pow");

    tcase_add_test(tc1_s21_pow, s21_pow_test1);

    suite_add_tcase(s, tc1_s21_pow);

  return s;
}