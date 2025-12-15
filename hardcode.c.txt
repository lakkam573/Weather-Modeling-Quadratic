#include <stdio.h>
#include <math.h>

int main() {
    float a = 1.0, b = -5.0, c = 6.0;
    float d, r1, r2;

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Two real roots: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2*a);
        printf("One real root: %.2f\n", r1);
    } else {
        printf("No real roots (weather trend unstable)\n");
    }

    return 0;
}
