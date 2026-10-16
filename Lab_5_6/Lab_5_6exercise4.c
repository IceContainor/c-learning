#include <stdio.h>

int main(){
    float User_Number, save;
    printf("Enter numbers (0.0 to terminate):");

    do{
        scanf("%f", &User_Number);
        if (User_Number >= save){
            save = User_Number;
        }
    }while (User_Number != 0.0f);

    printf("The largest number entered is:%f", save);
    return 0;
}
