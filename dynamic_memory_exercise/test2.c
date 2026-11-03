/*
先申请一个能容纳5个数字的数组，然后扩容为10个
在此过程中，计算数字之和并返回地址
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, sum=0;
    arr = (int *)malloc(sizeof(int)*5);
    if (arr == NULL) {
        printf("The memory can't be allocated:");
        return 0;
    }

    printf("Enter 5 numbers :");
    for (int i=0;i<5;i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<5;i++) {
        sum += arr[i];
    }

    printf("Sum of the number :%d    Location :%p\n",sum, arr);

    int *temp = (int *)realloc(arr, sizeof(int)*10);
    if (temp == NULL) {
        printf("The memory can't be allocated!\n");
        printf("Origin array still stayed!");
        return 1;
    }

    printf("Enter 5 more numbers:");
    for (int i=5;i<10;i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=5;i<10;i++) {
        sum += arr[i];
    }

    printf("Sum of the number :%d	 New location :%p", sum, arr);

    free(arr);
    arr = NULL;

    return 0;
}
