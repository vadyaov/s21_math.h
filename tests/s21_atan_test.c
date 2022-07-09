#include "test.h"

START_TEST(s21_atan_test1) {
    ck_assert_ldouble_eq_tol(atan(500.000), s21_atan(500.000), 1e-4);
} END_TEST

START_TEST(s21_atan_test2) {
    for (double i = -565.324; i <= 789.532; i += 50.6235)
        ck_assert_ldouble_eq_tol(atan(i), s21_atan(i), 1e-6);
} END_TEST

START_TEST(s21_atan_test3) {
    for (double i = -1.000000; i <= 1.000000; i += 0.0001)
        ck_assert_ldouble_eq_tol(atan(i), s21_atan(i), 1e-6);
} END_TEST

START_TEST(s21_atan_test4) {
    ck_assert_ldouble_eq_tol(atan(-1.0/0.0), s21_atan(-1.0/0.0), 1e-7);
} END_TEST

START_TEST(s21_atan_test5) {
    ck_assert_ldouble_eq_tol(atan(0.0), s21_atan(0.0), 1e-7);
} END_TEST

START_TEST(s21_atan_test6) {
    ck_assert_ldouble_nan(s21_atan(0.0/0.0));
} END_TEST

START_TEST(s21_atan_test7) {
    ck_assert_ldouble_eq_tol(atan(0.0), s21_atan(0.0), 1e-7);
} END_TEST

START_TEST(s21_atan_test8) {
    for (double i = -123456.789456; i <= 123456.789456; i += 1.0)
        ck_assert_ldouble_eq_tol(atan(i), s21_atan(i), 1e-7);
} END_TEST

START_TEST(s21_atan_test9) {
    ck_assert_ldouble_eq_tol(atan(INFINITY), s21_atan(S21_HUGE_VAL), 1e-7);
} END_TEST

START_TEST(s21_atan_test10) {
    ck_assert_ldouble_eq_tol(atan(-2.78965), s21_atan(-2.78965), 1e-7);
} END_TEST

Suite *s21_Suite_atan() {
    Suite *s;
    s = suite_create("Atan Unit Test");

    TCase *tc1_s21_atan = tcase_create("test1_s21_atan");
    TCase *tc2_s21_atan = tcase_create("test2_s21_atan");
    TCase *tc3_s21_atan = tcase_create("test3_s21_atan");
    TCase *tc4_s21_atan = tcase_create("test4_s21_atan");
    TCase *tc5_s21_atan = tcase_create("test5_s21_atan");
    TCase *tc6_s21_atan = tcase_create("test6_s21_atan");
    TCase *tc7_s21_atan = tcase_create("test7_s21_atan");
    TCase *tc8_s21_atan = tcase_create("test8_s21_atan");
    TCase *tc9_s21_atan = tcase_create("test9_s21_atan");
    TCase *tc10_s21_atan = tcase_create("test10_s21_atan");

    tcase_add_test(tc1_s21_atan, s21_atan_test1);
    tcase_add_test(tc2_s21_atan, s21_atan_test2);
    tcase_add_test(tc3_s21_atan, s21_atan_test3);
    tcase_add_test(tc4_s21_atan, s21_atan_test4);
    tcase_add_test(tc5_s21_atan, s21_atan_test5);
    tcase_add_test(tc6_s21_atan, s21_atan_test6);
    tcase_add_test(tc7_s21_atan, s21_atan_test7);
    tcase_add_test(tc8_s21_atan, s21_atan_test8);
    tcase_add_test(tc9_s21_atan, s21_atan_test9);
    tcase_add_test(tc10_s21_atan, s21_atan_test10);

    suite_add_tcase(s, tc1_s21_atan);
    suite_add_tcase(s, tc2_s21_atan);
    suite_add_tcase(s, tc3_s21_atan);
    suite_add_tcase(s, tc4_s21_atan);
    suite_add_tcase(s, tc5_s21_atan);
    suite_add_tcase(s, tc6_s21_atan);
    suite_add_tcase(s, tc7_s21_atan);
    suite_add_tcase(s, tc8_s21_atan);
    suite_add_tcase(s, tc9_s21_atan);
    suite_add_tcase(s, tc10_s21_atan);

    return s;
}
