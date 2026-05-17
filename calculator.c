#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double value_current;
    double value;
    char function;

    if (scanf("%lf %c %lf", &value_current, &function, &value) != 3) {
        return 0;
    }

    if (function == '+') {
        value_current += value;
    }
    else if (function == '-') {
        value_current -= value;
    }
    else if (function == '*') {
        value_current *= value;
    }
    else if (function == '/') {
        if (value == 0) {
            printf("Error: division by zero\n");
            return 1;
        }
        value_current /= value;
    }
    else if (function == '%') {
        if (value == 0) {
            printf("Error: modulo by zero\n");
            return 1;
        }
        value_current = fmod(value_current, value);
    }
    else if (function == '^') {
        value_current = pow(value_current, value);
    }
    printf("%g\n", value_current);

    while (scanf(" %c %lf", &function, &value) == 2) {
        if (function == '+') {
            value_current += value;
        }
        else if (function == '-') {
            value_current -= value;
        }
        else if (function == '*') {
            value_current *= value;
        }
        else if (function == '/') {
            if (value == 0) {
                printf("Error: division by zero\n");
                return 1;
            }
            value_current /= value;
        }
        else if (function == '%') {
            if (value == 0) {
                printf("Error: modulo by zero\n");
                return 1;
            }
            value_current = fmod(value_current, value);
        }
        else if (function == '^') {
            value_current = pow(value_current, value);
        }
        else if (function == 'r') {
            // square root — ignores the value after it, but still consumes it
            if (value_current < 0) {
                printf("Error: sqrt of negative\n");
                return 1;
            }
            value_current = sqrt(value_current);
        }
        else if (function == 'c') {
            // clear / reset to the next value
            value_current = value;
        }
        printf("%g\n", value_current);
    }

    return 0;
}