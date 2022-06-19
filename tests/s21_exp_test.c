#include "test.h"

START_TEST(s21_exp_test1) {
    double number = 0.0;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test2) {
    double number = -0.0;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test3) {
    double number = 1.0;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test4) {
    double number = 1.1111;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test5) {
    double number = -1.1111;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test6) {
    double number = 10;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test7) {
    double number = -10;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test8) {
    double number = -1.9999999;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test9) {
    double number = 1.9999999;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test10) {
    double number = -0.9999999;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test11) {
    double number = 0.9999999;
    ck_assert_ldouble_eq(s21_exp(number), (long double)s21_exp(number));
} END_TEST

START_TEST(s21_exp_test12) {
    ck_assert_ldouble_nan(s21_exp(S21_NAN_VAL));
    ck_assert_double_nan(exp(S21_NAN_VAL));
} END_TEST

START_TEST(s21_exp_test13) {
    ck_assert_ldouble_infinite(s21_exp(S21_HUGE_VAL));
    ck_assert_double_infinite(exp(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_exp_test14) {
    ck_assert_ldouble_eq(s21_exp(-S21_HUGE_VAL), 0.0);
    ck_assert_ldouble_eq(exp(-S21_HUGE_VAL), 0.0);
} END_TEST

Suite *s21_Suite_exp() {
    Suite *s;
    s = suite_create("Exp Unit Test");

    TCase *tc1_s21_exp = tcase_create("test1_s21_exp");
    TCase *tc2_s21_exp = tcase_create("test2_s21_exp");
    TCase *tc3_s21_exp = tcase_create("test3_s21_exp");
    TCase *tc4_s21_exp = tcase_create("test4_s21_exp");
    TCase *tc5_s21_exp = tcase_create("test5_s21_exp");
    TCase *tc6_s21_exp = tcase_create("test6_s21_exp");
    TCase *tc7_s21_exp = tcase_create("test7_s21_exp");
    TCase *tc8_s21_exp = tcase_create("test8_s21_exp");
    TCase *tc9_s21_exp = tcase_create("test9_s21_exp");
    TCase *tc10_s21_exp = tcase_create("test10_s21_exp");
    TCase *tc11_s21_exp = tcase_create("test11_s21_exp");
    TCase *tc12_s21_exp = tcase_create("test12_s21_exp");
    TCase *tc13_s21_exp = tcase_create("test13_s21_exp");
    TCase *tc14_s21_exp = tcase_create("test14_s21_exp");

    tcase_add_test(tc1_s21_exp, s21_exp_test1);
    tcase_add_test(tc2_s21_exp, s21_exp_test2);
    tcase_add_test(tc3_s21_exp, s21_exp_test3);
    tcase_add_test(tc4_s21_exp, s21_exp_test4);
    tcase_add_test(tc5_s21_exp, s21_exp_test5);
    tcase_add_test(tc6_s21_exp, s21_exp_test6);
    tcase_add_test(tc7_s21_exp, s21_exp_test7);
    tcase_add_test(tc8_s21_exp, s21_exp_test8);
    tcase_add_test(tc9_s21_exp, s21_exp_test9);
    tcase_add_test(tc10_s21_exp, s21_exp_test10);
    tcase_add_test(tc11_s21_exp, s21_exp_test11);
    tcase_add_test(tc12_s21_exp, s21_exp_test12);
    tcase_add_test(tc13_s21_exp, s21_exp_test13);
    tcase_add_test(tc14_s21_exp, s21_exp_test14);

    suite_add_tcase(s, tc1_s21_exp);
    suite_add_tcase(s, tc2_s21_exp);
    suite_add_tcase(s, tc3_s21_exp);
    suite_add_tcase(s, tc4_s21_exp);
    suite_add_tcase(s, tc5_s21_exp);
    suite_add_tcase(s, tc6_s21_exp);
    suite_add_tcase(s, tc7_s21_exp);
    suite_add_tcase(s, tc8_s21_exp);
    suite_add_tcase(s, tc9_s21_exp);
    suite_add_tcase(s, tc10_s21_exp);
    suite_add_tcase(s, tc11_s21_exp);
    suite_add_tcase(s, tc12_s21_exp);
    suite_add_tcase(s, tc13_s21_exp);
    suite_add_tcase(s, tc14_s21_exp);

    return s;
}
