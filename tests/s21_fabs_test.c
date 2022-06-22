#include "test.h"

START_TEST(s21_fabs_test1) {
    double number = 0.0;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test2) {
    double number = -1.0;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test3) {
    double number = 1.0;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test4) {
    double number = 33.43543;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test5) {
    double number = -33.345345;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test6) {
    double number = MAXFLOAT;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test7) {
    double number = -MAXFLOAT;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test8) {
    double number = -55.55;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test9) {
    double number = -0.0;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test10) {
    double number = 0.0000000000001;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test11) {
    double number = -0.000000000001;
    ck_assert_ldouble_eq(s21_fabs(number), (long double)fabs(number));
} END_TEST

START_TEST(s21_fabs_test12) {
    ck_assert_ldouble_nan(fabs(sqrt(-1)));
    ck_assert_ldouble_nan(s21_fabs(sqrt(-1)));
} END_TEST

START_TEST(s21_fabs_test13) {
    ck_assert_ldouble_infinite(fabs(S21_HUGE_VAL));
    ck_assert_ldouble_infinite(s21_fabs(S21_HUGE_VAL));
} END_TEST

Suite *s21_Suite_fabs() {
    Suite *s;
    s = suite_create("fabs Unit Test");

    TCase *tc1_s21_fabs = tcase_create("test1_s21_fabs");
    TCase *tc2_s21_fabs = tcase_create("test2_s21_fabs");
    TCase *tc3_s21_fabs = tcase_create("test3_s21_fabs");
    TCase *tc4_s21_fabs = tcase_create("test4_s21_fabs");
    TCase *tc5_s21_fabs = tcase_create("test5_s21_fabs");
    TCase *tc6_s21_fabs = tcase_create("test6_s21_fabs");
    TCase *tc7_s21_fabs = tcase_create("test7_s21_fabs");
    TCase *tc8_s21_fabs = tcase_create("test8_s21_fabs");
    TCase *tc9_s21_fabs = tcase_create("test9_s21_fabs");
    TCase *tc10_s21_fabs = tcase_create("test10_s21_fabs");
    TCase *tc11_s21_fabs = tcase_create("test11_s21_fabs");
    TCase *tc12_s21_fabs = tcase_create("test12_s21_fabs");
    TCase *tc13_s21_fabs = tcase_create("test13_s21_fabs");

    tcase_add_test(tc1_s21_fabs, s21_fabs_test1);
    tcase_add_test(tc2_s21_fabs, s21_fabs_test2);
    tcase_add_test(tc3_s21_fabs, s21_fabs_test3);
    tcase_add_test(tc4_s21_fabs, s21_fabs_test4);
    tcase_add_test(tc5_s21_fabs, s21_fabs_test5);
    tcase_add_test(tc6_s21_fabs, s21_fabs_test6);
    tcase_add_test(tc7_s21_fabs, s21_fabs_test7);
    tcase_add_test(tc8_s21_fabs, s21_fabs_test8);
    tcase_add_test(tc9_s21_fabs, s21_fabs_test9);
    tcase_add_test(tc10_s21_fabs, s21_fabs_test10);
    tcase_add_test(tc11_s21_fabs, s21_fabs_test11);
    tcase_add_test(tc12_s21_fabs, s21_fabs_test12);
    tcase_add_test(tc13_s21_fabs, s21_fabs_test13);

    suite_add_tcase(s, tc1_s21_fabs);
    suite_add_tcase(s, tc2_s21_fabs);
    suite_add_tcase(s, tc3_s21_fabs);
    suite_add_tcase(s, tc4_s21_fabs);
    suite_add_tcase(s, tc5_s21_fabs);
    suite_add_tcase(s, tc6_s21_fabs);
    suite_add_tcase(s, tc7_s21_fabs);
    suite_add_tcase(s, tc8_s21_fabs);
    suite_add_tcase(s, tc9_s21_fabs);
    suite_add_tcase(s, tc10_s21_fabs);
    suite_add_tcase(s, tc11_s21_fabs);
    suite_add_tcase(s, tc12_s21_fabs);
    suite_add_tcase(s, tc13_s21_fabs);

    return s;
}