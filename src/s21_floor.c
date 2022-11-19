#include "s21_math.h"

double s21_floor(double x) {
    if (x >= DOUBLE_MAX || x <= -DOUBLE_MAX || x != x) {
        return x;
    }
    int result = (int)x;
    if ((x - result)) {
        if (x < 0) {
            result -= 1;
        }
    }
    return (float)result;
}
