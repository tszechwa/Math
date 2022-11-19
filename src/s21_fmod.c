#include "s21_math.h"

double s21_fmod(double x, double y) {
    return x - y * s21_floor(x / y);
}
