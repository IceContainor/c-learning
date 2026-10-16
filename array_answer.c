#include <stdio.h>

int main(void) {
    int User_Number;
    int digits[20];      // 存每一位数字，最多 20 位
    int leng = 0;        // 位数（必须初始化）
    int i;

    printf("Enter a number: ");
    scanf("%d", &User_Number);

    // 处理负数
    if (User_Number < 0) User_Number = -User_Number;

    // 处理 0 这个特殊情况
    if (User_Number == 0) {
        printf("None\n");
        return 0;
    }

    // 1. 逐位拆数字，从右往左存进 digits
    int temp = User_Number;
    while (temp > 0) {
        digits[leng] = temp % 10;   // 注意：是 digits[leng]，不是 digits[leng-1]
        temp /= 10;
        leng++;
    }

    // 此时 digits 是倒序的：digits[0] 是个位，digits[leng-1] 是最高位
    // 2. 反转 digits，变成从左到右的顺序
    for (i = 0; i < leng / 2; i++) {
        int t = digits[i];
        digits[i] = digits[leng - 1 - i];
        digits[leng - 1 - i] = t;
    }

    // 3. 从左到右扫，用 seen[10] 记录见过哪些数字
    int seen[10] = {0};   // 初始化为 0
    int found = -1;       // -1 表示没找到

    for (i = 0; i < leng; i++) {
        int d = digits[i];
        if (seen[d]) {        // 之前见过
            found = d;
            break;            // 第一个重复，立即退出
        }
        seen[d] = 1;          // 标记为见过
    }

    // 4. 输出
    if (found != -1) {
        printf("Repeated digit: %d\n", found);
    } else {
        printf("None\n");
    }

    return 0;
}
