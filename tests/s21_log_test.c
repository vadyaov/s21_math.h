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
    double number = S21_ME + 1e-16;
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

START_TEST(s21_log_test13) {
    for (double k = 1; k < 100; k += 13.2) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
} END_TEST

START_TEST(s21_log_test14) {
    for (double k = 0.1; k < 4; k += 0.24) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
} END_TEST

START_TEST(s21_log_test15) {
    for (double k = 0.1; k < 10000; k += 123) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, EPS);
    }
} END_TEST

START_TEST(s21_log_test16) {
    for (double k = 0.000005; k < 1; k *= 5) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, EPS);
    }
} END_TEST

START_TEST(s21_log_test17) {
    ck_assert_double_nan(s21_log(S21_NAN_VAL));
} END_TEST

START_TEST(s21_log_test18) {
    ck_assert_double_eq(log(0), s21_log(0));
} END_TEST

START_TEST(s21_log_test19) {
    ck_assert_double_nan(s21_log(-3));
} END_TEST

START_TEST(s21_log_test20) {
    ck_assert_double_eq(log(INFINITY), s21_log(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_log_test21) {
    ck_assert_double_nan(s21_log(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_log_test22) {
    ck_assert_double_eq(log(1), s21_log(1));
} END_TEST

START_TEST(s21_log_test23) {
    ck_assert_double_eq_tol(log(2), s21_log(2), 1e-6);
} END_TEST

START_TEST(s21_log_test24) {
    ck_assert_double_nan(s21_log(-S21_HUGE_VAL * 2));
} END_TEST

START_TEST(s21_log_test25) {
    ck_assert_double_eq_tol(log(0.0001), s21_log(0.0001), 1e-6);
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
    TCase *tc13_s21_log = tcase_create("test13_s21_log");
    TCase *tc14_s21_log = tcase_create("test14_s21_log");
    TCase *tc15_s21_log = tcase_create("test15_s21_log");
    TCase *tc16_s21_log = tcase_create("test16_s21_log");
    TCase *tc17_s21_log = tcase_create("test17_s21_log");
    TCase *tc18_s21_log = tcase_create("test18_s21_log");
    TCase *tc19_s21_log = tcase_create("test19_s21_log");
    TCase *tc20_s21_log = tcase_create("test20_s21_log");
    TCase *tc21_s21_log = tcase_create("test21_s21_log");
    TCase *tc22_s21_log = tcase_create("test22_s21_log");
    TCase *tc23_s21_log = tcase_create("test23_s21_log");
    TCase *tc24_s21_log = tcase_create("test24_s21_log");
    TCase *tc25_s21_log = tcase_create("test25_s21_log");

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
    tcase_add_test(tc13_s21_log, s21_log_test13);
    tcase_add_test(tc14_s21_log, s21_log_test14);
    tcase_add_test(tc15_s21_log, s21_log_test15);
    tcase_add_test(tc16_s21_log, s21_log_test16);
    tcase_add_test(tc17_s21_log, s21_log_test17);
    tcase_add_test(tc18_s21_log, s21_log_test18);
    tcase_add_test(tc19_s21_log, s21_log_test19);
    tcase_add_test(tc20_s21_log, s21_log_test20);
    tcase_add_test(tc21_s21_log, s21_log_test21);
    tcase_add_test(tc22_s21_log, s21_log_test22);
    tcase_add_test(tc23_s21_log, s21_log_test23);
    tcase_add_test(tc24_s21_log, s21_log_test24);
    tcase_add_test(tc25_s21_log, s21_log_test25);

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
    suite_add_tcase(s, tc13_s21_log);
    suite_add_tcase(s, tc14_s21_log);
    suite_add_tcase(s, tc15_s21_log);
    suite_add_tcase(s, tc16_s21_log);
    suite_add_tcase(s, tc17_s21_log);
    suite_add_tcase(s, tc18_s21_log);
    suite_add_tcase(s, tc19_s21_log);
    suite_add_tcase(s, tc20_s21_log);
    suite_add_tcase(s, tc21_s21_log);
    suite_add_tcase(s, tc22_s21_log);
    suite_add_tcase(s, tc23_s21_log);
    suite_add_tcase(s, tc24_s21_log);
    suite_add_tcase(s, tc25_s21_log);

    return s;
}
