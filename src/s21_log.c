#include "s21_math.h"

double s21_log(double a) {
    long double ln = 0;
    if (a == 0) {
        ln = NEGATIVE_INF;
    } else if (a < 0) {
        ln = S21_NAN;
    } else {
        double result = (a - 1) / (a + 1);
        for (int n = 1, k = 1; n < 2000000; ++n, k += 2) {
            ln += result / k;
            result *= ((a - 1) / (a + 1)) * ((a - 1) / (a + 1));
        }
        ln = ln * 2;
    }
    return ln;
}
