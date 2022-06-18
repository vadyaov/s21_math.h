#include "test.h"

START_TEST(s21_factorial_test1) {
    int number = 0;
    ck_assert_int_eq(s21_factorial(number), 1);
} END_TEST

START_TEST(s21_factorial_test2) {
    int number = 1;
    ck_assert_int_eq(s21_factorial(number), 1);
} END_TEST

START_TEST(s21_factorial_test3) {
    int number = 2;
    ck_assert_int_eq(s21_factorial(number), 2);
} END_TEST

START_TEST(s21_factorial_test4) {
    int number = 3;
    ck_assert_int_eq(s21_factorial(number), 6);
} END_TEST

START_TEST(s21_factorial_test5) {
    int number = 5;
    ck_assert_int_eq(s21_factorial(number), 120);
} END_TEST

START_TEST(s21_factorial_test6) {
    int number = 9;
    ck_assert_int_eq(s21_factorial(number), 362880);
} END_TEST

START_TEST(s21_factorial_test7) {
    int number = 11;
    ck_assert_int_eq(s21_factorial(number), 39916800);
} END_TEST

Suite *s21_Suite_factorial() {
    Suite *s;
    s = suite_create("Factorial Unit Test");

    TCase *tc1_s21_factorial = tcase_create("test1_s21_factorial");
    TCase *tc2_s21_factorial = tcase_create("test2_s21_factorial");
    TCase *tc3_s21_factorial = tcase_create("test3_s21_factorial");
    TCase *tc4_s21_factorial = tcase_create("test4_s21_factorial");
    TCase *tc5_s21_factorial = tcase_create("test5_s21_factorial");
    TCase *tc6_s21_factorial = tcase_create("test6_s21_factorial");
    TCase *tc7_s21_factorial = tcase_create("test7_s21_factorial");

    tcase_add_test(tc1_s21_factorial, s21_factorial_test1);
    tcase_add_test(tc2_s21_factorial, s21_factorial_test2);
    tcase_add_test(tc3_s21_factorial, s21_factorial_test3);
    tcase_add_test(tc4_s21_factorial, s21_factorial_test4);
    tcase_add_test(tc5_s21_factorial, s21_factorial_test5);
    tcase_add_test(tc6_s21_factorial, s21_factorial_test6);
    tcase_add_test(tc7_s21_factorial, s21_factorial_test7);

    suite_add_tcase(s, tc1_s21_factorial);
    suite_add_tcase(s, tc2_s21_factorial);
    suite_add_tcase(s, tc3_s21_factorial);
    suite_add_tcase(s, tc4_s21_factorial);
    suite_add_tcase(s, tc5_s21_factorial);
    suite_add_tcase(s, tc6_s21_factorial);
    suite_add_tcase(s, tc7_s21_factorial);

  return s;
}