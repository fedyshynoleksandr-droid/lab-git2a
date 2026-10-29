// Task 1: calculate u.
#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y, u;
    int D = 0;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    /* коло з центром (-1, 0), радіус 1 */
    if (pow(x + 1, 2) + pow(y, 2) <= 1)
        D = 1;

    /*коло з центром(3, -0.5), радіус 1 */
    if (pow(x - 3, 2) + pow(y + 0.5, 2) <= 1)
        D = 1;

    /* Еліпс */
    if (pow((x - 3) / 2.0, 2) +
        pow((y - 0.5) / 0.5, 2) <= 1)
        D = 1;

    /* прямокутники */
    if (x >= 0 && x <= 1 && y >= -1 && y <= 0)
        D = 1;

    if (x >= 1 && x <= 5 && y >= 1.5 && y <= 2.5)
        D = 1;

    if (x >= 1 && x <= 2 && y >= 2.5 && y <= 3.5)
        D = 1;

    if (x >= 4 && x <= 5 && y >= 2.5 && y <= 3.5)
        D = 1;

    if (x >= 4 && x <= 5 && y >= -0.5 && y <= 0.5)
        D = 1;

    if (x >= 5 && x <= 6 && y >= -1.5 && y <= -0.5)
        D = 1;

    if (D) {
        u = y * y;
    } else {
        if (x < 0) {
            printf("Вираз не має дійсного значення для x < 0.\n");
            return 1;
        }

        u = y * y * x - sqrt(x);
    }

    printf("u = %lf\n", u);

    return 0;
}