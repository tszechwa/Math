#include "s21_math.h"

double s21_tan(double x) {
    double tan = 0;
    double sinus = s21_sin(x);
    double cosinus = s21_cos(x);
    if (s21_cos(x)) {
        tan = sinus / cosinus;
    } else {
        tan = S21_NAN;
    }
    return tan;
}
