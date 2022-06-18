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

START_TEST(s21_pow_test4) {
    long double res1 = pow(-5, 5);
    long double res2 = s21_pow(-5, 5);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

START_TEST(s21_pow_test4) {
    long double res1 = pow(MAXFLOAT, 7);
    long double res2 = s21_pow(MAXFLOAT, 7);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

START_TEST(s21_pow_test5) {
    long double res1 = pow(0.5, 1.245);
    long double res2 = s21_pow(0.5, 1.245);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

START_TEST(s21_pow_test6) {
    long double res1 = pow(0.99999, 0.99999);
    long double res2 = s21_pow(0.99999, 0.99999);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

START_TEST(s21_pow_test7) {
    long double res1 = pow(99, -0.99999);
    long double res2 = s21_pow(99, -0.99999);
    ck_assert_ldouble_eq(res1, res2);
} END_TEST

Suite *s21_Suite_factorial() {
    Suite *s;
    s = suite_create("Pow Unit Test");

    TCase *tc1_s21_pow = tcase_create("test1_s21_pow");
    TCase *tc2_s21_pow = tcase_create("test2_s21_pow");
    TCase *tc3_s21_pow = tcase_create("test3_s21_pow");
    TCase *tc4_s21_pow = tcase_create("test4_s21_pow");
    TCase *tc5_s21_pow = tcase_create("test5_s21_pow");
    TCase *tc6_s21_pow = tcase_create("test6_s21_pow");
    TCase *tc7_s21_pow = tcase_create("test7_s21_pow");

    tcase_add_test(tc1_s21_pow, s21_pow_test1);
    tcase_add_test(tc2_s21_pow, s21_pow_test2);
    tcase_add_test(tc3_s21_pow, s21_pow_test3);
    tcase_add_test(tc4_s21_pow, s21_pow_test4);
    tcase_add_test(tc5_s21_pow, s21_pow_test5);
    tcase_add_test(tc6_s21_pow, s21_pow_test6);
    tcase_add_test(tc7_s21_pow, s21_pow_test7);

    suite_add_tcase(s, tc1_s21_pow);
    suite_add_tcase(s, tc2_s21_pow);
    suite_add_tcase(s, tc3_s21_pow);
    suite_add_tcase(s, tc4_s21_pow);
    suite_add_tcase(s, tc5_s21_pow);
    suite_add_tcase(s, tc6_s21_pow);
    suite_add_tcase(s, tc7_s21_pow);

  return s;
}