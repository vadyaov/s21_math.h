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

START_TEST(s21_fabs_test14) {
    ck_assert_double_eq(fabs(-INFINITY), s21_fabs(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fabs_test15) {
    ck_assert_double_nan(fabs(NAN));
} END_TEST

START_TEST(s21_fabs_test16) {
    ck_assert_double_nan(s21_fabs(S21_NAN_VAL));
} END_TEST

START_TEST(s21_fabs_test17) {
    ck_assert_double_eq(fabs(-7.0), s21_fabs(-7.0));
} END_TEST

START_TEST(s21_fabs_test18) {
    ck_assert_double_eq(fabs(-98.1), s21_fabs(-98.1));
} END_TEST

START_TEST(s21_fabs_test19) {
    ck_assert_double_eq(fabs(123.02), s21_fabs(123.02));
} END_TEST

START_TEST(s21_fabs_test20) {
    ck_assert_double_eq(fabs(10009.0), s21_fabs(10009.0));
} END_TEST

START_TEST(s21_fabs_test21) {
    ck_assert_double_eq(fabs(-10009.555), s21_fabs(-10009.555));
} END_TEST

START_TEST(s21_fabs_test22) {
    ck_assert_double_eq(fabs(-0.10009), s21_fabs(-0.10009));
} END_TEST

START_TEST(s21_fabs_test23) {
    ck_assert_double_eq(fabs(-1e23), s21_fabs(-1e23));
} END_TEST

START_TEST(s21_fabs_test24) {
    ck_assert_double_eq(fabs(INFINITY), s21_fabs(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_fabs_test25) {
    ck_assert_double_eq(fabs(0.000213), s21_fabs(0.000213));
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
    TCase *tc14_s21_fabs = tcase_create("test14_s21_fabs");
    TCase *tc15_s21_fabs = tcase_create("test15_s21_fabs");
    TCase *tc16_s21_fabs = tcase_create("test16_s21_fabs");
    TCase *tc17_s21_fabs = tcase_create("test17_s21_fabs");
    TCase *tc18_s21_fabs = tcase_create("test18_s21_fabs");
    TCase *tc19_s21_fabs = tcase_create("test19_s21_fabs");
    TCase *tc20_s21_fabs = tcase_create("test20_s21_fabs");
    TCase *tc21_s21_fabs = tcase_create("test21_s21_fabs");
    TCase *tc22_s21_fabs = tcase_create("test22_s21_fabs");
    TCase *tc23_s21_fabs = tcase_create("test23_s21_fabs");
    TCase *tc24_s21_fabs = tcase_create("test24_s21_fabs");
    TCase *tc25_s21_fabs = tcase_create("test25_s21_fabs");

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
    tcase_add_test(tc14_s21_fabs, s21_fabs_test14);
    tcase_add_test(tc15_s21_fabs, s21_fabs_test15);
    tcase_add_test(tc16_s21_fabs, s21_fabs_test16);
    tcase_add_test(tc17_s21_fabs, s21_fabs_test17);
    tcase_add_test(tc18_s21_fabs, s21_fabs_test18);
    tcase_add_test(tc19_s21_fabs, s21_fabs_test19);
    tcase_add_test(tc20_s21_fabs, s21_fabs_test20);
    tcase_add_test(tc21_s21_fabs, s21_fabs_test21);
    tcase_add_test(tc22_s21_fabs, s21_fabs_test22);
    tcase_add_test(tc23_s21_fabs, s21_fabs_test23);
    tcase_add_test(tc24_s21_fabs, s21_fabs_test24);
    tcase_add_test(tc25_s21_fabs, s21_fabs_test25);

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
    suite_add_tcase(s, tc14_s21_fabs);
    suite_add_tcase(s, tc15_s21_fabs);
    suite_add_tcase(s, tc16_s21_fabs);
    suite_add_tcase(s, tc17_s21_fabs);
    suite_add_tcase(s, tc18_s21_fabs);
    suite_add_tcase(s, tc19_s21_fabs);
    suite_add_tcase(s, tc20_s21_fabs);
    suite_add_tcase(s, tc21_s21_fabs);
    suite_add_tcase(s, tc22_s21_fabs);
    suite_add_tcase(s, tc23_s21_fabs);
    suite_add_tcase(s, tc24_s21_fabs);
    suite_add_tcase(s, tc25_s21_fabs);

    return s;
}
