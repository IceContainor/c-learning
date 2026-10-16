#include <stdio.h>

int factorial(int n)
{
    if (n<=1){return 1;}
    return n*factorial(n-1);
}

int main()
{
    int num, res;
    printf("Enter a number:");
    scanf("%d", &num);
    res = factorial(num);
    printf("%d!=%d", num, res);
    return 0;
}
