#include <stdio.h>

int main(){
    int User_Number, digits = 0;
    printf("Enter a number:");
    do{
        scanf("%d", &User_Number);
    }while (User_Number>0 && User_Number <1000);
    while (User_Number != 0){
        User_Number = User_Number / 10;
        digits ++;
    }
    printf("%d", digits);
    return 0;
}
