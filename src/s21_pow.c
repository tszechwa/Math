#include "s21_math.h"

double s21_pow(double x, double y) {
    double result = 0;
    if (y != POSITIVE_INF) {
        result = s21_exp(y * s21_log(x));
    }
    return result;
}
