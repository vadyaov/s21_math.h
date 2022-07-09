#include "test.h"

START_TEST(s21_pow_test1) {
    double res1 = pow(2, 3);
    long double res2 = s21_pow(2, 3);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test2) {
    double res1 = pow(0, 0);
    long double res2 = s21_pow(0, 0);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test3) {
    double res1 = pow(3, -1);
    long double res2 = s21_pow(3, -1);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test4) {
    double res1 = pow(-5, 5);
    long double res2 = s21_pow(-5, 5);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test5) {
    long double res1 = pow(0.352342, 7);
    long double res2 = s21_pow(0.352342, 7);
    ck_assert_ldouble_eq_tol(res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test6) {
    double res1 = pow(0.5, 1.245);
    long double res2 = s21_pow(0.5, 1.245);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test7) {
    double res1 = pow(0.99999, 0.99999);
    long double res2 = s21_pow(0.99999, 0.99999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test8) {
    double res1 = pow(99, -0.99999);
    long double res2 = s21_pow(99, -0.99999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test9) {
    double res1 = pow(99, -0.0001);
    long double res2 = s21_pow(99, -0.0001);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test10) {
    double res1 = pow(1, 10.000199999);
    long double res2 = s21_pow(1, 10.000199999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test11) {
    double res1 = pow(1.0001, 10.000199999);
    long double res2 = s21_pow(1.0001, 10.000199999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test12) {
    double res1 = pow(1.0001, -10.000199999);
    long double res2 = s21_pow(1.0001, -10.000199999);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test13) {
    double res1 = pow(-1.0001, -10.100199999);
    long double res2 = s21_pow(-1.0001, -10.100199999);
    ck_assert_ldouble_nan((long double)res1);
    ck_assert_ldouble_nan(res2);
} END_TEST

START_TEST(s21_pow_test14) {
    double res1 = pow(S21_HUGE_VAL, -S21_HUGE_VAL);
    long double res2 = s21_pow(S21_HUGE_VAL, -S21_HUGE_VAL);
    ck_assert_ldouble_eq_tol(res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test15) {
    double res1 = pow(-12.5, 5);
    long double res2 = s21_pow(-12.5, 5);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test16) {
    double res1 = pow(-12.5, 6);
    long double res2 = s21_pow(-12.5, 6);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test17) {
    double res1 = pow(0.0, 6);
    long double res2 = s21_pow(0.0, 6);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test18) {
    double res1 = pow(S21_HUGE_VAL, -2);
    long double res2 = s21_pow(S21_HUGE_VAL, -2);
    ck_assert_ldouble_eq_tol((long double)res1, res2, EPS);
} END_TEST

START_TEST(s21_pow_test19) {
    ck_assert_double_eq_tol(pow(0.3123, 0.789456), s21_pow(0.3123, 0.789456), 1e-6);
} END_TEST

START_TEST(s21_pow_test20) {
    ck_assert_double_eq_tol(pow(56.3, 0.3), s21_pow(56.3, 0.3), 1e-6);
} END_TEST

START_TEST(s21_pow_test21) {
    ck_assert_double_eq(pow(1, 0), s21_pow(1, 0));
} END_TEST

START_TEST(s21_pow_test22) {
    ck_assert_double_eq(pow(-1, 3), s21_pow(-1, 3));
} END_TEST

START_TEST(s21_pow_test23) {
    ck_assert_double_eq(pow(-1, 4), s21_pow(-1, 4));
} END_TEST

START_TEST(s21_pow_test24) {
    ck_assert_double_eq(pow(0, 0), s21_pow(0, 0));
} END_TEST

START_TEST(s21_pow_test25) {
    ck_assert_double_eq(pow(0, -1), s21_pow(0, -1));
} END_TEST

START_TEST(s21_pow_test26) {
    ck_assert_double_eq(pow(0, 1), s21_pow(0, 1));
} END_TEST

START_TEST(s21_pow_test27) {
    ck_assert_double_eq(pow(INFINITY, 0), s21_pow(S21_HUGE_VAL, 0));
} END_TEST

START_TEST(s21_pow_test28) {
    ck_assert_double_eq(pow(INFINITY, -1), s21_pow(S21_HUGE_VAL, -1));
} END_TEST

START_TEST(s21_pow_test29) {
    ck_assert_double_nan(s21_pow(0, S21_NAN_VAL));
} END_TEST

START_TEST(s21_pow_test30) {
    ck_assert_double_nan(s21_pow(S21_NAN_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_pow_test31) {
    ck_assert_double_eq(pow(INFINITY, INFINITY), s21_pow(S21_HUGE_VAL, S21_HUGE_VAL));
} END_TEST

START_TEST(s21_pow_test32) {
    ck_assert_double_nan(s21_pow(S21_NAN_VAL, S21_HUGE_VAL));
} END_TEST

START_TEST(s21_pow_test33) {
    ck_assert_double_nan(s21_pow(S21_HUGE_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_pow_test34) {
    ck_assert_double_nan(s21_pow(S21_NAN_VAL, -S21_HUGE_VAL));
} END_TEST

START_TEST(s21_pow_test35) {
    ck_assert_double_nan(s21_pow(-S21_HUGE_VAL, S21_NAN_VAL));
} END_TEST

START_TEST(s21_pow_test36) {
    ck_assert_double_eq(pow(2, INFINITY), s21_pow(2, S21_HUGE_VAL));
} END_TEST

START_TEST(s21_pow_test37) {
    ck_assert_double_nan(s21_pow(-0.789456, -0.789456));
} END_TEST

START_TEST(s21_pow_test38) {
    ck_assert_double_nan(s21_pow(-500.789456, -10.1354323));
} END_TEST

START_TEST(s21_pow_test39) {
    ck_assert_double_nan(s21_pow(-500.789456, 34.13));
} END_TEST

START_TEST(s21_pow_test40) {
    ck_assert_double_eq_tol(pow(10.789456, 3.13), s21_pow(10.789456, 3.13), 1e-2);
} END_TEST

START_TEST(s21_pow_test41) {
    ck_assert_double_eq(pow(-1, -S21_HUGE_VAL), s21_pow(-1, -S21_HUGE_VAL));
} END_TEST

Suite *s21_Suite_pow() {
    Suite *s;
    s = suite_create("Pow Unit Test");

    TCase *tc1_s21_pow = tcase_create("test1_s21_pow");
    TCase *tc2_s21_pow = tcase_create("test2_s21_pow");
    TCase *tc3_s21_pow = tcase_create("test3_s21_pow");
    TCase *tc4_s21_pow = tcase_create("test4_s21_pow");
    TCase *tc5_s21_pow = tcase_create("test5_s21_pow");
    TCase *tc6_s21_pow = tcase_create("test6_s21_pow");
    TCase *tc7_s21_pow = tcase_create("test7_s21_pow");
    TCase *tc8_s21_pow = tcase_create("test8_s21_pow");
    TCase *tc9_s21_pow = tcase_create("test9_s21_pow");
    TCase *tc10_s21_pow = tcase_create("test10_s21_pow");
    TCase *tc11_s21_pow = tcase_create("test11_s21_pow");
    TCase *tc12_s21_pow = tcase_create("test12_s21_pow");
    TCase *tc13_s21_pow = tcase_create("test13_s21_pow");
    TCase *tc14_s21_pow = tcase_create("test14_s21_pow");
    TCase *tc15_s21_pow = tcase_create("test15_s21_pow");
    TCase *tc16_s21_pow = tcase_create("test16_s21_pow");
    TCase *tc17_s21_pow = tcase_create("test17_s21_pow");
    TCase *tc18_s21_pow = tcase_create("test18_s21_pow");
    TCase *tc19_s21_pow = tcase_create("test19_s21_pow");
    TCase *tc20_s21_pow = tcase_create("test20_s21_pow");
    TCase *tc21_s21_pow = tcase_create("test21_s21_pow");
    TCase *tc22_s21_pow = tcase_create("test22_s21_pow");
    TCase *tc23_s21_pow = tcase_create("test23_s21_pow");
    TCase *tc24_s21_pow = tcase_create("test24_s21_pow");
    TCase *tc25_s21_pow = tcase_create("test25_s21_pow");
    TCase *tc26_s21_pow = tcase_create("test26_s21_pow");
    TCase *tc27_s21_pow = tcase_create("test27_s21_pow");
    TCase *tc28_s21_pow = tcase_create("test28_s21_pow");
    TCase *tc29_s21_pow = tcase_create("test29_s21_pow");
    TCase *tc30_s21_pow = tcase_create("test30_s21_pow");
    TCase *tc31_s21_pow = tcase_create("test31_s21_pow");
    TCase *tc32_s21_pow = tcase_create("test32_s21_pow");
    TCase *tc33_s21_pow = tcase_create("test33_s21_pow");
    TCase *tc34_s21_pow = tcase_create("test34_s21_pow");
    TCase *tc35_s21_pow = tcase_create("test35_s21_pow");
    TCase *tc36_s21_pow = tcase_create("test36_s21_pow");
    TCase *tc37_s21_pow = tcase_create("test37_s21_pow");
    TCase *tc38_s21_pow = tcase_create("test38_s21_pow");
    TCase *tc39_s21_pow = tcase_create("test39_s21_pow");
    TCase *tc40_s21_pow = tcase_create("test40_s21_pow");
    TCase *tc41_s21_pow = tcase_create("test41_s21_pow");

    tcase_add_test(tc1_s21_pow, s21_pow_test1);
    tcase_add_test(tc2_s21_pow, s21_pow_test2);
    tcase_add_test(tc3_s21_pow, s21_pow_test3);
    tcase_add_test(tc4_s21_pow, s21_pow_test4);
    tcase_add_test(tc5_s21_pow, s21_pow_test5);
    tcase_add_test(tc6_s21_pow, s21_pow_test6);
    tcase_add_test(tc7_s21_pow, s21_pow_test7);
    tcase_add_test(tc8_s21_pow, s21_pow_test8);
    tcase_add_test(tc9_s21_pow, s21_pow_test9);
    tcase_add_test(tc10_s21_pow, s21_pow_test10);
    tcase_add_test(tc11_s21_pow, s21_pow_test11);
    tcase_add_test(tc12_s21_pow, s21_pow_test12);
    tcase_add_test(tc13_s21_pow, s21_pow_test13);
    tcase_add_test(tc14_s21_pow, s21_pow_test14);
    tcase_add_test(tc15_s21_pow, s21_pow_test15);
    tcase_add_test(tc16_s21_pow, s21_pow_test16);
    tcase_add_test(tc17_s21_pow, s21_pow_test17);
    tcase_add_test(tc18_s21_pow, s21_pow_test18);
    tcase_add_test(tc19_s21_pow, s21_pow_test19);
    tcase_add_test(tc20_s21_pow, s21_pow_test20);
    tcase_add_test(tc21_s21_pow, s21_pow_test21);
    tcase_add_test(tc22_s21_pow, s21_pow_test22);
    tcase_add_test(tc23_s21_pow, s21_pow_test23);
    tcase_add_test(tc24_s21_pow, s21_pow_test24);
    tcase_add_test(tc25_s21_pow, s21_pow_test25);
    tcase_add_test(tc26_s21_pow, s21_pow_test26);
    tcase_add_test(tc27_s21_pow, s21_pow_test27);
    tcase_add_test(tc28_s21_pow, s21_pow_test28);
    tcase_add_test(tc29_s21_pow, s21_pow_test29);
    tcase_add_test(tc30_s21_pow, s21_pow_test30);
    tcase_add_test(tc31_s21_pow, s21_pow_test31);
    tcase_add_test(tc32_s21_pow, s21_pow_test32);
    tcase_add_test(tc33_s21_pow, s21_pow_test33);
    tcase_add_test(tc34_s21_pow, s21_pow_test34);
    tcase_add_test(tc35_s21_pow, s21_pow_test35);
    tcase_add_test(tc36_s21_pow, s21_pow_test36);
    tcase_add_test(tc37_s21_pow, s21_pow_test37);
    tcase_add_test(tc38_s21_pow, s21_pow_test38);
    tcase_add_test(tc39_s21_pow, s21_pow_test39);
    tcase_add_test(tc40_s21_pow, s21_pow_test40);
    tcase_add_test(tc41_s21_pow, s21_pow_test41);

    suite_add_tcase(s, tc1_s21_pow);
    suite_add_tcase(s, tc2_s21_pow);
    suite_add_tcase(s, tc3_s21_pow);
    suite_add_tcase(s, tc4_s21_pow);
    suite_add_tcase(s, tc5_s21_pow);
    suite_add_tcase(s, tc6_s21_pow);
    suite_add_tcase(s, tc7_s21_pow);
    suite_add_tcase(s, tc8_s21_pow);
    suite_add_tcase(s, tc9_s21_pow);
    suite_add_tcase(s, tc10_s21_pow);
    suite_add_tcase(s, tc11_s21_pow);
    suite_add_tcase(s, tc12_s21_pow);
    suite_add_tcase(s, tc13_s21_pow);
    suite_add_tcase(s, tc14_s21_pow);
    suite_add_tcase(s, tc15_s21_pow);
    suite_add_tcase(s, tc16_s21_pow);
    suite_add_tcase(s, tc17_s21_pow);
    suite_add_tcase(s, tc18_s21_pow);
    suite_add_tcase(s, tc19_s21_pow);
    suite_add_tcase(s, tc20_s21_pow);
    suite_add_tcase(s, tc21_s21_pow);
    suite_add_tcase(s, tc22_s21_pow);
    suite_add_tcase(s, tc23_s21_pow);
    suite_add_tcase(s, tc24_s21_pow);
    suite_add_tcase(s, tc25_s21_pow);
    suite_add_tcase(s, tc26_s21_pow);
    suite_add_tcase(s, tc27_s21_pow);
    suite_add_tcase(s, tc28_s21_pow);
    suite_add_tcase(s, tc29_s21_pow);
    suite_add_tcase(s, tc30_s21_pow);
    suite_add_tcase(s, tc31_s21_pow);
    suite_add_tcase(s, tc32_s21_pow);
    suite_add_tcase(s, tc33_s21_pow);
    suite_add_tcase(s, tc34_s21_pow);
    suite_add_tcase(s, tc35_s21_pow);
    suite_add_tcase(s, tc36_s21_pow);
    suite_add_tcase(s, tc37_s21_pow);
    suite_add_tcase(s, tc38_s21_pow);
    suite_add_tcase(s, tc39_s21_pow);
    suite_add_tcase(s, tc40_s21_pow);
    suite_add_tcase(s, tc41_s21_pow);

    return s;
}
