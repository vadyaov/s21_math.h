#include "test.h"

START_TEST(s21_fmod_test1) {
    ck_assert_ldouble_eq_tol(fmod(12345, 12.234), s21_fmod(12345, 12.234), EPS);
} END_TEST

START_TEST(s21_fmod_test2) {
    ck_assert_ldouble_eq_tol(fmod(0.0, 0.0001), s21_fmod(0.0, 0001), EPS);
} END_TEST

START_TEST(s21_fmod_test3) {
    ck_assert_ldouble_nan(s21_fmod(0.0, 0.0));
} END_TEST

START_TEST(s21_fmod_test4) {
    ck_assert_ldouble_eq_tol(fmod(-2834.242, 11.2), s21_fmod(-2834.242, 11.2), EPS);
} END_TEST

START_TEST(s21_fmod_test5) {
    ck_assert_ldouble_eq_tol(fmod(4, 2), s21_fmod(4, 2), EPS);
} END_TEST

START_TEST(s21_fmod_test6) {
    ck_assert_ldouble_nan(s21_fmod(-10, 0));
} END_TEST

START_TEST(s21_fmod_test7) {
    ck_assert_ldouble_eq_tol(fmod(2, 1.111), s21_fmod(2, 1.111), EPS);
} END_TEST

START_TEST(s21_fmod_test8) {
    ck_assert_ldouble_eq_tol(fmod(121, 11.0001), s21_fmod(121, 11.0001), EPS);
} END_TEST

START_TEST(s21_fmod_test9) {
    ck_assert_ldouble_eq_tol(fmod(1244.12414, 1244), s21_fmod(1244.12414, 1244), EPS);
} END_TEST

START_TEST(s21_fmod_test10) {
    ck_assert_ldouble_eq_tol(fmod(1.21, -0.99999), s21_fmod(1.21, -0.99999), EPS);
} END_TEST

START_TEST(s21_fmod_test11) {
    ck_assert_ldouble_eq_tol(fmod(1.21, 124214141), s21_fmod(1.21, 124214141), EPS);
} END_TEST

Suite *s21_Suite_fmod() {
    Suite *s;
    s = suite_create("Fmod Unit Test");

    TCase *tc1_s21_fmod = tcase_create("test1_s21_fmod");
    TCase *tc2_s21_fmod = tcase_create("test2_s21_fmod");
    TCase *tc3_s21_fmod = tcase_create("test3_s21_fmod");
    TCase *tc4_s21_fmod = tcase_create("test4_s21_fmod");
    TCase *tc5_s21_fmod = tcase_create("test5_s21_fmod");
    TCase *tc6_s21_fmod = tcase_create("test6_s21_fmod");
    TCase *tc7_s21_fmod = tcase_create("test7_s21_fmod");
    TCase *tc8_s21_fmod = tcase_create("test8_s21_fmod");
    TCase *tc9_s21_fmod = tcase_create("test9_s21_fmod");
    TCase *tc10_s21_fmod = tcase_create("test10_s21_fmod");
    TCase *tc11_s21_fmod = tcase_create("test11_s21_fmod");

    tcase_add_test(tc1_s21_fmod, s21_fmod_test1);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test2);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test3);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test4);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test5);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test6);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test7);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test8);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test9);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test10);
    tcase_add_test(tc1_s21_fmod, s21_fmod_test11);

    suite_add_tcase(s, tc1_s21_fmod);
    suite_add_tcase(s, tc2_s21_fmod);
    suite_add_tcase(s, tc3_s21_fmod);
    suite_add_tcase(s, tc4_s21_fmod);
    suite_add_tcase(s, tc5_s21_fmod);
    suite_add_tcase(s, tc6_s21_fmod);
    suite_add_tcase(s, tc7_s21_fmod);
    suite_add_tcase(s, tc8_s21_fmod);
    suite_add_tcase(s, tc9_s21_fmod);
    suite_add_tcase(s, tc10_s21_fmod);
    suite_add_tcase(s, tc11_s21_fmod);

    return s;
}
