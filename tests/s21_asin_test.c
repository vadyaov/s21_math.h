#include "test.h"

START_TEST(s21_asin_test1) {
    for (double i = -1.000000; i <= 1.000000; i += 0.00005)
        ck_assert_double_eq_tol(asin(i), s21_asin(i), 1e-6);
    
} END_TEST

START_TEST(s21_asin_test2) {
    for (double i = -1.000000; i <= 1.000000; i += 0.00005)
        ck_assert_double_eq_tol(asin(i), s21_asin(i), 1e-6);

} END_TEST

START_TEST(s21_asin_test3) {
    ck_assert_double_nan(s21_asin(S21_NAN_VAL)); 
} END_TEST

START_TEST(s21_asin_test4) {
    ck_assert_double_eq_tol(asin(1), s21_asin(1), 1e-7);

} END_TEST

START_TEST(s21_asin_test5) {
    ck_assert_double_eq_tol(asin(-1), s21_asin(-1), 1e-6);
} END_TEST

START_TEST(s21_asin_test6) {
    for (double i = -1.000000; i <= 1.000000; i += 0.00005)
        ck_assert_double_eq_tol(asin(i), s21_asin(i), 1e-6);
} END_TEST

START_TEST(s21_asin_test7) {
    ck_assert_double_eq_tol(asin(0), s21_asin(0), 1e-6);
} END_TEST

START_TEST(s21_asin_test8) {
    ck_assert_double_nan(s21_asin(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_asin_test9) {
    ck_assert_double_nan(s21_asin(-1.0/0.0));
} END_TEST

START_TEST(s21_asin_test10) {
    ck_assert_double_nan(s21_asin(-252.568));
} END_TEST

Suite *s21_Suite_asin() {
    Suite *s;
    s = suite_create("Asin Unit Test");

    TCase *tc1_s21_asin = tcase_create("test1_s21_asin");
    TCase *tc2_s21_asin = tcase_create("test2_s21_asin");
    TCase *tc3_s21_asin = tcase_create("test3_s21_asin");
    TCase *tc4_s21_asin = tcase_create("test4_s21_asin");
    TCase *tc5_s21_asin = tcase_create("test5_s21_asin");
    TCase *tc6_s21_asin = tcase_create("test6_s21_asin");
    TCase *tc7_s21_asin = tcase_create("test7_s21_asin");
    TCase *tc8_s21_asin = tcase_create("test8_s21_asin");
    TCase *tc9_s21_asin = tcase_create("test9_s21_asin");
    TCase *tc10_s21_asin = tcase_create("test10_s21_asin");

    tcase_add_test(tc1_s21_asin, s21_asin_test1);
    tcase_add_test(tc2_s21_asin, s21_asin_test2);
    tcase_add_test(tc3_s21_asin, s21_asin_test3);
    tcase_add_test(tc4_s21_asin, s21_asin_test4);
    tcase_add_test(tc5_s21_asin, s21_asin_test5);
    tcase_add_test(tc6_s21_asin, s21_asin_test6);
    tcase_add_test(tc7_s21_asin, s21_asin_test7);
    tcase_add_test(tc8_s21_asin, s21_asin_test8);
    tcase_add_test(tc9_s21_asin, s21_asin_test9);
    tcase_add_test(tc10_s21_asin, s21_asin_test10);

    suite_add_tcase(s, tc1_s21_asin);
    suite_add_tcase(s, tc2_s21_asin);
    suite_add_tcase(s, tc3_s21_asin);
    suite_add_tcase(s, tc4_s21_asin);
    suite_add_tcase(s, tc5_s21_asin);
    suite_add_tcase(s, tc6_s21_asin);
    suite_add_tcase(s, tc7_s21_asin);
    suite_add_tcase(s, tc8_s21_asin);
    suite_add_tcase(s, tc9_s21_asin);
    suite_add_tcase(s, tc10_s21_asin);

  return s;
}
