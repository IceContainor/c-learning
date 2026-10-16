#include <stdio.h>

int main()
{
    int Number, num[100] = {0}, res = 0;
    printf("Enter some intergs:");
    for (int i=0;i<100;i++){
        scanf("%d", &Number);
        num[i]=Number;
        if (num[i]==0){
            break;
        }
    }
    for (int i=0;i<100;i++){
        for (int j=i+1;j<100;j++){
            if (num[i] == num[j]){res =1;}
            }
        }
    if (res){
        printf("有重复数字");
    }
    else{
        printf("没有重复数字");
    }
}

