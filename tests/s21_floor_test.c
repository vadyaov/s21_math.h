#include "test.h"

START_TEST(s21_floor_test1) {
    ck_assert_double_eq(floor(INFINITY), s21_floor(S21_HUGE_VAL));
} END_TEST

START_TEST(s21_floor_test2) {
    ck_assert_double_eq(floor(-INFINITY), s21_floor(-S21_HUGE_VAL));
} END_TEST

START_TEST(s21_floor_test3) {
    ck_assert_double_nan(floor(NAN));
} END_TEST

START_TEST(s21_floor_test4) {
    ck_assert_double_nan(s21_floor(NAN));
} END_TEST

START_TEST(s21_floor_test5) {
    ck_assert_int_eq(floor(-7.0), s21_floor(-7.0));
} END_TEST

START_TEST(s21_floor_test6) {
    ck_assert_double_eq(floor(-98.1), s21_floor(-98.1));
} END_TEST

START_TEST(s21_floor_test7) {
    ck_assert_double_eq(floor(123.02), s21_floor(123.02));
} END_TEST

START_TEST(s21_floor_test8) {
    ck_assert_double_eq(floor(MAXFLOAT), s21_floor(MAXFLOAT));
} END_TEST

START_TEST(s21_floor_test9) {
    ck_assert_double_eq(floor(-10009.555), s21_floor(-10009.555));
} END_TEST

START_TEST(s21_floor_test10) {
    ck_assert_double_eq(floor(-0.10009), s21_floor(-0.10009));
} END_TEST

START_TEST(s21_floor_test11) {
    ck_assert_double_eq(floor(-1e-23), s21_floor(-1e-23));
} END_TEST

START_TEST(s21_floor_test12) {
    ck_assert_double_eq(floor(100091234.5), s21_floor(100091234.5));
} END_TEST

START_TEST(s21_floor_test13) {
    ck_assert_double_eq(floor(7), s21_floor(7));
} END_TEST

START_TEST(s21_floor_test14) {
    ck_assert_double_eq(floor(0), s21_floor(0));
} END_TEST

START_TEST(s21_floor_test15) {
    ck_assert_double_eq(floor(0.0), s21_floor(0.0));
} END_TEST

Suite *s21_Suite_floor() {
    Suite *s;
    s = suite_create("Floor Unit Test");

    TCase *tc1_s21_floor = tcase_create("test1_s21_floor");
    TCase *tc2_s21_floor = tcase_create("test2_s21_floor");
    TCase *tc3_s21_floor = tcase_create("test3_s21_floor");
    TCase *tc4_s21_floor = tcase_create("test4_s21_floor");
    TCase *tc5_s21_floor = tcase_create("test5_s21_floor");
    TCase *tc6_s21_floor = tcase_create("test6_s21_floor");
    TCase *tc7_s21_floor = tcase_create("test7_s21_floor");
    TCase *tc8_s21_floor = tcase_create("test8_s21_floor");
    TCase *tc9_s21_floor = tcase_create("test9_s21_floor");
    TCase *tc10_s21_floor = tcase_create("test10_s21_floor");
    TCase *tc11_s21_floor = tcase_create("test11_s21_floor");
    TCase *tc12_s21_floor = tcase_create("test12_s21_floor");
    TCase *tc13_s21_floor = tcase_create("test13_s21_floor");
    TCase *tc14_s21_floor = tcase_create("test14_s21_floor");
    TCase *tc15_s21_floor = tcase_create("test15_s21_floor");

    tcase_add_test(tc1_s21_floor, s21_floor_test1);
    tcase_add_test(tc2_s21_floor, s21_floor_test2);
    tcase_add_test(tc3_s21_floor, s21_floor_test3);
    tcase_add_test(tc4_s21_floor, s21_floor_test4);
    tcase_add_test(tc5_s21_floor, s21_floor_test5);
    tcase_add_test(tc6_s21_floor, s21_floor_test6);
    tcase_add_test(tc7_s21_floor, s21_floor_test7);
    tcase_add_test(tc8_s21_floor, s21_floor_test8);
    tcase_add_test(tc9_s21_floor, s21_floor_test9);
    tcase_add_test(tc10_s21_floor, s21_floor_test10);
    tcase_add_test(tc11_s21_floor, s21_floor_test11);
    tcase_add_test(tc12_s21_floor, s21_floor_test12);
    tcase_add_test(tc13_s21_floor, s21_floor_test13);
    tcase_add_test(tc14_s21_floor, s21_floor_test14);
    tcase_add_test(tc15_s21_floor, s21_floor_test15);

    suite_add_tcase(s, tc1_s21_floor);
    suite_add_tcase(s, tc2_s21_floor);
    suite_add_tcase(s, tc3_s21_floor);
    suite_add_tcase(s, tc4_s21_floor);
    suite_add_tcase(s, tc5_s21_floor);
    suite_add_tcase(s, tc6_s21_floor);
    suite_add_tcase(s, tc7_s21_floor);
    suite_add_tcase(s, tc8_s21_floor);
    suite_add_tcase(s, tc9_s21_floor);
    suite_add_tcase(s, tc10_s21_floor);
    suite_add_tcase(s, tc11_s21_floor);
    suite_add_tcase(s, tc12_s21_floor);
    suite_add_tcase(s, tc13_s21_floor);
    suite_add_tcase(s, tc14_s21_floor);
    suite_add_tcase(s, tc15_s21_floor);

    return s;
}
