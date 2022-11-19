#include "s21_math.h"

double s21_exp(double x) {
    long double result, temporary;
    int flag = 0;
    int count = 1;
    if (x < 0) {
        x *= -1;
        flag = 1;
    }
    for (result = 1, temporary = 1; s21_fabs(result) > PRECIS; ++count) {
        result *= x / count;
        temporary += result;
        if (temporary > DOUBLE_MAX) {
            temporary = POSITIVE_INF;
            break;
        }
    }
    if (flag == 1) {
        if (temporary > DOUBLE_MAX) {
            temporary = 0;
        } else {
            temporary = 1. / temporary;
        }
    }
    return temporary;
}
