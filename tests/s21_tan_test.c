#include "test.h"

START_TEST(s21_tan_test1) {
    ck_assert_ldouble_eq_tol(tan(0.123456), s21_tan(0.123456), EPS);
} END_TEST

START_TEST(s21_tan_test2) {
    ck_assert_ldouble_nan(s21_tan(S21_NAN_VAL));
} END_TEST

START_TEST(s21_tan_test3) {
    ck_assert_ldouble_nan(s21_tan(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_tan_test4) {
    ck_assert_ldouble_nan(s21_tan(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_tan_test5) {
    ck_assert_ldouble_eq_tol(tan(-0.123456), s21_tan(-0.123456), EPS);
} END_TEST

START_TEST(s21_tan_test6) {
    ck_assert_ldouble_eq_tol(tan(11115.123456), s21_tan(11115.123456), EPS);
} END_TEST

START_TEST(s21_tan_test7) {
    ck_assert_ldouble_eq_tol(tan(-11115.123456), s21_tan(-11115.123456), EPS);
} END_TEST

START_TEST(s21_tan_test8) {
    ck_assert_ldouble_eq_tol(tan(0.000001), s21_tan(0.000001), EPS);
} END_TEST

START_TEST(s21_tan_test9) {
    ck_assert_ldouble_eq_tol(tan(-0.0), s21_tan(-0.0), EPS);
}
END_TEST

START_TEST(s21_tan_test10) {
    ck_assert_ldouble_nan(s21_tan(-0.0/0.0));
} END_TEST

START_TEST(s21_tan_test11) {
    for (double i = 1.0; i >= -1.0; i -= 0.0001)
        ck_assert_ldouble_eq_tol(tan(i), s21_tan(i), EPS);
} END_TEST

Suite *s21_Suite_tan() {
    Suite *s;
    s = suite_create("Tan Unit Test");

    TCase *tc1_s21_tan = tcase_create("test1_s21_tan");
    TCase *tc2_s21_tan = tcase_create("test2_s21_tan");
    TCase *tc3_s21_tan = tcase_create("test3_s21_tan");
    TCase *tc4_s21_tan = tcase_create("test4_s21_tan");
    TCase *tc5_s21_tan = tcase_create("test5_s21_tan");
    TCase *tc6_s21_tan = tcase_create("test6_s21_tan");
    TCase *tc7_s21_tan = tcase_create("test7_s21_tan");
    TCase *tc8_s21_tan = tcase_create("test8_s21_tan");
    TCase *tc9_s21_tan = tcase_create("test9_s21_tan");
    TCase *tc10_s21_tan = tcase_create("test10_s21_tan");
    TCase *tc11_s21_tan = tcase_create("test11_s21_tan");
    // TCase *tc12_s21_tan = tcase_create("test12_s21_tan");
    // TCase *tc13_s21_tan = tcase_create("test13_s21_tan");
    // TCase *tc14_s21_tan = tcase_create("test14_s21_tan");
    // TCase *tc15_s21_tan = tcase_create("test15_s21_tan");

    tcase_add_test(tc1_s21_tan, s21_tan_test1);
    tcase_add_test(tc2_s21_tan, s21_tan_test2);
    tcase_add_test(tc3_s21_tan, s21_tan_test3);
    tcase_add_test(tc4_s21_tan, s21_tan_test4);
    tcase_add_test(tc5_s21_tan, s21_tan_test5);
    tcase_add_test(tc6_s21_tan, s21_tan_test6);
    tcase_add_test(tc7_s21_tan, s21_tan_test7);
    tcase_add_test(tc8_s21_tan, s21_tan_test8);
    tcase_add_test(tc9_s21_tan, s21_tan_test9);
    tcase_add_test(tc10_s21_tan, s21_tan_test10);
    tcase_add_test(tc11_s21_tan, s21_tan_test11);
    // tcase_add_test(tc12_s21_tan, s21_tan_test12);
    // tcase_add_test(tc13_s21_tan, s21_tan_test13);
    // tcase_add_test(tc14_s21_tan, s21_tan_test14);
    // tcase_add_test(tc15_s21_tan, s21_tan_test15);

    suite_add_tcase(s, tc1_s21_tan);
    suite_add_tcase(s, tc2_s21_tan);
    suite_add_tcase(s, tc3_s21_tan);
    suite_add_tcase(s, tc4_s21_tan);
    suite_add_tcase(s, tc5_s21_tan);
    suite_add_tcase(s, tc6_s21_tan);
    suite_add_tcase(s, tc7_s21_tan);
    suite_add_tcase(s, tc8_s21_tan);
    suite_add_tcase(s, tc9_s21_tan);
    suite_add_tcase(s, tc10_s21_tan);
    suite_add_tcase(s, tc11_s21_tan);
    // suite_add_tcase(s, tc12_s21_tan);
    // suite_add_tcase(s, tc13_s21_tan);
    // suite_add_tcase(s, tc14_s21_tan);
    // suite_add_tcase(s, tc15_s21_tan);

    return s;
}
