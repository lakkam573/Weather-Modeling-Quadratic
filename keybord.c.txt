#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;

    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    d = b*b - 4*a*c;

    if (d > 0)
        printf("Roots: %.2f , %.2f\n",
               (-b + sqrt(d))/(2*a),
               (-b - sqrt(d))/(2*a));
    else if (d == 0)
        printf("Root: %.2f\n", -b/(2*a));
    else
        printf("Complex roots\n");

    return 0;
}
