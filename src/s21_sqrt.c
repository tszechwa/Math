#include "s21_math.h"

double s21_sqrt(double x) {
    double result = 1.0;
    if (x < 0) {
        result = S21_NAN;
        } else if (x == 0) {
            result = 0;
        } else {
        for (int i = 0 ; i <= 10; i++) {
            result = result - ((result * result - x) / (2 * result));
        }
    }
    return result;
}
