#include <stdio.h>

int main(){
    int Number, count_1[10]={0}, count_2[10]={0}, i, counter;
    printf("Enter two numbers");
    scanf("%d", &Number);
    while (Number != 0){
        count_1[(Number % 10)]++;
        Number /= 10;
    }
    scanf("%d", &Number);
    while (Number != 0){
        count_2[(Number % 10)]++;
        Number /= 10;
        }
    for (i=0;i<10;i++){
        if (count_1[i] == count_2[i]){
            counter++;
        }
    if (counter == 10)
        printf("两个数字完全由相同数字组成");
    else
        printf("两个数字由不同数字组成");
    }
}
