#include "test.h"

START_TEST(s21_acos_test1) {
    ck_assert_double_eq(acos(0), s21_acos(0));
} END_TEST

START_TEST(s21_acos_test2) {
    for (double i = -1.000000; i <= 1; i += 0.00005)
        ck_assert_double_eq_tol(acos(i), s21_acos(i), 1e-6);
}
END_TEST

START_TEST(s21_acos_test3) {
    ck_assert_double_nan(s21_acos(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_acos_test4) {
    for (double i = -1.000000; i <= 1.000000; i += 0.00003)
        ck_assert_double_eq_tol(acos(i), s21_acos(i), 1e-6);
} END_TEST

START_TEST(s21_acos_test5) {
    for (double i = -1.000000; i <= 1.000000; i += 0.0001)
        ck_assert_double_eq_tol(acos(i), s21_acos(i), 1e-6);
} END_TEST

START_TEST(s21_acos_test6) {
    ck_assert_double_nan(s21_acos(S21_NAN_VAL));
} END_TEST

START_TEST(s21_acos_test7) {
    ck_assert_double_nan(s21_acos(-1.0/0.0));
} END_TEST

START_TEST(s21_acos_test8) {
    ck_assert_double_nan(s21_acos(6.654));
} END_TEST

START_TEST(s21_acos_test9) {
    ck_assert_double_nan(s21_acos(1.5 * S21_M_PI));
} END_TEST

START_TEST(s21_acos_test10) {
    ck_assert_double_eq_tol(acos(0.00001), s21_acos(0.00001), 1e-6);
} END_TEST

Suite *s21_Suite_acos() {
    Suite *s;
    s = suite_create("Acos Unit Test");

    TCase *tc1_s21_acos = tcase_create("test1_s21_acos");
    TCase *tc2_s21_acos = tcase_create("test2_s21_acos");
    TCase *tc3_s21_acos = tcase_create("test3_s21_acos");
    TCase *tc4_s21_acos = tcase_create("test4_s21_acos");
    TCase *tc5_s21_acos = tcase_create("test5_s21_acos");
    TCase *tc6_s21_acos = tcase_create("test6_s21_acos");
    TCase *tc7_s21_acos = tcase_create("test7_s21_acos");
    TCase *tc8_s21_acos = tcase_create("test8_s21_acos");
    TCase *tc9_s21_acos = tcase_create("test9_s21_acos");
    TCase *tc10_s21_acos = tcase_create("test10_s21_acos");

    tcase_add_test(tc1_s21_acos, s21_acos_test1);
    tcase_add_test(tc2_s21_acos, s21_acos_test2);
    tcase_add_test(tc3_s21_acos, s21_acos_test3);
    tcase_add_test(tc4_s21_acos, s21_acos_test4);
    tcase_add_test(tc5_s21_acos, s21_acos_test5);
    tcase_add_test(tc6_s21_acos, s21_acos_test6);
    tcase_add_test(tc7_s21_acos, s21_acos_test7);
    tcase_add_test(tc8_s21_acos, s21_acos_test8);
    tcase_add_test(tc9_s21_acos, s21_acos_test9);
    tcase_add_test(tc10_s21_acos, s21_acos_test10);

    suite_add_tcase(s, tc1_s21_acos);
    suite_add_tcase(s, tc2_s21_acos);
    suite_add_tcase(s, tc3_s21_acos);
    suite_add_tcase(s, tc4_s21_acos);
    suite_add_tcase(s, tc5_s21_acos);
    suite_add_tcase(s, tc6_s21_acos);
    suite_add_tcase(s, tc7_s21_acos);
    suite_add_tcase(s, tc8_s21_acos);
    suite_add_tcase(s, tc9_s21_acos);
    suite_add_tcase(s, tc10_s21_acos);

  return s;
}
