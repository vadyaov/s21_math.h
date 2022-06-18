#include "test.h"

START_TEST(s21_abs_test1) {
    int number = 0;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test2) {
    int number = -1;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test3) {
    int number = 1;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test4) {
    int number = 33;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test5) {
    int number = -33;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test6) {
    int number = INT_MAX;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test7) {
    int number = INT_MIN;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test8) {
    int number = -5555;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test9) {
    int number = -0;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test10) {
    int number = 1234567;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

START_TEST(s21_abs_test11) {
    int number = -1234567;
    ck_assert_int_eq(s21_abs(number), abs(number));
} END_TEST

Suite *s21_Suite_abs() {
    Suite *s;
    s = suite_create("Abs Unit Test");

    TCase *tc1_s21_abs = tcase_create("test1_s21_abs");
    TCase *tc2_s21_abs = tcase_create("test2_s21_abs");
    TCase *tc3_s21_abs = tcase_create("test3_s21_abs");
    TCase *tc4_s21_abs = tcase_create("test4_s21_abs");
    TCase *tc5_s21_abs = tcase_create("test5_s21_abs");
    TCase *tc6_s21_abs = tcase_create("test6_s21_abs");
    TCase *tc7_s21_abs = tcase_create("test7_s21_abs");
    TCase *tc8_s21_abs = tcase_create("test8_s21_abs");
    TCase *tc9_s21_abs = tcase_create("test9_s21_abs");
    TCase *tc10_s21_abs = tcase_create("test10_s21_abs");
    TCase *tc11_s21_abs = tcase_create("test11_s21_abs");

    tcase_add_test(tc1_s21_abs, s21_abs_test1);
    tcase_add_test(tc2_s21_abs, s21_abs_test2);
    tcase_add_test(tc3_s21_abs, s21_abs_test3);
    tcase_add_test(tc4_s21_abs, s21_abs_test4);
    tcase_add_test(tc5_s21_abs, s21_abs_test5);
    tcase_add_test(tc6_s21_abs, s21_abs_test6);
    tcase_add_test(tc7_s21_abs, s21_abs_test7);
    tcase_add_test(tc8_s21_abs, s21_abs_test8);
    tcase_add_test(tc9_s21_abs, s21_abs_test9);
    tcase_add_test(tc10_s21_abs, s21_abs_test10);
    tcase_add_test(tc11_s21_abs, s21_abs_test11);

    suite_add_tcase(s, tc1_s21_abs);
    suite_add_tcase(s, tc2_s21_abs);
    suite_add_tcase(s, tc3_s21_abs);
    suite_add_tcase(s, tc4_s21_abs);
    suite_add_tcase(s, tc5_s21_abs);
    suite_add_tcase(s, tc6_s21_abs);
    suite_add_tcase(s, tc7_s21_abs);
    suite_add_tcase(s, tc8_s21_abs);
    suite_add_tcase(s, tc9_s21_abs);
    suite_add_tcase(s, tc10_s21_abs);
    suite_add_tcase(s, tc11_s21_abs);

  return s;
}