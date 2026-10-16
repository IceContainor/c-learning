#include <stdio.h>

int main(){

    int User, units, tens;
    char *First_Number[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char *Second_Number[10]={"  ","one","two","three","four","five","six","seven","eight","nine"};

    printf("Enter a number between 0 to 99:");

    scanf("%d", &User);

    units = User % 10;
    tens = User / 10;

    if (User == 10)
        printf("Ten");
    else if (User == 11)
        printf("Eleven");
    else if (User == 12)
        printf("Twelve");
    else if (User == 13)
        printf("Thirteen");
    else if (User == 14)
        printf("Fourteen");
    else if (User == 15)
        printf("Fifteen");
    else if (User == 16)
        printf("Sixteen");
    else if (User == 17)
        printf("Seventeen");
    else if (User == 18)
        printf("Eighteen");
    else if (User == 19)
        printf("Nineteen");
    else{
        printf("%s %s", First_Number[tens-2], Second_Number[units]);
    }

    return 0;

}
