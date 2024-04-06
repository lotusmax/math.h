#include "./../s21_math.h"
#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n -1);
}

double s21_pow(double base, int exponent) {
    double result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

double s21_sign(double x) {
    if (x > 0) {
        return 1;
    } else if (x < 0) {
        return -1;
    } else {
        return 0;
    }
}

double s21_sin(double x) {
    while (s21_fabc(x) >= 2 * S21_PI) {
        x -= s21_sign(x) * 2 * S21_PI;
    }
    double result = x;
    for(int i = 1; i <= 4; i++) {
        double term = (double)s21_pow(x, 1 + 2 * i) / factorial(1 + 2 * i);
        if(i % 2 == 1) {
            result -= term;
        } else {
            result += term;
        }
    }
    return result;
}

int main() {
    // Example usage of the functions
    double angleInDegrees = 45.0; // Angle in degrees
    double angleInRadians = angleInDegrees * S21_PI / 180.0; // Convert to radians

    // Calculate sine of the angle
    double sineValue = s21_sin(angleInRadians);

    // Print the result
    printf("The sine of %.2f degrees is %.5f\n", angleInDegrees, sineValue);

    return 0;
}