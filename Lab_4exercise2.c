#include <stdio.h>

int main(){
    int User_Number, i, B_Number=0;
    printf("Enter 4 numbers");
    for (i=0;i<4;i++){
        scanf("%d", &User_Number);
        if (User_Number >= B_Number){
        B_Number = User_Number;
        }
    }
    printf("The largest number is : %d", B_Number);
    return 0;
}
