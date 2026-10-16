#include <stdio.h>

double polynomial(double x){
    double ans=(((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    return ans;
    }

int main()
{
    double Input, answer;
    printf("Enter a number:");
    scanf("%lf", &Input);
    answer=polynomial(Input);
    printf("The answer of polynomial ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 is:%lf\n", answer);
    return 0;
}
