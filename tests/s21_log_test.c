#include "test.h"

START_TEST(s21_log_test1) {
    double number = 0.0;
    ck_assert_ldouble_infinite(s21_log(number));
    ck_assert_double_infinite(log(number));
} END_TEST

START_TEST(s21_log_test2) {
    double number = 0.0000001;
    ck_assert_ldouble_infinite(s21_log(number));
    ck_assert_double_infinite(log(0));
} END_TEST

START_TEST(s21_log_test3) {
    ck_assert_ldouble_infinite(s21_log(S21_HUGE_VAL));
    ck_assert_double_infinite(log(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_log_test4) {
    ck_assert_ldouble_infinite(s21_log(S21_HUGE_VAL));
    ck_assert_double_infinite(log(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_log_test5) {
    double number = 1.0001;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

START_TEST(s21_log_test6) {
    double number = -1.0001;
    ck_assert_ldouble_nan(s21_log(number));
    ck_assert_double_nan(log(number));
} END_TEST

START_TEST(s21_log_test7) {
    double number = 2;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

START_TEST(s21_log_test8) {
    double number = 1.5;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

START_TEST(s21_log_test9) {
    double number = 15;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

START_TEST(s21_log_test10) {
    double number = 1.9999;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

START_TEST(s21_log_test11) {
    double number = 0.9999;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

START_TEST(s21_log_test12) {
    double number = 100.5;
    ck_assert_ldouble_eq_tol(s21_log(number), (long double)log(number), EPS);
} END_TEST

Suite *s21_Suite_log() {
    Suite *s;
    s = suite_create("log Unit Test");

    TCase *tc1_s21_log = tcase_create("test1_s21_log");
    TCase *tc2_s21_log = tcase_create("test2_s21_log");
    TCase *tc3_s21_log = tcase_create("test3_s21_log");
    TCase *tc4_s21_log = tcase_create("test4_s21_log");
    TCase *tc5_s21_log = tcase_create("test5_s21_log");
    TCase *tc6_s21_log = tcase_create("test6_s21_log");
    TCase *tc7_s21_log = tcase_create("test7_s21_log");
    TCase *tc8_s21_log = tcase_create("test8_s21_log");
    TCase *tc9_s21_log = tcase_create("test9_s21_log");
    TCase *tc10_s21_log = tcase_create("test10_s21_log");
    TCase *tc11_s21_log = tcase_create("test11_s21_log");
    TCase *tc12_s21_log = tcase_create("test12_s21_log");

    tcase_add_test(tc1_s21_log, s21_log_test1);
    tcase_add_test(tc2_s21_log, s21_log_test2);
    tcase_add_test(tc3_s21_log, s21_log_test3);
    tcase_add_test(tc4_s21_log, s21_log_test4);
    tcase_add_test(tc5_s21_log, s21_log_test5);
    tcase_add_test(tc6_s21_log, s21_log_test6);
    tcase_add_test(tc7_s21_log, s21_log_test7);
    tcase_add_test(tc8_s21_log, s21_log_test8);
    tcase_add_test(tc9_s21_log, s21_log_test9);
    tcase_add_test(tc10_s21_log, s21_log_test10);
    tcase_add_test(tc11_s21_log, s21_log_test11);
    tcase_add_test(tc12_s21_log, s21_log_test12);

    suite_add_tcase(s, tc1_s21_log);
    suite_add_tcase(s, tc2_s21_log);
    suite_add_tcase(s, tc3_s21_log);
    suite_add_tcase(s, tc4_s21_log);
    suite_add_tcase(s, tc5_s21_log);
    suite_add_tcase(s, tc6_s21_log);
    suite_add_tcase(s, tc7_s21_log);
    suite_add_tcase(s, tc8_s21_log);
    suite_add_tcase(s, tc9_s21_log);
    suite_add_tcase(s, tc10_s21_log);
    suite_add_tcase(s, tc11_s21_log);
    suite_add_tcase(s, tc12_s21_log);

    return s;
}
