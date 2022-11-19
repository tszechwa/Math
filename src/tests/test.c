#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../s21_math.h"


START_TEST(s21_abs_to_positive) {
    int x = -5;
    ck_assert_int_eq(s21_abs(x), abs(x));
} END_TEST

START_TEST(s21_acos_positive_small) {
    int x = 0.92;
    ck_assert_int_eq(s21_acos(x), acos(x));
} END_TEST

START_TEST(s21_acos_positive_one) {
    int x = 1;
    ck_assert_int_eq(s21_acos(x), acos(x));
} END_TEST

START_TEST(s21_abs_zero) {
    int x = 0;
    ck_assert_int_eq(s21_abs(x), abs(x));
} END_TEST

START_TEST(s21_abs_to_negative) {
    double x = +5;
    ck_assert_double_eq(s21_abs(x), abs(x));
} END_TEST

START_TEST(s21_acos_negative) {
    double x = -0.92;
    ck_assert_double_eq_tol(s21_acos(x), acos(x), 0.000001);
} END_TEST

START_TEST(s21_acos_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_acos(x), acos(x), 0.000001);
} END_TEST

START_TEST(s21_asin_positive_small) {
    double x = 0.923345;
    ck_assert_double_eq_tol(s21_asin(x), asin(x), 0.000001);
} END_TEST

START_TEST(s21_asin_positive_one) {
    double x = 1;
    ck_assert_double_eq_tol(s21_asin(x), asin(x), 0.000001);
} END_TEST

START_TEST(s21_asin_negative) {
    double x = -0.92234;
    ck_assert_double_eq_tol(s21_asin(x), asin(x), 0.000001);
} END_TEST

START_TEST(s21_asin_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_asin(x), asin(x), 0.000001);
} END_TEST

START_TEST(s21_atan_positive) {
    double x = 0.92;
    ck_assert_double_eq_tol(s21_atan(x), atan(x), 0.000001);
} END_TEST

START_TEST(s21_atan_negative) {
    double x = -0.92;
    ck_assert_double_eq_tol(s21_atan(x), atan(x), 0.000001);
} END_TEST

START_TEST(s21_atan_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_atan(x), atan(x), 0.000001);
} END_TEST

START_TEST(s21_atan_more1) {
    double x = 14.32;
    ck_assert_double_eq_tol(s21_atan(x), atan(x), 0.000001);
} END_TEST

START_TEST(s21_atan_less1) {
    double x = -100.5;
    ck_assert_double_eq_tol(s21_atan(x), atan(x), 0.000001);
} END_TEST

START_TEST(s21_ceil_down) {
    double x = -5.555;
    ck_assert_double_eq(s21_ceil(x), ceil(x));
} END_TEST

START_TEST(s21_ceil_up) {
    double x = 5.923;
    ck_assert_double_eq(s21_ceil(x), ceil(x));
} END_TEST

START_TEST(s21_ceil_zero) {
    double x = 0;
    ck_assert_double_eq(s21_ceil(x), ceil(x));
} END_TEST

START_TEST(s21_cos_positive) {
    double x = 0.92;
    ck_assert_double_eq_tol(s21_cos(x), cos(x), 0.000001);
} END_TEST

START_TEST(s21_cos_negative) {
    double x = -0.92;
    ck_assert_double_eq_tol(s21_cos(x), cos(x), 0.000001);
} END_TEST

START_TEST(s21_cos_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_cos(x), cos(x), 0.000001);
} END_TEST

START_TEST(s21_exp_normal) {
    double x = 5.90437;
    ck_assert_double_eq_tol(s21_exp(x), exp(x), 0.000001);
} END_TEST

START_TEST(s21_exp_negative) {
    double x = -29.90437;
    ck_assert_double_eq_tol(s21_exp(x), exp(x), 0.000001);
} END_TEST

START_TEST(s21_exp_double) {
    double x = 20;
    ck_assert_double_eq_tol(s21_exp(x), exp(x), 0.000001);
} END_TEST

START_TEST(s21_exp_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_exp(x), exp(x), 0.000001);
} END_TEST

START_TEST(s21_fabs_to_positive) {
    double x = -5.555;
    ck_assert_double_eq(s21_fabs(x), fabs(x));
} END_TEST

START_TEST(s21_fabs_to_negative) {
    double x = 5.123;
    ck_assert_double_eq(s21_fabs(x), fabs(x));
} END_TEST

START_TEST(s21_fabs_zero) {
    double x = 0;
    ck_assert_double_eq(s21_fabs(x), fabs(x));
} END_TEST

START_TEST(s21_floor_up) {
    double x = -5.555;
    ck_assert_double_eq(s21_floor(x), floor(x));
} END_TEST

START_TEST(s21_floor_down) {
    double x = 5.123;
    ck_assert_double_eq(s21_floor(x), floor(x));
} END_TEST

START_TEST(s21_floor_zero) {
    double x = 0;
    ck_assert_double_eq(s21_floor(x), floor(x));
} END_TEST

START_TEST(s21_fmod_positive) {
    double x = 5.555;
    double y = 5.000;
    ck_assert_double_eq(s21_fmod(x, y), fmod(x, y));
} END_TEST

START_TEST(s21_fmod_negative) {
    double x = 5.123;
    double y = 5;
    ck_assert_double_eq(s21_fmod(x, y), fmod(x, y));
} END_TEST

START_TEST(s21_fmod_division_zero) {
    double x = 5.555;
    double y = 0;
    ck_assert_double_nan(s21_fmod(x, y));
    ck_assert_double_nan(fmod(x, y));
} END_TEST

START_TEST(s21_fmod_division_inf) {
    double x = POSITIVE_INF;
    double y = 5;
    ck_assert_double_nan(s21_fmod(x, y));
    ck_assert_double_nan(fmod(x, y));
} END_TEST

START_TEST(s21_fmod_empty) {
    double x = 55.555;
    double y = 5.555;
    ck_assert_double_eq(s21_fmod(x, y), fmod(x, y));
} END_TEST

START_TEST(s21_log_positive) {
    double x = 15.55;
    ck_assert_double_eq_tol(s21_log(x), log(x), 0.000001);
} END_TEST

START_TEST(s21_log_positive2) {
    double x = 155.55;
    ck_assert_double_eq_tol(s21_log(x), log(x), 0.000001);
} END_TEST

START_TEST(s21_pow_normal) {
    double x = 3.32;
    double y = 3.32;
    ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), 0.000001);
} END_TEST

START_TEST(s21_pow_negative_degree) {
    double x = 3.32;
    double y = -3.32;
    ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), 0.000001);
} END_TEST

START_TEST(s21_pow_zero_degree) {
    double x = 5.555;
    double y = 0;
    ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), 0.000001);
} END_TEST

START_TEST(s21_pow_zero_normal) {
    double x = 0;
    double y = 3.3;
    ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), 0.000001);
} END_TEST

START_TEST(s21_pow_double) {
    double x = 2;
    double y = 3.9;
    ck_assert_double_eq_tol(s21_pow(x, y), pow(x, y), 0.000001);
} END_TEST

START_TEST(s21_sin_positive) {
    double x = 0.92;
    ck_assert_double_eq_tol(s21_sin(x), sin(x), 0.000001);
} END_TEST

START_TEST(s21_sin_negative) {
    double x = -0.92;
    ck_assert_double_eq_tol(s21_sin(x), sin(x), 0.000001);
} END_TEST

START_TEST(s21_sin_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_sin(x), sin(x), 0.000001);
} END_TEST

START_TEST(s21_sqrt_positive) {
    double x = 5555.5;
    ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), 0.000001);
} END_TEST

START_TEST(s21_sqrt_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_sqrt(x), sqrt(x), 0.000001);
} END_TEST

START_TEST(s21_tan_positive) {
    double x = 0.92;
    ck_assert_double_eq_tol(s21_tan(x), tan(x), 0.000001);
} END_TEST

START_TEST(s21_tan_negative) {
    double x = -0.92;
    ck_assert_double_eq_tol(s21_tan(x), tan(x), 0.000001);
} END_TEST

START_TEST(s21_tan_zero) {
    double x = 0;
    ck_assert_double_eq_tol(s21_tan(x), tan(x), 0.000001);
} END_TEST

START_TEST(s21_tan_more1) {
    double x = 14.32;
    ck_assert_double_eq_tol(s21_tan(x), tan(x), 0.000001);
} END_TEST

START_TEST(s21_tan_less1) {
    double x = -10.5;
    ck_assert_double_eq_tol(s21_tan(x), tan(x), 0.000001);
} END_TEST

Suite *test_suite(void) {
    Suite *s;
    TCase *tc_abs;    // 1
    TCase *tc_acos;   // 2
    TCase *tc_asin;   // 3
    TCase *tc_atan;   // 4
    TCase *tc_ceil;   // 5
    TCase *tc_cos;    // 6
    TCase *tc_exp;    // 7
    TCase *tc_fabs;   // 8
    TCase *tc_floor;  // 9
    TCase *tc_fmod;   // 10
    TCase *tc_log;    // 11
    TCase *tc_pow;    // 12
    TCase *tc_sin;    // 13
    TCase *tc_sqrt;   // 14
    TCase *tc_tan;    // 15

    s = suite_create("Library tests");

    tc_abs = tcase_create("abs");
    suite_add_tcase(s, tc_abs);
    tcase_add_test(tc_abs, s21_abs_to_positive);
    tcase_add_test(tc_abs, s21_abs_to_negative);
    tcase_add_test(tc_abs, s21_abs_zero);

    tc_acos = tcase_create("acos");
    suite_add_tcase(s, tc_acos);
    tcase_add_test(tc_acos, s21_acos_positive_small);
    tcase_add_test(tc_acos, s21_acos_positive_one);
    tcase_add_test(tc_acos, s21_acos_negative);
    tcase_add_test(tc_acos, s21_acos_zero);

    tc_asin = tcase_create("asin");
    suite_add_tcase(s, tc_asin);
    tcase_add_test(tc_asin, s21_asin_positive_small);
    tcase_add_test(tc_asin, s21_asin_positive_one);
    tcase_add_test(tc_asin, s21_asin_negative);
    tcase_add_test(tc_asin, s21_asin_zero);

    tc_atan = tcase_create("atan");
    suite_add_tcase(s, tc_atan);
    tcase_add_test(tc_atan, s21_atan_positive);
    tcase_add_test(tc_atan, s21_atan_negative);
    tcase_add_test(tc_atan, s21_atan_zero);
    tcase_add_test(tc_atan, s21_atan_more1);
    tcase_add_test(tc_atan, s21_atan_less1);

    tc_ceil = tcase_create("ceil");
    suite_add_tcase(s, tc_ceil);
    tcase_add_test(tc_ceil, s21_ceil_down);
    tcase_add_test(tc_ceil, s21_ceil_up);
    tcase_add_test(tc_ceil, s21_ceil_zero);

    tc_cos = tcase_create("cos");
    suite_add_tcase(s, tc_cos);
    tcase_add_test(tc_cos, s21_cos_positive);
    tcase_add_test(tc_cos, s21_cos_negative);
    tcase_add_test(tc_cos, s21_cos_zero);

    tc_exp = tcase_create("exp");
    suite_add_tcase(s, tc_exp);
    tcase_add_test(tc_exp, s21_exp_normal);
    tcase_add_test(tc_exp, s21_exp_negative);
    tcase_add_test(tc_exp, s21_exp_double);
    tcase_add_test(tc_exp, s21_exp_zero);

    tc_fabs = tcase_create("fabs");
    suite_add_tcase(s, tc_fabs);
    tcase_add_test(tc_fabs, s21_fabs_to_positive);
    tcase_add_test(tc_fabs, s21_fabs_to_negative);
    tcase_add_test(tc_fabs, s21_fabs_zero);

    tc_floor = tcase_create("floor");
    suite_add_tcase(s, tc_floor);
    tcase_add_test(tc_floor, s21_floor_up);
    tcase_add_test(tc_floor, s21_floor_down);
    tcase_add_test(tc_floor, s21_floor_zero);

    tc_fmod = tcase_create("fmod");
    suite_add_tcase(s, tc_fmod);
    tcase_add_test(tc_fmod, s21_fmod_positive);
    tcase_add_test(tc_fmod, s21_fmod_negative);
    tcase_add_test(tc_fmod, s21_fmod_division_zero);
    tcase_add_test(tc_fmod, s21_fmod_division_inf);
    tcase_add_test(tc_fmod, s21_fmod_empty);

    tc_log = tcase_create("log");
    suite_add_tcase(s, tc_log);
    tcase_add_test(tc_log, s21_log_positive2);

    tc_pow = tcase_create("pow");
    suite_add_tcase(s, tc_pow);
    tcase_add_test(tc_pow, s21_pow_normal);
    tcase_add_test(tc_pow, s21_pow_negative_degree);
    tcase_add_test(tc_pow, s21_pow_zero_degree);
    tcase_add_test(tc_pow, s21_pow_zero_normal);
    tcase_add_test(tc_pow, s21_pow_double);

    tc_sin = tcase_create("sin");
    suite_add_tcase(s, tc_sin);
    tcase_add_test(tc_sin, s21_sin_positive);
    tcase_add_test(tc_sin, s21_sin_negative);
    tcase_add_test(tc_sin, s21_sin_zero);

    tc_sqrt = tcase_create("sqrt");
    suite_add_tcase(s, tc_sqrt);
    tcase_add_test(tc_sqrt, s21_sqrt_positive);
    tcase_add_test(tc_sqrt, s21_sqrt_zero);

    tc_tan = tcase_create("tan");
    suite_add_tcase(s, tc_tan);
    tcase_add_test(tc_tan, s21_tan_positive);
    tcase_add_test(tc_tan, s21_tan_negative);
    tcase_add_test(tc_tan, s21_tan_zero);
    tcase_add_test(tc_tan, s21_tan_more1);
    tcase_add_test(tc_tan, s21_tan_less1);

    return s;
}

double main(void) {
  double no_failed = 0;
  Suite *s;
  SRunner *runner;

  s = test_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
