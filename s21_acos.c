#include "./../s21_math.h"

long double s21_acos(double x) {
    long double ans = S21_NAN;
    if (s21_fabs(-1.0 - x) < S21_EPS)
        ans = S21_PI;
    else if (s21_fabs(x - 1) < S21_EPS)
        ans = 0;
    else if (x > -1.0 && x < 1.0)
        ans = S21_PI / 2 - s21_asin(x);
    return ans;
}

