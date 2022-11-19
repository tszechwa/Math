#include "s21_math.h"

double s21_asin(double x) {
    long double result = 0;
    if ((x > 1) || (x < -1)) {
        result = S21_NAN;
    } else if (x == 1 || x == -1) {
        result = S21_M_PI / 2;
        if (x < 0) result *= -1;
    } else {
        long double temporary_result = 0.1;
        while (s21_fabs((double)temporary_result) > PRECIS) {
            temporary_result =
                (x - s21_sin((double)result)) / s21_cos((double)result);
            result += temporary_result;
        }
    }
    return result;
}
