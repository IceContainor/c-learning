#include <stdio.h>

int main(){

    int User_Number, num[10] = {0}, number, i, sum = 0;

    printf("Enter a number:");
    scanf("%d", &User_Number);
     while (User_Number > 0){
        number = User_Number % 10;
        num[number] ++;
        User_Number = User_Number / 10;
     }
     for (i=0; i<9;i++){
        sum = sum + i * num[i];
     }
    printf("The sum of the numbers that are less than 8 is:%d\n", sum);

    return 0;
}
