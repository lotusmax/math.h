#include "./../s21_math.h"
//#include <stdio.h>

long double s21_fabs(long double x) {
    if(x != x)
        return S21_NAN;
    return x < 0 ? -x: x;
}

/* int main() {
    long double x;
    scanf("%Lf", &x);
    long double result = s21_fabs(x);
    printf("%Lf", result);
    return 0;
} */
