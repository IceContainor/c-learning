#include <stdio.h>

int main() {

    int num[10] = {0}, User_Number, site, i, repeat = 0;

    printf("Enter a number:");
    scanf("%d", &User_Number);

   while (User_Number > 0){
        site = User_Number % 10;
        User_Number = User_Number / 10;
        num[site] ++;
   }
   for (i=0;i<10;i++){
        if (num[i] > 1){
            repeat = 1;
            break;
        }
   }

   if (repeat){
        printf("Repeated digits\n");
   }
    else{
        printf("No repeated digit\n");
    }
}
