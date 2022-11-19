#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#define S21_M_PI        3.14159265358979323846264338327950288   /* pi             */
#define S21_M_LOG2E     1.44269504088896340735992468100189214   /* log2(e)        */
#define S21_M_LOG10E    0.434294481903251827651128918916605082  /* log10(e)       */
#define S21_M_E         2.71828182845904523536028747135266250   /* e              */
#define S21_NAN 0.0 / 0.0
#define POSITIVE_INF 1.0 / 0.0
#define NEGATIVE_INF -1.0 / 0.0
#define PRECIS 0.00000000001

#define DOUBLE_MAX 1.7976931348623158e308

int s21_abs(int x);
double s21_acos(double x);
double s21_asin(double x);
double s21_atan(double x);
double s21_ceil(double x);
double s21_cos(double x);
double s21_exp(double x);
double s21_fabs(double x);
double s21_floor(double x);
double s21_fmod(double x, double y);
double s21_log(double x);
double s21_pow(double x, double y);
double s21_sin(double x);
double s21_sqrt(double x);
double s21_tan(double x);

double absolute(double x);

#endif  // SRC_S21_MATH_H_
