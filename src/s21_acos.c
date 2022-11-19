#include "s21_math.h"

double s21_acos(double x) {
    long double result = 1.0;
    if ((x > 1) || (x < -1)) {
        result = S21_NAN;
    } else if (x == 1 || x == -1) {
        result = 0;
        if (x < 0) result = S21_M_PI;
    } else {
        long double temporary_result = 0.1;
        while (s21_fabs((double)temporary_result) > PRECIS) {
            temporary_result =
                (s21_cos((double)result) - x) / s21_sin((double)result);
            result += temporary_result;
        }
    }
    return result;
}
