#include "test.h"

START_TEST(s21_exp_test1) {
    double number = 0.0;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test2) {
    double number = -0.0;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test3) {
    double number = 1.0;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test4) {
    double number = 1.1111;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test5) {
    double number = -1.1111;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test6) {
    double number = 10;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test7) {
    double number = -10;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test8) {
    double number = -1.9999999;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test9) {
    double number = 1.9999999;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test10) {
    double number = -0.9999999;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test11) {
    double number = 0.9999999;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
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

START_TEST(s21_exp_test15) {
    double number = 5.5;
    ck_assert_ldouble_eq_tol(s21_exp(number), (long double)exp(number), EPS);
} END_TEST

START_TEST(s21_exp_test16) {
    ck_assert_double_eq_tol(s21_exp(3.3333), s21_exp(3.3333), EPS);
} END_TEST

START_TEST(s21_exp_test17) {
    ck_assert_double_eq_tol(s21_exp(-5.5), s21_exp(-5.5), EPS);
} END_TEST

START_TEST(s21_exp_test18) {
    ck_assert_double_eq(s21_exp(4566.7899), s21_exp(4566.7899));
} END_TEST

START_TEST(s21_exp_test19) {
    ck_assert_double_nan(s21_exp(NAN));
} END_TEST

START_TEST(s21_exp_test20) {
    ck_assert_double_eq(exp(INFINITY), s21_exp(INFINITY));
} END_TEST

START_TEST(s21_exp_test21) {
    ck_assert_double_eq_tol(exp(0.4564), s21_exp(0.4564), EPS);
} END_TEST

START_TEST(s21_exp_test22) {
    ck_assert_double_eq(exp(0), s21_exp(0));
} END_TEST

START_TEST(s21_exp_test23) {
    ck_assert_double_eq_tol(exp(1), s21_exp(1), EPS);
} END_TEST

START_TEST(s21_exp_test24) {
    ck_assert_double_eq_tol(exp(-1), s21_exp(-1), EPS);
} END_TEST

START_TEST(s21_exp_test25) {
    ck_assert_double_eq_tol(exp(-0.000001), s21_exp(-0.000001), EPS);
} END_TEST

START_TEST(s21_exp_test26) {
    for (double i = -2.7863; i <= 2.6831; i += 0.001)
        ck_assert_double_eq_tol(exp(i), s21_exp(i), EPS);
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
    TCase *tc15_s21_exp = tcase_create("test15_s21_exp");
    TCase *tc16_s21_exp = tcase_create("test16_s21_exp");
    TCase *tc17_s21_exp = tcase_create("test17_s21_exp");
    TCase *tc18_s21_exp = tcase_create("test18_s21_exp");
    TCase *tc19_s21_exp = tcase_create("test19_s21_exp");
    TCase *tc20_s21_exp = tcase_create("test20_s21_exp");
    TCase *tc21_s21_exp = tcase_create("test21_s21_exp");
    TCase *tc22_s21_exp = tcase_create("test22_s21_exp");
    TCase *tc23_s21_exp = tcase_create("test23_s21_exp");
    TCase *tc24_s21_exp = tcase_create("test24_s21_exp");
    TCase *tc25_s21_exp = tcase_create("test25_s21_exp");
    TCase *tc26_s21_exp = tcase_create("test26_s21_exp");

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
    tcase_add_test(tc15_s21_exp, s21_exp_test15);
    tcase_add_test(tc16_s21_exp, s21_exp_test16);
    tcase_add_test(tc17_s21_exp, s21_exp_test17);
    tcase_add_test(tc18_s21_exp, s21_exp_test18);
    tcase_add_test(tc19_s21_exp, s21_exp_test19);
    tcase_add_test(tc20_s21_exp, s21_exp_test20);
    tcase_add_test(tc21_s21_exp, s21_exp_test21);
    tcase_add_test(tc22_s21_exp, s21_exp_test22);
    tcase_add_test(tc23_s21_exp, s21_exp_test23);
    tcase_add_test(tc24_s21_exp, s21_exp_test24);
    tcase_add_test(tc25_s21_exp, s21_exp_test25);
    tcase_add_test(tc26_s21_exp, s21_exp_test26);

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
    suite_add_tcase(s, tc15_s21_exp);
    suite_add_tcase(s, tc16_s21_exp);
    suite_add_tcase(s, tc17_s21_exp);
    suite_add_tcase(s, tc18_s21_exp);
    suite_add_tcase(s, tc19_s21_exp);
    suite_add_tcase(s, tc20_s21_exp);
    suite_add_tcase(s, tc21_s21_exp);
    suite_add_tcase(s, tc22_s21_exp);
    suite_add_tcase(s, tc23_s21_exp);
    suite_add_tcase(s, tc24_s21_exp);
    suite_add_tcase(s, tc25_s21_exp);
    suite_add_tcase(s, tc26_s21_exp);

    return s;
}
