#include <stdio.h>

int main()
{
    printf("Enter a number with 5 digits after the decimal:");
    double User;
    scanf("%lf", &User);
    printf("%.1lf", User);
    printf("%.2lf", User);
    printf("%.3lf", User);
    printf("%.4lf", User);
    printf("%.5lf", User);
    return 0;
}
