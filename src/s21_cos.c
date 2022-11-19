#include "s21_math.h"

double s21_cos(double x) {
    x = (double)s21_fmod(x, 2 * S21_M_PI);
    double k = 1, sum = k;
    for (int i = 2; s21_fabs(k) > PRECIS; i += 2) {
        k *= -1 * x * x / (i - 1) / i;
        sum += k;
    }
    return sum;
}
