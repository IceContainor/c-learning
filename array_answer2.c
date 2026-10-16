//从左往右找出第一个重复的数字（修正版）
#include <stdio.h>
int main(void) {
    int User_Number;
    printf("Enter a number:");
    if (scanf("%d", &User_Number) != 1) {
        printf("输入无效\n");
        return 1;
    }
    if (User_Number < 0) User_Number = -User_Number;   /* 负数先取绝对值 */
    /* 1) 求位数：用 do-while，0 也算 1 位 */
    int n = 0;
    {
        int Copy = User_Number;
        do { n++; Copy /= 10; } while (Copy != 0);
    }
    /* 2) 逐位存入数组，最高位在左（用临时变量，别把 n 用掉） */
    int num[n];
    {
        int Copy = User_Number;
        for (int k = n - 1; k >= 0; k--) {
            num[k] = Copy % 10;
            Copy /= 10;
        }
    /* 3) 从左往右找“第一个后面还出现过”的数字，找到就立刻停 */
    int res = -1;
    for (int i = 0; i < n && res == -1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] == num[j]) {
                res = num[i];
                break;          /* 跳出内层 */
            }
        }
    }
    if (res != -1) printf("第一个重复的数字是%d\n", res);
    else           printf("None\n");
    return 0;
}
