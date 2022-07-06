#include "test.h"

START_TEST(s21_pow_test1) {
    double res1 = pow(2, 3);
    long double res2 = s21_pow(2, 3);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test2) {
    double res1 = pow(0, 0);
    long double res2 = s21_pow(0, 0);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test3) {
    double res1 = pow(3, -1);
    long double res2 = s21_pow(3, -1);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test4) {
    double res1 = pow(-5, 5);
    long double res2 = s21_pow(-5, 5);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test5) {
    long double res1 = pow(0.352342, 7);
    long double res2 = s21_pow(0.352342, 7);
    ck_assert_ldouble_eq_tol(res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test6) {
    double res1 = pow(0.5, 1.245);
    long double res2 = s21_pow(0.5, 1.245);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test7) {
    double res1 = pow(0.99999, 0.99999);
    long double res2 = s21_pow(0.99999, 0.99999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test8) {
    double res1 = pow(99, -0.99999);
    long double res2 = s21_pow(99, -0.99999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test9) {
    double res1 = pow(99, -0.0001);
    long double res2 = s21_pow(99, -0.0001);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test10) {
    double res1 = pow(1, 10.000199999);
    long double res2 = s21_pow(1, 10.000199999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test11) {
    double res1 = pow(1.0001, 10.000199999);
    long double res2 = s21_pow(1.0001, 10.000199999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test12) {
    double res1 = pow(1.0001, -10.000199999);
    long double res2 = s21_pow(1.0001, -10.000199999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test13) {
    double res1 = pow(-1.0001, -10.100199999);
    long double res2 = s21_pow(-1.0001, -10.100199999);
    ck_assert_ldouble_nan((long double)res1);
    ck_assert_ldouble_nan(res2);
} END_TEST

START_TEST(s21_pow_test14) {
    double res1 = pow(S21_HUGE_VAL, -S21_HUGE_VAL);
    long double res2 = s21_pow(S21_HUGE_VAL, -S21_HUGE_VAL);
    ck_assert_ldouble_eq_tol(res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test15) {
    double res1 = pow(-12.5, 5);
    long double res2 = s21_pow(-12.5, 5);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test16) {
    double res1 = pow(-12.5, 6);
    long double res2 = s21_pow(-12.5, 6);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test17) {
    double res1 = pow(0.0, 6);
    long double res2 = s21_pow(0.0, 6);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test18) {
    double res1 = pow(S21_HUGE_VAL, -2);
    long double res2 = s21_pow(S21_HUGE_VAL, -2);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

Suite *s21_Suite_pow() {
    Suite *s;
    s = suite_create("Pow Unit Test");

    TCase *tc1_s21_pow = tcase_create("test1_s21_pow");
    TCase *tc2_s21_pow = tcase_create("test2_s21_pow");
    TCase *tc3_s21_pow = tcase_create("test3_s21_pow");
    TCase *tc4_s21_pow = tcase_create("test4_s21_pow");
    TCase *tc5_s21_pow = tcase_create("test5_s21_pow");
    TCase *tc6_s21_pow = tcase_create("test6_s21_pow");
    TCase *tc7_s21_pow = tcase_create("test7_s21_pow");
    TCase *tc8_s21_pow = tcase_create("test8_s21_pow");
    TCase *tc9_s21_pow = tcase_create("test9_s21_pow");
    TCase *tc10_s21_pow = tcase_create("test10_s21_pow");
    TCase *tc11_s21_pow = tcase_create("test11_s21_pow");
    TCase *tc12_s21_pow = tcase_create("test12_s21_pow");
    TCase *tc13_s21_pow = tcase_create("test13_s21_pow");
    TCase *tc14_s21_pow = tcase_create("test14_s21_pow");
    TCase *tc15_s21_pow = tcase_create("test15_s21_pow");
    TCase *tc16_s21_pow = tcase_create("test16_s21_pow");
    TCase *tc17_s21_pow = tcase_create("test17_s21_pow");
    TCase *tc18_s21_pow = tcase_create("test18_s21_pow");

    tcase_add_test(tc1_s21_pow, s21_pow_test1);
    tcase_add_test(tc2_s21_pow, s21_pow_test2);
    tcase_add_test(tc3_s21_pow, s21_pow_test3);
    tcase_add_test(tc4_s21_pow, s21_pow_test4);
    tcase_add_test(tc5_s21_pow, s21_pow_test5);
    tcase_add_test(tc6_s21_pow, s21_pow_test6);
    tcase_add_test(tc7_s21_pow, s21_pow_test7);
    tcase_add_test(tc8_s21_pow, s21_pow_test8);
    tcase_add_test(tc9_s21_pow, s21_pow_test9);
    tcase_add_test(tc10_s21_pow, s21_pow_test10);
    tcase_add_test(tc11_s21_pow, s21_pow_test11);
    tcase_add_test(tc12_s21_pow, s21_pow_test12);
    tcase_add_test(tc13_s21_pow, s21_pow_test13);
    tcase_add_test(tc14_s21_pow, s21_pow_test14);
    tcase_add_test(tc15_s21_pow, s21_pow_test15);
    tcase_add_test(tc16_s21_pow, s21_pow_test16);
    tcase_add_test(tc17_s21_pow, s21_pow_test17);
    tcase_add_test(tc18_s21_pow, s21_pow_test18);

    suite_add_tcase(s, tc1_s21_pow);
    suite_add_tcase(s, tc2_s21_pow);
    suite_add_tcase(s, tc3_s21_pow);
    suite_add_tcase(s, tc4_s21_pow);
    suite_add_tcase(s, tc5_s21_pow);
    suite_add_tcase(s, tc6_s21_pow);
    suite_add_tcase(s, tc7_s21_pow);
    suite_add_tcase(s, tc8_s21_pow);
    suite_add_tcase(s, tc9_s21_pow);
    suite_add_tcase(s, tc10_s21_pow);
    suite_add_tcase(s, tc11_s21_pow);
    suite_add_tcase(s, tc12_s21_pow);
    suite_add_tcase(s, tc13_s21_pow);
    suite_add_tcase(s, tc14_s21_pow);
    suite_add_tcase(s, tc15_s21_pow);
    suite_add_tcase(s, tc16_s21_pow);
    suite_add_tcase(s, tc17_s21_pow);
    suite_add_tcase(s, tc18_s21_pow);

  return s;
}
