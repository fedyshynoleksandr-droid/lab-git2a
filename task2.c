#include <stdio.h>
#include <math.h>

int main(void) {
    double h, a, b, c;
    double D, x1, x2;
    double radicand;

    printf("Enter h: ");
    scanf("%lf", &h);

    /* Perevirka tanhensa */
    if (fabs(cos(h)) < 1e-12) {
        printf("Error: tan(h) is undefined.\n");
        return 1;
    }

    /* Обчислення коефіцієнта a */
    a = sqrt(pow(sin(h + 1), 2) + 17);

    /* Обчислення коефіцієнта b */
    radicand = 4 + tan(h);

    if (radicand < 0) {
        printf("Error: square root is undefined.\n");
        return 1;
    }

    b = 10 - sqrt(radicand);

    /* Обчислення коефіцієнта c */
    c = a * h * cos(b * h)
        + b * h * sin(a * h);

    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);

    /* Обчислення дискримінанта */
    D = b * b - 4 * a * c;

    printf("Discriminant = %lf\n", D);

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        printf("Two real roots:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    } else if (fabs(D) < 1e-12) {
        x1 = -b / (2 * a);

        printf("One real root:\n");
        printf("x = %lf\n", x1);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}