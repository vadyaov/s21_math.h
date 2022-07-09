#include "test.h"

START_TEST(s21_sin_test1) {
    for (int R = 20; R >= -20; R -= 4)
        for (double k = 2 * S21_M_PI; k > -2 * S21_M_PI; k -= S21_M_PI / 9)
            ck_assert_ldouble_eq_tol(sin(k + R * S21_M_PI), s21_sin(k + R * S21_M_PI), EPS);
} END_TEST

START_TEST(s21_sin_test2) {
    for (int R = 20; R >= -20; R -= 2)
        for (double k = 2 * S21_M_PI; k > -2 * S21_M_PI; k -= S21_M_PI / 6)
            ck_assert_ldouble_eq_tol(sin(k + R * S21_M_PI), s21_sin(k + R * S21_M_PI), EPS);
} END_TEST

START_TEST(s21_sin_test3) {
    ck_assert_ldouble_eq_tol(sin(0.0), s21_sin(0.0), EPS);
} END_TEST

START_TEST(s21_sin_test4) {
    ck_assert_ldouble_eq_tol(sin(S21_M_PI2), s21_sin(S21_M_PI2), EPS);
} END_TEST

START_TEST(s21_sin_test5) {
    ck_assert_ldouble_eq_tol(sin(3 * S21_M_PI2), s21_sin(3 * S21_M_PI2), EPS);
} END_TEST

START_TEST(s21_sin_test6) {
    ck_assert_ldouble_eq_tol(sin(2 * S21_M_PI2), s21_sin(2 * S21_M_PI2), EPS);
} END_TEST

START_TEST(s21_sin_test7) {
    ck_assert_ldouble_eq_tol(sin(-2 * S21_M_PI2), s21_sin(-2 * S21_M_PI2), EPS);
} END_TEST

START_TEST(s21_sin_test8) {
    ck_assert_ldouble_eq_tol(sin(-S21_M_PI), s21_sin(-S21_M_PI), EPS);
} END_TEST

START_TEST(s21_sin_test9) {
    ck_assert_ldouble_eq_tol(sin(-0.0), s21_sin(-0.0), EPS);
} END_TEST

START_TEST(s21_sin_test10) {
    ck_assert_ldouble_eq_tol(sin(12415.12415), s21_sin(12415.12415), EPS);
} END_TEST

START_TEST(s21_sin_test11) {
    ck_assert_ldouble_eq_tol(sin(-124345.9999), s21_sin(-124345.9999), EPS);
} END_TEST

START_TEST(s21_sin_test12) {
    ck_assert_ldouble_eq_tol(sin(11.010101), s21_sin(11.010101), EPS);
} END_TEST

START_TEST(s21_sin_test13) {
    ck_assert_ldouble_nan(s21_sin(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_sin_test14) {
    ck_assert_ldouble_nan(s21_sin(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_sin_test15) {
    ck_assert_ldouble_nan(s21_sin(S21_NAN_VAL));
} END_TEST

START_TEST(s21_sin_test16) {
    for (double i = -1.000000; i <= 1.000000; i += 0.00001)
        ck_assert_double_eq_tol(sin(i), s21_sin(i), EPS);        
} END_TEST

START_TEST(s21_sin_test17) {
    ck_assert_double_nan(s21_sin(S21_NAN_VAL));
} END_TEST

START_TEST(s21_sin_test18) {
    ck_assert_double_nan(s21_sin(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_sin_test19) {
    ck_assert_double_nan(s21_sin(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_sin_test20) {
    for (double i = -223.654; i <= 148.522; i += 2.456)
        ck_assert_double_eq_tol(sin(i), s21_sin(i), EPS);
} END_TEST

START_TEST(s21_sin_test21) {
    ck_assert_double_nan(s21_sin(-0.0/0.0));
} END_TEST

START_TEST(s21_sin_test22) {
    for (double i = -10009.6; i <= -9808.0; i += 0.1)
        ck_assert_double_eq_tol(sin(i), s21_sin(i), EPS);
} END_TEST

START_TEST(s21_sin_test23) {
    for (double i = 9809.6; i <= 10890.0; i += 0.1)
        ck_assert_double_eq_tol(sin(i), s21_sin(i), EPS);
} END_TEST

Suite *s21_Suite_sin() {
    Suite *s;
    s = suite_create("Sin Unit Test");

    TCase *tc1_s21_sin = tcase_create("test1_s21_sin");
    TCase *tc2_s21_sin = tcase_create("test2_s21_sin");
    TCase *tc3_s21_sin = tcase_create("test3_s21_sin");
    TCase *tc4_s21_sin = tcase_create("test4_s21_sin");
    TCase *tc5_s21_sin = tcase_create("test5_s21_sin");
    TCase *tc6_s21_sin = tcase_create("test6_s21_sin");
    TCase *tc7_s21_sin = tcase_create("test7_s21_sin");
    TCase *tc8_s21_sin = tcase_create("test8_s21_sin");
    TCase *tc9_s21_sin = tcase_create("test9_s21_sin");
    TCase *tc10_s21_sin = tcase_create("test10_s21_sin");
    TCase *tc11_s21_sin = tcase_create("test11_s21_sin");
    TCase *tc12_s21_sin = tcase_create("test12_s21_sin");
    TCase *tc13_s21_sin = tcase_create("test13_s21_sin");
    TCase *tc14_s21_sin = tcase_create("test14_s21_sin");
    TCase *tc15_s21_sin = tcase_create("test15_s21_sin");
    TCase *tc16_s21_sin = tcase_create("test16_s21_sin");
    TCase *tc17_s21_sin = tcase_create("test17_s21_sin");
    TCase *tc18_s21_sin = tcase_create("test18_s21_sin");
    TCase *tc19_s21_sin = tcase_create("test19_s21_sin");
    TCase *tc20_s21_sin = tcase_create("test20_s21_sin");
    TCase *tc21_s21_sin = tcase_create("test21_s21_sin");
    TCase *tc22_s21_sin = tcase_create("test22_s21_sin");
    TCase *tc23_s21_sin = tcase_create("test23_s21_sin");

    tcase_add_test(tc1_s21_sin, s21_sin_test1);
    tcase_add_test(tc2_s21_sin, s21_sin_test2);
    tcase_add_test(tc3_s21_sin, s21_sin_test3);
    tcase_add_test(tc4_s21_sin, s21_sin_test4);
    tcase_add_test(tc5_s21_sin, s21_sin_test5);
    tcase_add_test(tc6_s21_sin, s21_sin_test6);
    tcase_add_test(tc7_s21_sin, s21_sin_test7);
    tcase_add_test(tc8_s21_sin, s21_sin_test8);
    tcase_add_test(tc9_s21_sin, s21_sin_test9);
    tcase_add_test(tc10_s21_sin, s21_sin_test10);
    tcase_add_test(tc11_s21_sin, s21_sin_test11);
    tcase_add_test(tc12_s21_sin, s21_sin_test12);
    tcase_add_test(tc13_s21_sin, s21_sin_test13);
    tcase_add_test(tc14_s21_sin, s21_sin_test14);
    tcase_add_test(tc15_s21_sin, s21_sin_test15);
    tcase_add_test(tc16_s21_sin, s21_sin_test16);
    tcase_add_test(tc17_s21_sin, s21_sin_test17);
    tcase_add_test(tc18_s21_sin, s21_sin_test18);
    tcase_add_test(tc19_s21_sin, s21_sin_test19);
    tcase_add_test(tc20_s21_sin, s21_sin_test20);
    tcase_add_test(tc21_s21_sin, s21_sin_test21);
    tcase_add_test(tc22_s21_sin, s21_sin_test22);
    tcase_add_test(tc23_s21_sin, s21_sin_test23);

    suite_add_tcase(s, tc1_s21_sin);
    suite_add_tcase(s, tc2_s21_sin);
    suite_add_tcase(s, tc3_s21_sin);
    suite_add_tcase(s, tc4_s21_sin);
    suite_add_tcase(s, tc5_s21_sin);
    suite_add_tcase(s, tc6_s21_sin);
    suite_add_tcase(s, tc7_s21_sin);
    suite_add_tcase(s, tc8_s21_sin);
    suite_add_tcase(s, tc9_s21_sin);
    suite_add_tcase(s, tc10_s21_sin);
    suite_add_tcase(s, tc11_s21_sin);
    suite_add_tcase(s, tc12_s21_sin);
    suite_add_tcase(s, tc13_s21_sin);
    suite_add_tcase(s, tc14_s21_sin);
    suite_add_tcase(s, tc15_s21_sin);
    suite_add_tcase(s, tc16_s21_sin);
    suite_add_tcase(s, tc17_s21_sin);
    suite_add_tcase(s, tc18_s21_sin);
    suite_add_tcase(s, tc19_s21_sin);
    suite_add_tcase(s, tc20_s21_sin);
    suite_add_tcase(s, tc21_s21_sin);
    suite_add_tcase(s, tc22_s21_sin);
    suite_add_tcase(s, tc23_s21_sin);

    return s;
}
