#include "test.h"

START_TEST(s21_ceil_test1) {
    for (double i = -M_PI/2; i <= M_PI/2; i+= 0.25)
        ck_assert_double_eq(ceil(i), s21_ceil(i));
} END_TEST

START_TEST(s21_ceil_test2) {
    ck_assert_double_eq(ceil(INFINITY), s21_ceil(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_ceil_test3) {
    ck_assert_double_eq(ceil(-INFINITY), s21_ceil(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_ceil_test4) {
    ck_assert_double_nan(ceil(NAN));
} END_TEST

START_TEST(s21_ceil_test5) {
    ck_assert_double_nan(s21_ceil(S21_NAN_VAL));
} END_TEST

START_TEST(s21_ceil_test6) {
    ck_assert_double_eq(ceil(-7.0), s21_ceil(-7.0));
} END_TEST

START_TEST(s21_ceil_test7) {
    ck_assert_double_eq(ceil(-98.1), s21_ceil(-98.1));
} END_TEST

START_TEST(s21_ceil_test8) {
    ck_assert_double_eq(ceil(123.02), s21_ceil(123.02));
} END_TEST

START_TEST(s21_ceil_test9) {
    ck_assert_double_eq(ceil(10009.00123), s21_ceil(10009.00123));
} END_TEST

START_TEST(s21_ceil_test10) {
    ck_assert_double_eq(ceil(-10009.555), s21_ceil(-10009.555));
} END_TEST

START_TEST(s21_ceil_test11) {
    ck_assert_double_eq(ceil(-0.10009), s21_ceil(-0.10009));
} END_TEST

START_TEST(s21_ceil_test12) {
    ck_assert_double_eq(ceil(-1e-23), s21_ceil(-1e-23));
} END_TEST

START_TEST(s21_ceil_test13) {
    ck_assert_double_eq(ceil(7), s21_ceil(7));
} END_TEST

START_TEST(s21_ceil_test14) {
    ck_assert_double_eq(ceil(0), s21_ceil(0));
} END_TEST

START_TEST(s21_ceil_test15) {
    ck_assert_double_eq(ceil(0.0), s21_ceil(0.0));
} END_TEST

Suite *s21_Suite_ceil() {
    Suite *s;
    s = suite_create("Ceil Unit Test");

    TCase *tc1_s21_ceil = tcase_create("test1_s21_ceil");
    TCase *tc2_s21_ceil = tcase_create("test2_s21_ceil");
    TCase *tc3_s21_ceil = tcase_create("test3_s21_ceil");
    TCase *tc4_s21_ceil = tcase_create("test4_s21_ceil");
    TCase *tc5_s21_ceil = tcase_create("test5_s21_ceil");
    TCase *tc6_s21_ceil = tcase_create("test6_s21_ceil");
    TCase *tc7_s21_ceil = tcase_create("test7_s21_ceil");
    TCase *tc8_s21_ceil = tcase_create("test8_s21_ceil");
    TCase *tc9_s21_ceil = tcase_create("test9_s21_ceil");
    TCase *tc10_s21_ceil = tcase_create("test10_s21_ceil");
    TCase *tc11_s21_ceil = tcase_create("test11_s21_ceil");
    TCase *tc12_s21_ceil = tcase_create("test12_s21_ceil");
    TCase *tc13_s21_ceil = tcase_create("test13_s21_ceil");
    TCase *tc14_s21_ceil = tcase_create("test14_s21_ceil");
    TCase *tc15_s21_ceil = tcase_create("test15_s21_ceil");

    tcase_add_test(tc1_s21_ceil, s21_ceil_test1);
    tcase_add_test(tc2_s21_ceil, s21_ceil_test2);
    tcase_add_test(tc3_s21_ceil, s21_ceil_test3);
    tcase_add_test(tc4_s21_ceil, s21_ceil_test4);
    tcase_add_test(tc5_s21_ceil, s21_ceil_test5);
    tcase_add_test(tc6_s21_ceil, s21_ceil_test6);
    tcase_add_test(tc7_s21_ceil, s21_ceil_test7);
    tcase_add_test(tc8_s21_ceil, s21_ceil_test8);
    tcase_add_test(tc9_s21_ceil, s21_ceil_test9);
    tcase_add_test(tc10_s21_ceil, s21_ceil_test10);
    tcase_add_test(tc11_s21_ceil, s21_ceil_test11);
    tcase_add_test(tc12_s21_ceil, s21_ceil_test12);
    tcase_add_test(tc13_s21_ceil, s21_ceil_test13);
    tcase_add_test(tc14_s21_ceil, s21_ceil_test14);
    tcase_add_test(tc15_s21_ceil, s21_ceil_test15);

    suite_add_tcase(s, tc1_s21_ceil);
    suite_add_tcase(s, tc2_s21_ceil);
    suite_add_tcase(s, tc3_s21_ceil);
    suite_add_tcase(s, tc4_s21_ceil);
    suite_add_tcase(s, tc5_s21_ceil);
    suite_add_tcase(s, tc6_s21_ceil);
    suite_add_tcase(s, tc7_s21_ceil);
    suite_add_tcase(s, tc8_s21_ceil);
    suite_add_tcase(s, tc9_s21_ceil);
    suite_add_tcase(s, tc10_s21_ceil);
    suite_add_tcase(s, tc11_s21_ceil);
    suite_add_tcase(s, tc12_s21_ceil);
    suite_add_tcase(s, tc13_s21_ceil);
    suite_add_tcase(s, tc14_s21_ceil);
    suite_add_tcase(s, tc15_s21_ceil);

    return s;
}
