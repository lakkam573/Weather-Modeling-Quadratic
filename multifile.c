#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    FILE *fp = fopen("weather_multi.txt", "r");

    if (!fp) {
        printf("File error\n");
        return 0;
    }

    while (fscanf(fp, "%f %f %f", &a, &b, &c) != EOF) {
        d = b*b - 4*a*c;
        printf("a=%.1f b=%.1f c=%.1f -> ", a, b, c);

        if (d > 0)
            printf("Roots: %.2f %.2f\n",
                   (-b + sqrt(d))/(2*a),
                   (-b - sqrt(d))/(2*a));
        else if (d == 0)
            printf("Root: %.2f\n", -b/(2*a));
        else
            printf("Complex roots\n");
    }

    fclose(fp);
    return 0;
}
