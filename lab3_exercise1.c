#include <stdio.h>
#include <math.h>

int main()
{
    float absavg = 0.0f, numbers;
    for(int i = 0; i <10; i ++ )
    {
        printf("input a number:\n");
        scanf("%f", &numbers);

        absavg += abs(numbers);
    }
    printf("the absavg is:%.1f", absavg/10.0);
    return 0;
}
