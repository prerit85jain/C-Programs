#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    switch (d > 0)
    {
        case 1:
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root1 = %.2f and Root2 = %.2f", root1, root2);
            break;

        case 0:
            switch (d == 0)
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and same.\n");
                    printf("Root1 = Root2 = %.2f", root1);
                    break;

                case 0:
                    printf("Roots are complex and different.\n");
                    printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi", -b/(2*a), sqrt(-d)/(2*a), -b/(2*a), sqrt(-d)/(2*a));
                    break;
            }
            break;
    }

    return 0;
}

