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

START_TEST(s21_fmod_test12) {
    ck_assert_double_nan(fmod(1, 0));
} END_TEST

START_TEST(s21_fmod_test13) {
    ck_assert_double_nan(s21_fmod(1, 0));
} END_TEST

START_TEST(s21_fmod_test14) {
    ck_assert_double_eq(fmod(0, -1), s21_fmod(0, -1));
} END_TEST

START_TEST(s21_fmod_test15) {
    ck_assert_double_eq(fmod(0, 1), s21_fmod(0, 1));
} END_TEST

START_TEST(s21_fmod_test16) {
    ck_assert_double_nan(fmod(S21_HUGE_VAL, -1));
} END_TEST

START_TEST(s21_fmod_test17) {
    ck_assert_double_nan(s21_fmod(S21_HUGE_VAL, -1));
} END_TEST

START_TEST(s21_fmod_test18) {
    ck_assert_double_eq(fmod(-1, -S21_HUGE_VAL), s21_fmod(-1, -S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fmod_test19) {
    ck_assert_double_eq(fmod(0, S21_HUGE_VAL), s21_fmod(0, S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fmod_test20) {
    ck_assert_double_nan(s21_fmod(0, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test21) {
    ck_assert_double_nan(fmod(0, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test22) {
    ck_assert_double_nan(s21_fmod(S21_NAN_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test23) {
    ck_assert_double_nan(fmod(S21_NAN_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test24) {
    ck_assert_double_nan(s21_fmod(S21_NAN_VAL, S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fmod_test25) {
    ck_assert_double_nan(s21_fmod(S21_HUGE_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test26) {
    ck_assert_double_nan(s21_fmod(S21_NAN_VAL, -S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fmod_test27) {
    ck_assert_double_nan(s21_fmod(-S21_HUGE_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test28) {
    ck_assert_double_nan(fmod(S21_NAN_VAL, S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fmod_test29) {
    ck_assert_double_nan(fmod(S21_HUGE_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_fmod_test30) {
    ck_assert_double_nan(fmod(S21_NAN_VAL, -S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fmod_test31) {
    ck_assert_double_nan(fmod(-S21_HUGE_VAL, S21_NAN_VAL));
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
    TCase *tc12_s21_fmod = tcase_create("test12_s21_fmod");
    TCase *tc13_s21_fmod = tcase_create("test13_s21_fmod");
    TCase *tc14_s21_fmod = tcase_create("test14_s21_fmod");
    TCase *tc15_s21_fmod = tcase_create("test15_s21_fmod");
    TCase *tc16_s21_fmod = tcase_create("test16_s21_fmod");
    TCase *tc17_s21_fmod = tcase_create("test17_s21_fmod");
    TCase *tc18_s21_fmod = tcase_create("test18_s21_fmod");
    TCase *tc19_s21_fmod = tcase_create("test19_s21_fmod");
    TCase *tc20_s21_fmod = tcase_create("test20_s21_fmod");
    TCase *tc21_s21_fmod = tcase_create("test21_s21_fmod");
    TCase *tc22_s21_fmod = tcase_create("test22_s21_fmod");
    TCase *tc23_s21_fmod = tcase_create("test23_s21_fmod");
    TCase *tc24_s21_fmod = tcase_create("test24_s21_fmod");
    TCase *tc25_s21_fmod = tcase_create("test25_s21_fmod");
    TCase *tc26_s21_fmod = tcase_create("test26_s21_fmod");
    TCase *tc27_s21_fmod = tcase_create("test27_s21_fmod");
    TCase *tc28_s21_fmod = tcase_create("test28_s21_fmod");
    TCase *tc29_s21_fmod = tcase_create("test29_s21_fmod");
    TCase *tc30_s21_fmod = tcase_create("test30_s21_fmod");
    TCase *tc31_s21_fmod = tcase_create("test31_s21_fmod");

    tcase_add_test(tc1_s21_fmod, s21_fmod_test1);
    tcase_add_test(tc2_s21_fmod, s21_fmod_test2);
    tcase_add_test(tc3_s21_fmod, s21_fmod_test3);
    tcase_add_test(tc4_s21_fmod, s21_fmod_test4);
    tcase_add_test(tc5_s21_fmod, s21_fmod_test5);
    tcase_add_test(tc6_s21_fmod, s21_fmod_test6);
    tcase_add_test(tc7_s21_fmod, s21_fmod_test7);
    tcase_add_test(tc8_s21_fmod, s21_fmod_test8);
    tcase_add_test(tc9_s21_fmod, s21_fmod_test9);
    tcase_add_test(tc10_s21_fmod, s21_fmod_test10);
    tcase_add_test(tc11_s21_fmod, s21_fmod_test11);
    tcase_add_test(tc12_s21_fmod, s21_fmod_test12);
    tcase_add_test(tc13_s21_fmod, s21_fmod_test13);
    tcase_add_test(tc14_s21_fmod, s21_fmod_test14);
    tcase_add_test(tc15_s21_fmod, s21_fmod_test15);
    tcase_add_test(tc16_s21_fmod, s21_fmod_test16);
    tcase_add_test(tc17_s21_fmod, s21_fmod_test17);
    tcase_add_test(tc18_s21_fmod, s21_fmod_test18);
    tcase_add_test(tc19_s21_fmod, s21_fmod_test19);
    tcase_add_test(tc20_s21_fmod, s21_fmod_test20);
    tcase_add_test(tc21_s21_fmod, s21_fmod_test21);
    tcase_add_test(tc22_s21_fmod, s21_fmod_test22);
    tcase_add_test(tc23_s21_fmod, s21_fmod_test23);
    tcase_add_test(tc24_s21_fmod, s21_fmod_test24);
    tcase_add_test(tc25_s21_fmod, s21_fmod_test25);
    tcase_add_test(tc26_s21_fmod, s21_fmod_test26);
    tcase_add_test(tc27_s21_fmod, s21_fmod_test27);
    tcase_add_test(tc28_s21_fmod, s21_fmod_test28);
    tcase_add_test(tc29_s21_fmod, s21_fmod_test29);
    tcase_add_test(tc30_s21_fmod, s21_fmod_test30);
    tcase_add_test(tc31_s21_fmod, s21_fmod_test31);

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
    suite_add_tcase(s, tc12_s21_fmod);
    suite_add_tcase(s, tc13_s21_fmod);
    suite_add_tcase(s, tc14_s21_fmod);
    suite_add_tcase(s, tc15_s21_fmod);
    suite_add_tcase(s, tc16_s21_fmod);
    suite_add_tcase(s, tc17_s21_fmod);
    suite_add_tcase(s, tc18_s21_fmod);
    suite_add_tcase(s, tc19_s21_fmod);
    suite_add_tcase(s, tc20_s21_fmod);
    suite_add_tcase(s, tc21_s21_fmod);
    suite_add_tcase(s, tc22_s21_fmod);
    suite_add_tcase(s, tc23_s21_fmod);
    suite_add_tcase(s, tc24_s21_fmod);
    suite_add_tcase(s, tc25_s21_fmod);
    suite_add_tcase(s, tc26_s21_fmod);
    suite_add_tcase(s, tc27_s21_fmod);
    suite_add_tcase(s, tc28_s21_fmod);
    suite_add_tcase(s, tc29_s21_fmod);
    suite_add_tcase(s, tc30_s21_fmod);
    suite_add_tcase(s, tc31_s21_fmod);

    return s;
}
