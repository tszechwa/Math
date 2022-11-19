#include "s21_math.h"

double s21_ceil(double x) {
    int result = (int)x;
    if ((x - result)) {
        if (x > 0) {
            result += 1;
        }
    }
    return (float)result;
}
