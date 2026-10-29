#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d;
    double x, y, z;
    double radicandX;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    printf("Enter d: ");
    scanf("%lf", &d);

    /* Obchyslennia x */
    radicandX = a * a * (c + 1) + d;

    if (radicandX < 0) {
        printf("Error: x is not a real number.\n");
        return 1;
    }

    x = sqrt(radicandX);

    /* Obchyslennia y */
    y = b - c * sqrt(4 + exp(d));

    printf("x = %lf\n", x);
    printf("y = %lf\n", y);

    /* Obchyslennia z */
    if (x > 0) {
        if (fabs(y) < 1e-12) {
            printf("Error: division by zero.\n");
            return 1;
        }

        z = x * x - 1.0 / y;
    } else {
        z = pow(y, 3) - pow(x, 4) + 1;
    }

    printf("z = %lf\n", z);

    return 0;
}