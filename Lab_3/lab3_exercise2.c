#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, p, area;

    printf("input three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    p = (a+b+c)/2;
    area = sqrt(p*((p-a)*(p-b)*(p-c)));

    printf("the area is %d", area);
    return 0;
}
