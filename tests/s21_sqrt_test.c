#include "test.h"

START_TEST(s21_sqrt_test1) {
    ck_assert_ldouble_eq_tol(sqrt(1234567891234567), s21_sqrt(1234567891234567), EPS);
} END_TEST

START_TEST(s21_sqrt_test2) {
    ck_assert_ldouble_eq_tol(sqrt(0.0), s21_sqrt(0.0), EPS);
} END_TEST

START_TEST(s21_sqrt_test3) {
    ck_assert_ldouble_eq_tol(sqrt(0.01), s21_sqrt(0.01), EPS);
} END_TEST

START_TEST(s21_sqrt_test4) {
    ck_assert_ldouble_eq_tol(sqrt(0.00001), s21_sqrt(0.00001), EPS);
} END_TEST

START_TEST(s21_sqrt_test5) {
    ck_assert_ldouble_nan(s21_sqrt(-0.00001));
} END_TEST

START_TEST(s21_sqrt_test6) {
    ck_assert_ldouble_nan(s21_sqrt(-1));
} END_TEST

START_TEST(s21_sqrt_test7) {
    ck_assert_ldouble_eq_tol(sqrt(2), s21_sqrt(2), EPS);
} END_TEST

START_TEST(s21_sqrt_test8) {
    ck_assert_ldouble_eq_tol(sqrt(121), s21_sqrt(121), EPS);
} END_TEST

START_TEST(s21_sqrt_test9) {
    ck_assert_ldouble_eq_tol(sqrt(1244.12414), s21_sqrt(1244.12414), EPS);
} END_TEST

START_TEST(s21_sqrt_test10) {
    ck_assert_ldouble_eq_tol(sqrt(1.21), s21_sqrt(1.21), EPS);
} END_TEST

START_TEST(s21_sqrt_test11) {
    ck_assert_ldouble_eq_tol(sqrt(0.999998), s21_sqrt(0.999998), EPS);
} END_TEST

START_TEST(s21_sqrt_test12) {
    ck_assert_double_eq_tol(s21_sqrt(233), sqrt(233), 1e-6);
} END_TEST

START_TEST(s21_sqrt_test13) {
    ck_assert_double_nan(s21_sqrt(S21_NAN_VAL));
} END_TEST

START_TEST(s21_sqrt_test14) {
    ck_assert_double_nan(sqrt(NAN));
} END_TEST

START_TEST(s21_sqrt_test15) {
    ck_assert_double_eq(s21_sqrt(S21_HUGE_VAL), sqrt(INFINITY));
} END_TEST

START_TEST(s21_sqrt_test16) {
    ck_assert_double_nan(s21_sqrt(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_sqrt_test17) {
    ck_assert_double_nan(sqrt(-INFINITY));
} END_TEST

START_TEST(s21_sqrt_test18) {
    ck_assert_double_nan(s21_sqrt(-5));
} END_TEST

START_TEST(s21_sqrt_test19) {
    ck_assert_double_nan(sqrt(-0.000001));
} END_TEST

START_TEST(s21_sqrt_test20) {
    ck_assert_double_eq_tol(s21_sqrt(1000), sqrt(1000), 1e-7);
} END_TEST

START_TEST(s21_sqrt_test21) {
    ck_assert_double_eq_tol(s21_sqrt(0.000001), sqrt(0.000001), 1e-7);
} END_TEST

Suite *s21_Suite_sqrt() {
    Suite *s;
    s = suite_create("Sqrt Unit Test");

    TCase *tc1_s21_sqrt = tcase_create("test1_s21_sqrt");
    TCase *tc2_s21_sqrt = tcase_create("test2_s21_sqrt");
    TCase *tc3_s21_sqrt = tcase_create("test3_s21_sqrt");
    TCase *tc4_s21_sqrt = tcase_create("test4_s21_sqrt");
    TCase *tc5_s21_sqrt = tcase_create("test5_s21_sqrt");
    TCase *tc6_s21_sqrt = tcase_create("test6_s21_sqrt");
    TCase *tc7_s21_sqrt = tcase_create("test7_s21_sqrt");
    TCase *tc8_s21_sqrt = tcase_create("test8_s21_sqrt");
    TCase *tc9_s21_sqrt = tcase_create("test9_s21_sqrt");
    TCase *tc10_s21_sqrt = tcase_create("test10_s21_sqrt");
    TCase *tc11_s21_sqrt = tcase_create("test11_s21_sqrt");
    TCase *tc12_s21_sqrt = tcase_create("test12_s21_sqrt");
    TCase *tc13_s21_sqrt = tcase_create("test13_s21_sqrt");
    TCase *tc14_s21_sqrt = tcase_create("test14_s21_sqrt");
    TCase *tc15_s21_sqrt = tcase_create("test15_s21_sqrt");
    TCase *tc16_s21_sqrt = tcase_create("test16_s21_sqrt");
    TCase *tc17_s21_sqrt = tcase_create("test17_s21_sqrt");
    TCase *tc18_s21_sqrt = tcase_create("test18_s21_sqrt");
    TCase *tc19_s21_sqrt = tcase_create("test19_s21_sqrt");
    TCase *tc20_s21_sqrt = tcase_create("test20_s21_sqrt");
    TCase *tc21_s21_sqrt = tcase_create("test21_s21_sqrt");

    tcase_add_test(tc1_s21_sqrt, s21_sqrt_test1);
    tcase_add_test(tc2_s21_sqrt, s21_sqrt_test2);
    tcase_add_test(tc3_s21_sqrt, s21_sqrt_test3);
    tcase_add_test(tc4_s21_sqrt, s21_sqrt_test4);
    tcase_add_test(tc5_s21_sqrt, s21_sqrt_test5);
    tcase_add_test(tc6_s21_sqrt, s21_sqrt_test6);
    tcase_add_test(tc7_s21_sqrt, s21_sqrt_test7);
    tcase_add_test(tc8_s21_sqrt, s21_sqrt_test8);
    tcase_add_test(tc9_s21_sqrt, s21_sqrt_test9);
    tcase_add_test(tc10_s21_sqrt, s21_sqrt_test10);
    tcase_add_test(tc11_s21_sqrt, s21_sqrt_test11);
    tcase_add_test(tc12_s21_sqrt, s21_sqrt_test12);
    tcase_add_test(tc13_s21_sqrt, s21_sqrt_test13);
    tcase_add_test(tc14_s21_sqrt, s21_sqrt_test14);
    tcase_add_test(tc15_s21_sqrt, s21_sqrt_test15);
    tcase_add_test(tc16_s21_sqrt, s21_sqrt_test16);
    tcase_add_test(tc17_s21_sqrt, s21_sqrt_test17);
    tcase_add_test(tc18_s21_sqrt, s21_sqrt_test18);
    tcase_add_test(tc19_s21_sqrt, s21_sqrt_test19);
    tcase_add_test(tc20_s21_sqrt, s21_sqrt_test20);
    tcase_add_test(tc21_s21_sqrt, s21_sqrt_test21);

    suite_add_tcase(s, tc1_s21_sqrt);
    suite_add_tcase(s, tc2_s21_sqrt);
    suite_add_tcase(s, tc3_s21_sqrt);
    suite_add_tcase(s, tc4_s21_sqrt);
    suite_add_tcase(s, tc5_s21_sqrt);
    suite_add_tcase(s, tc6_s21_sqrt);
    suite_add_tcase(s, tc7_s21_sqrt);
    suite_add_tcase(s, tc8_s21_sqrt);
    suite_add_tcase(s, tc9_s21_sqrt);
    suite_add_tcase(s, tc10_s21_sqrt);
    suite_add_tcase(s, tc11_s21_sqrt);
    suite_add_tcase(s, tc12_s21_sqrt);
    suite_add_tcase(s, tc13_s21_sqrt);
    suite_add_tcase(s, tc14_s21_sqrt);
    suite_add_tcase(s, tc15_s21_sqrt);
    suite_add_tcase(s, tc16_s21_sqrt);
    suite_add_tcase(s, tc17_s21_sqrt);
    suite_add_tcase(s, tc18_s21_sqrt);
    suite_add_tcase(s, tc19_s21_sqrt);
    suite_add_tcase(s, tc20_s21_sqrt);
    suite_add_tcase(s, tc21_s21_sqrt);

    return s;
}
