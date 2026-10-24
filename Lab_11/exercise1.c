#include <stdio.h>
void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}
int main(void)
{
    long ip;
    double fp;
    decompose(3.14159, &ip, &fp);
    printf("ip = %d\nfp = %f\n", ip, fp);
    return 0;
}
