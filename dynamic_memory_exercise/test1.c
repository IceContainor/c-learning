/*
题目描述：
编写一个函数 int* createIntArray(int n)，该函数接收一个整数 n，动态申请一个包含 n 个 int 元素的数组。要求：

如果分配失败，返回 NULL。

如果分配成功，将数组里的所有元素初始化为 0，并把首地址返回。
(要求在主函数中调用该函数，并测试能否正常读写)。

提示：

用什么函数申请内存并清零最合适？
*/
#include <stdio.h>
#include <stdlib.h>

int* creatIntArray(int n){

    if (n <= 0) {
        return NULL;	///判断n是否可用
    }

    int *number;
    number = (int *)calloc(n, sizeof(int));	///用calloc可以直接初始化

    if (number == NULL) {
        printf("The memory can't be allocated!");
        return NULL;
    }

    return number;
}

int main() {
    int *arr = creatIntArray(10);

    if (arr != NULL) {
        printf("Before: %d", arr[0]);
        arr[0]=99;
        printf("After: %d", arr[0]);
        free(arr);
    }
    return 0;
}
