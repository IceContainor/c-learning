/* 输入一串数字，输出0-9每个数字各出现了多少次*/

#include <stdio.h>

int main(){
    int Number, digits[10]={0}, i;
    printf("输入一个数字");
    scanf("%d", &Number);
    while (Number != 0){
        digits[(Number%10)] ++;
        Number /= 10;
    }
    for (i=0;i<10;i++){
        if (digits[i]==0)
            continue;
        else
            printf("数字%d出现了%d次\n", i, digits[i]);
    }
}
