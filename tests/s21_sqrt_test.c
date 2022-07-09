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

    return s;
}
