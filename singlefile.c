#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    FILE *fp;

    fp = fopen("weather.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    fscanf(fp, "%f %f %f", &a, &b, &c);
    fclose(fp);

    d = b*b - 4*a*c;

    if (d >= 0)
        printf("Roots: %.2f , %.2f\n",
               (-b + sqrt(d))/(2*a),
               (-b - sqrt(d))/(2*a));
    else
        printf("Complex roots\n");

    return 0;
}
