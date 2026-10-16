///输入两个整数（可能很大，用字符串读入），分别求出每个数的各位数字之和，再输
出。

#include <stdio.h>

int main()
{
    int Number_1, Number_2, sum_1=0, sum_2=0;

    printf("Enter two numbers:");
    scanf("%d%d", &Number_1, &Number_2);

    while (Number_1 != 0){
        sum_1 += Number_1 % 10;
        Number_1 /= 10;
    }

    while (Number_2 != 0){
        sum_2 += Number_2 % 10;
        Number_2 /= 10;
    }

    printf("%d %d", sum_1, sum_2);

    return 0;
}
