#include "s21_math.h"

double s21_atan(double x) {
    double sum = 0;
    double m = x;
    if (x < 0) {
        m = -m;
    }
    if (s21_fabs(x) > 1) {
        m = 1 / m;
    }
    double tmp = m;
    double sign = 1;
    double dividend = m;
    double divider = 1;
    while (s21_fabs(tmp) > PRECIS) {
        sum += tmp;
        sign *= -1;
        dividend *= m * m;
        divider += 2;
        tmp = sign * dividend / divider;
    }
    if (s21_fabs(x) > 1)
        sum = S21_M_PI / 2 - sum;
    if (x < 0) {
        sum = -sum;
    }
    return sum;
}
