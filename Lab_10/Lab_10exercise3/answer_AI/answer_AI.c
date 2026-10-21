#include <stdio.h>

#define NAME_LEN 30

// 定义结构体
struct Part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

int main() {
    // 声明一个包含 5 个元素的结构体数组
    struct Part warehouse[5];

    // 利用指定初始化器，只初始化数组的第一个元素（Part 1）
    warehouse[0] = (struct Part){ .number = 2000, .name = "Disk Drive", .on_hand = 100 };

    // 名字列表，用于后续赋值
    char *names[5] = {"Disk Drive", "Printer", "Mouse", "Keyboard", "Monitor"};

    // 利用幻灯片 269 的操作生成后 4 个元素
    for (int i = 1; i < 5; i++) {
        // 1. 整体复制前一个元素的内容（模拟 part2 = part1）
        warehouse[i] = warehouse[i - 1];

        // 2. 修改特定成员
        warehouse[i].number++;       // 编号 + 1
        warehouse[i].on_hand += 10;  // 数量 + 10

        // 3. 因为 name 是数组，不能直接等号赋值，需要用 strcpy
        // 这里为了避免引入 <string.h>，我用 sprintf 替代，或者你可以 #include <string.h> 用 strcpy
        sprintf(warehouse[i].name, "%s", names[i]);
    }

    // 循环打印
    printf("%-10s %-15s %s\n", "Number", "Name", "Quantity");
    printf("--------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %-15s %d\n", warehouse[i].number, warehouse[i].name, warehouse[i].on_hand);
    }

    return 0;
}
